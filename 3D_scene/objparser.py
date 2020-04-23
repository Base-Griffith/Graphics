# Basic parser used for Wavefront .obj files to extract vertex coordinates
# and turn them into immediate OpenGL calls

with open("tree_final.txt", "r") as file:
  data = file.read()
  data = data.split('\n')
  data.pop()

  vertices = []  

  for line in data:
    if line[:2] == "v ":
      line = line[2:]
      coords = line.split()
      vertices.append((float(coords[0]), float(coords[1]), float(coords[2])))

  indices = []

  for line in data:
    if line.startswith("f"):
      line = line[2:].split()
      vertex1 = int(line[0].split("/")[0])
      vertex2 = int(line[1].split("/")[0])
      vertex3 = int(line[2].split("/")[0])
      indices.append((vertex1, vertex2, vertex3))

  with open("tree_out.txt", "w") as outputfile:
    for vtuple in indices:
      v1 = vertices[vtuple[0] - 1]
      v2 = vertices[vtuple[1] - 1]
      v3 = vertices[vtuple[2] - 1]
      outputfile.write("  glBegin(GL_TRIANGLES);\n")
      outputfile.write("    glVertex3f" + str(v1) + ";\n")
      outputfile.write("    glVertex3f" + str(v2) + ";\n")
      outputfile.write("    glVertex3f" + str(v3) + ";\n")
      outputfile.write("  glEnd();\n\n")
