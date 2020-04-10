#include <GL/gl.h>
#include <GL/glut.h>

inline void drawSun()
{
  glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
  glPushMatrix();
    glTranslatef(0.75, 1.2, -1.0);
    glutSolidSphere(0.1, 20, 50);
  glPopMatrix();
}

inline void drawLaunchPad()
{
  glPushMatrix();
    glScalef(1.75, 0.5, 1.0); 

  glColor3f(1.0, 1.0, 1.0);

  glBegin(GL_POLYGON);
    glVertex3f(  0.5, -0.1, -0.5 );
    glVertex3f(  0.5,  0.1, -0.5 );
    glVertex3f( -0.5,  0.1, -0.5 );
    glVertex3f( -0.5, -0.1, -0.5 );
  glEnd();

  glBegin(GL_POLYGON);
    glVertex3f(  0.5, -0.1, 0.5 );
    glVertex3f(  0.5,  0.1, 0.5 );
    glVertex3f( -0.5,  0.1, 0.5 );
    glVertex3f( -0.5, -0.1, 0.5 );
  glEnd();
 
  glBegin(GL_POLYGON);
    glVertex3f( 0.5, -0.1, -0.5 );
    glVertex3f( 0.5,  0.1, -0.5 );
    glVertex3f( 0.5,  0.1,  0.5 );
    glVertex3f( 0.5, -0.1,  0.5 );
  glEnd();
 
  glBegin(GL_POLYGON);
    glVertex3f( -0.5, -0.1,  0.5 );
    glVertex3f( -0.5,  0.1,  0.5 );
    glVertex3f( -0.5,  0.1, -0.5 );
    glVertex3f( -0.5, -0.1, -0.5 );
  glEnd();
 
  glBegin(GL_POLYGON);
    glVertex3f(  0.5,  0.1,  0.5 );
    glVertex3f(  0.5,  0.1, -0.5 );
    glVertex3f( -0.5,  0.1, -0.5 );
    glVertex3f( -0.5,  0.1,  0.5 );
  glEnd();
 
  glBegin(GL_POLYGON);
    glVertex3f(  0.5, -0.1, -0.5 );
    glVertex3f(  0.5, -0.1,  0.5 );
    glVertex3f( -0.5, -0.1,  0.5 );
    glVertex3f( -0.5, -0.1, -0.5 );
  glEnd();

  // Launch Pad Black Outline

  glColor3f(0.0, 0.0, 0.0);

  glBegin(GL_LINE_LOOP);
    glVertex3f(  0.5, -0.1, -0.5 );
    glVertex3f(  0.5,  0.1, -0.5 );
    glVertex3f( -0.5,  0.1, -0.5 );
    glVertex3f( -0.5, -0.1, -0.5 );
  glEnd();

  glBegin(GL_LINE_LOOP);
    glVertex3f(  0.5, -0.1, 0.5 );
    glVertex3f(  0.5,  0.1, 0.5 );
    glVertex3f( -0.5,  0.1, 0.5 );
    glVertex3f( -0.5, -0.1, 0.5 );
  glEnd();
 
  glBegin(GL_LINE_LOOP);
    glVertex3f( 0.5, -0.1, -0.5 );
    glVertex3f( 0.5,  0.1, -0.5 );
    glVertex3f( 0.5,  0.1,  0.5 );
    glVertex3f( 0.5, -0.1,  0.5 );
  glEnd();
 
  glBegin(GL_LINE_LOOP);
    glVertex3f( -0.5, -0.1,  0.5 );
    glVertex3f( -0.5,  0.1,  0.5 );
    glVertex3f( -0.5,  0.1, -0.5 );
    glVertex3f( -0.5, -0.1, -0.5 );
  glEnd();
 
  glBegin(GL_LINE_LOOP);
    glVertex3f(  0.5,  0.1,  0.5 );
    glVertex3f(  0.5,  0.1, -0.5 );
    glVertex3f( -0.5,  0.1, -0.5 );
    glVertex3f( -0.5,  0.1,  0.5 );
  glEnd();
 
  glBegin(GL_LINE_LOOP);
    glVertex3f(  0.5, -0.1, -0.5 );
    glVertex3f(  0.5, -0.1,  0.5 );
    glVertex3f( -0.5, -0.1,  0.5 );
    glVertex3f( -0.5, -0.1, -0.5 );
  glEnd();

  glPopMatrix();
}

inline void drawScene(double rx, double ry, double rz, double tx, double ty)
{
  drawSun();
  drawLaunchPad();
  drawRocket();
}
