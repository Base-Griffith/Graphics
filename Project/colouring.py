# Instructions: Install the packages below and run with python3 preferably.
# Click any interior point in the image. Currently only one click is supported # after which the window will close. Open 'test.png' to see output.

import tkinter as tk
from PIL import Image, ImageTk

image = Image.open('smiley.png')   # Input file
pixels = image.load()

window = tk.Tk()
window.geometry(str(image.size[0]) + 'x' + str(image.size[1]))

imageTk = ImageTk.PhotoImage(image)
label = tk.Label(window, image=imageTk)
label.image = imageTk
label.grid()

# Our agenda (see paper) is implemented as two lists
uplist = []
downlist = []

origin = (0, 0)                    # Mouse click point
inColor = (0, 0, 0, 0)             # Color at origin
color = (0, 0, 255, 255)           # Color to use for shading
vdir = 1                           # To decide up/down (see note below)

# Note: Positive Y axis is downwards on the screen!

# Shades a line and returns its two boundary pixels
def shade_horizontally(point):
  x, y = point[0], point[1]

  dx = 1
  while pixels[x + dx, y] == inColor:
    pixels[x + dx, y] = color
    dx += 1
  rightboundary = (x + dx, y)

  dx = 0
  while pixels[x + dx, y] == inColor:
    pixels[x + dx, y] = color
    dx -= 1 
  leftboundary = (x + dx, y)

  return leftboundary, rightboundary

def inAgenda(x, y):
  for p in uplist:
    if (x, y) in p:
      return True

  for p in downlist:
    if (x, y) in p:
      return True

  return False

# This badly named function implements the check in the repeat-until loop
# in shade_vertically (see paper)
def check(left, right):
  if left[1] != right[1]:
    print("*********Error!*********")

  y = left[1]

  for i in range(left[0] + 1, right[0]):
    if pixels[i, y + vdir] == inColor and not inAgenda(i, y + vdir):
      return True

  return False

def find_turns(oldl, oldr, newl, newr):
  if abs(newl[1] - oldl[1]) != 1:
    print("*********Error!*********")

  # S turns
  tmp = []
  ynew = newl[1]
  for i in range(oldl[0] + 1, oldr[0]):
    if pixels[i, ynew] == inColor:
      tmp.append((i, ynew))
    else:
      if len(tmp) != 0:
        if vdir == 1:
          uplist.append(tmp)
        else:
          downlist.append(tmp)
        tmp = []

  # U turns
  tmp = []
  yold = oldl[1]
  for i in range(newl[0] + 1, newr[0]):
    if pixels[i, yold] == inColor:
      tmp.append((i, ynew))
    else:
      if len(tmp) != 0:
        if vdir == -1:
          uplist.append(tmp)
        else:
          downlist.append(tmp)
        tmp = []


def shade_vertically(point):
  oldleft, oldright = shade_horizontally(point)
  point = (point[0], point[1] + vdir)

  while check(oldleft, oldright):
    newleft, newright = shade_horizontally(point)
    find_turns(oldleft, oldright, newleft, newright)
    point = (point[0], point[1] + vdir)
    oldleft, oldright = newleft, newright

def shade(event):
  global origin, inColor, vdir
  origin = (event.x, event.y) 
  inColor = pixels[origin]
  vdir = 1 

  uplist.append([origin])
  downlist.append([(origin[0], origin[1] - 1)])

  while len(uplist) + len(downlist) > 0:
    if vdir == 1 and len(uplist) == 0:
      vdir = -1
    elif vdir == -1 and len(downlist) == 0:
      vdir = 1
    
    if vdir == 1:
      shade_vertically(uplist.pop()[0]) 
    elif vdir == -1:
      shade_vertically(downlist.pop()[0])
    else:
      print("Error, vdir = ", vdir)

  # Save resultant image. The original image is not modified.
  image.save('test.png')
  exit(0)

window.bind('<Button 1>', shade)
window.mainloop()
