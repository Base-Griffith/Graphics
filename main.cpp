#include <GL/glew.h>
#include <GL/glut.h>
#include "scene.cpp"

void display();
void specialKeys();

double rotate_y; 
double rotate_x;
double rotate_z;
double translate_x;
double translate_y;

void display()
{
  glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  glTranslatef(translate_x, translate_y, 0.0);

  glRotatef(rotate_x, 1.0, 0.0, 0.0);
  glRotatef(rotate_y, 0.0, 1.0, 0.0);
  glRotatef(rotate_z, 0.0, 0.0, 1.0);

  drawLaunchPad();
  drawRocket();
  drawSun();

  glFlush();
  glutSwapBuffers();
 
}

void specialKeys(int key, int x, int y)
{
  if (key == GLUT_KEY_RIGHT)
    rotate_y += 5;
 
  else if (key == GLUT_KEY_LEFT)
    rotate_y -= 5;
 
  else if (key == GLUT_KEY_UP)
    rotate_x += 5;
 
  else if (key == GLUT_KEY_DOWN)
    rotate_x -= 5;
 
  glutPostRedisplay();
}

void normalKeys(unsigned char key, int x, int y)
{
  if (key == 'w')
    translate_y += 0.1;
 
  else if (key == 's')
    translate_y -= 0.1;
 
  else if (key == 'a')
    translate_x -= 0.1;
 
  else if (key == 'd')
    translate_x += 0.1;

  else if (key == 'f')
    rotate_z += 5;

  else if (key == 'g')
    rotate_z -= 5;

  glutPostRedisplay();
}

int main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("Rocket Launch at Day");
  glEnable(GL_DEPTH_TEST);

  glutDisplayFunc(display);
  glutKeyboardFunc(normalKeys);
  glutSpecialFunc(specialKeys);

  glutMainLoop();
 
  return 0;
}
