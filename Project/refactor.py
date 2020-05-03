import tkinter as tk
from PIL import Image, ImageTk

image = Image.open('triangle.png')
pixels = image.load()

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
color = (0, 0, 255, 255)

# Note: Y axis is inverted.
vdir = UP

def shade_horizontally(point):
  x, y = point[0], point[1]

  dx = 1
  while pixels[x + dx, y] == interior_color:
    pixels[x + dx, y] = color
    dx += 1
  rightb = (x + dx, y)

  dx = 0
  while pixels[x + dx, y] == interior_color:
    pixels[x + dx, y] = color
    dx -= 1 
  leftb = (x + dx, y)

  return leftb, rightb

def find_turns(point, leftb, rightb):
  # S turns
  i = leftb[0] + 1
  y = leftb[1] + vdir
  while i < rightb[0]:
    if pixels[i, y] == interior_color:
      agenda[vdir].append((i, y))
      while pixels[i, y] == interior_color:
        i += 1
    else:
      i += 1
    
  # U turns
  S_turns_last = i 
  j = rightb[0] + 1
  y = rightb[1]
  while j < S_turns_last:
    if pixels[j, y] == interior_color:
      agenda[-1 * vdir].append((j, y))
      while pixels[j, y] == interior_color:
        j += 1
    else:
      j += 1

def agenda_non_empty():
  return (len(agenda[UP]) + len(agenda[DOWN]) > 0)

def shade(event):
  global origin, interior_color, vdir
  origin = (event.x, event.y)
  interior_color = pixels[origin]

  # Initialise agenda.
  # Note: All lines on the agenda have to be shaded when first accessed.

  agenda[UP].append(origin)
  agenda[DOWN].append((origin[0], origin[1] - 1))

  while agenda_non_empty():
    if not agenda[vdir]:
      vdir *= -1

    point = agenda[vdir].pop()
    leftb, rightb = shade_horizontally(point)
    find_turns(point, leftb, rightb)

  image.save('test.png')
  exit(0)

window.bind('<Button 1>', shade)
window.mainloop()
