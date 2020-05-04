from argparse import ArgumentParser
from os import uname
import subprocess
import tkinter as tk
from PIL import Image, ImageTk
from random import random
from colors import colors

parser = ArgumentParser(description='Shade arbitrary closed regions')
parser.add_argument('-c', '--color', type=str, default='green',
                    help='Choose a color')
parser.add_argument('-p', '--pattern', type=str, default='cross',
                    help='Choose a shading pattern')
parser.add_argument('-f', '--file', type=str, default='smiley.png',
                    help='Choose an input file')
parser.add_argument('-o', '--out', type=str, default='test.png',
                    help='Choose output file.')
parser.add_argument('-cp', '--custom-pattern', type=str,
                    help='Choose a file to use as custom fill pattern. The file                          must be the same size as your input image.')
args = parser.parse_args()

image = Image.open(args.file)
pixels = image.load()

vis = []
VISITED = 1
UNVISITED = 0
for i in range(image.size[1]):
  tmp = []
  for j in range(image.size[0]):
    tmp.append(UNVISITED)
  vis.append(tmp)

# Adding an invisible border around the edges
for i in range(image.size[0]):
  vis[i][0] = VISITED
  vis[i][image.size[1] - 1] = VISITED
for i in range(image.size[1]):
  vis[0][i] = VISITED
  vis[image.size[0] - 1][i] = VISITED

window = tk.Tk()
window.geometry(str(image.size[0]) + 'x' + str(image.size[1]))

imageTk = ImageTk.PhotoImage(image)
label = tk.Label(window, image=imageTk)
label.image = imageTk
label.grid()

UP = 1
DOWN = -1

uplist = []
downlist = []
agenda = {UP : uplist, DOWN : downlist}

origin = (0, 0)
interior_color = (0, 0, 0, 0)
color = colors[args.color]

# Note: Y axis is inverted on the screen.
vdir = UP

def simple_fill(point):
  pixels[point] = color

def random_fill(point):
  # Set density of fill below
  if random() < 0.2:
    pixels[point] = color 

def vertical_fill(point):
  # Set density of lines below
  if point[0] % 5 == 0:
    pixels[point] = color

def horizontal_fill(point):
  # Set density of lines below
  if point[1] % 5 == 0:
    pixels[point] = color

def cross_hatch(point):
  vertical_fill(point)
  horizontal_fill(point)

def empty_func(point):
  return

def custom_fill():
  if args.custom_pattern:
    if args.pattern != 'custom':
      print('Please add -p custom to use a custom fill pattern. Exiting.')
      exit(0)
    else:
      custom_image = Image.open(args.custom_pattern)
      custom_pixels = custom_image.load()
      for x in range(image.size[0]):
        for y in range(image.size[1]):
          if vis[x][y]:
            pixels[x, y] = custom_pixels[x, y] 

patterns = {'fill'       : simple_fill,
            'random'     : random_fill,
            'vertical'   : vertical_fill,
            'horizontal' : horizontal_fill,
            'cross'      : cross_hatch,
            'custom'     : empty_func,
}

def shade_horizontally(point):
  x, y = point[0], point[1]

  dx = 1
  while pixels[x + dx, y] == interior_color and vis[x + dx][y] != VISITED:
    patterns[args.pattern]((x + dx, y))
    vis[x + dx][y] = VISITED
    dx += 1
  rightb = (x + dx, y)

  dx = 0
  while pixels[x + dx, y] == interior_color and vis[x + dx][y] != VISITED:
    patterns[args.pattern]((x + dx, y))
    vis[x + dx][y] = VISITED
    dx -= 1 
  leftb = (x + dx, y)

  return leftb, rightb

def find_turns(point, leftb, rightb):
  # S turns
  i = leftb[0] + 1
  y = leftb[1] + vdir
  while i < rightb[0]:
    if pixels[i, y] == interior_color and vis[i][y] != VISITED:
      agenda[vdir].append((i, y))
      while pixels[i, y] == interior_color and vis[i][y] != VISITED:
        i += 1
    else:
      i += 1
    
  S_turns_last = i 

  # S inverted turns
  i = leftb[0] + 1
  y = leftb[1] - vdir
  while i < rightb[0]:
    if pixels[i, y] == interior_color and vis[i][y] != VISITED:
      agenda[-1 * vdir].append((i, y))
      while pixels[i, y] == interior_color and vis[i][y] != VISITED:
        i += 1
    else:
      i += 1
    
  # U turns
  S_turns_last = max(S_turns_last, i)
  j = rightb[0] + 1
  y = rightb[1]
  while j < S_turns_last:
    if pixels[j, y] == interior_color and vis[j][y] != VISITED:
      agenda[-1 * vdir].append((j, y))
      while pixels[j, y] == interior_color and vis[j][y] != VISITED:
        j += 1
    else:
      j += 1

def shade(event):
  global origin, interior_color, vdir
  origin = (event.x, event.y)
  interior_color = pixels[origin]

  print('Mouse click at ', str(origin))

  # Initialise agenda.
  # Note: All lines on the agenda have to be shaded when first accessed.
  agenda[UP].append(origin)
  agenda[DOWN].append((origin[0], origin[1] - 1))

  while len(agenda[UP]) + len(agenda[DOWN]) > 0:
    if not agenda[vdir]:
      vdir *= -1

    point = agenda[vdir].pop()
    leftb, rightb = shade_horizontally(point)
    find_turns(point, leftb, rightb)

  custom_fill()

  image.save(args.out)

  if uname()[0] == 'Linux':
    subprocess.run(['eog', args.out])

  exit(0)

window.bind('<Button 1>', shade)
window.mainloop()
