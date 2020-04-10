#include <GL/gl.h>
#include <GL/glut.h>

inline void drawRocket()
{
  glColor3f(0.294, 0.298, 0.380);

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(-0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(-0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.26108, -0.025395);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.26108, 0.014662);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.014662, 0.26108, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.26108, 0.025395);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.025395, 0.26108, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.26108, -0.029324);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.26108, -0.014662);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.26108, 0.0);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.025395, 0.26108, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.26108, 0.025395);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.025395, 0.08853, -0.014662);
    glVertex3f(-0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.029324, 0.09868, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.0, 0.09868, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.029323, 0.09868, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(-0.0, 0.09868, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(-0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.08853, 0.014662);
    glVertex3f(0.027857, 0.08447, 0.0);
    glVertex3f(0.029323, 0.08853, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(-0.0, 0.08853, -0.029324);
    glVertex3f(-0.0, 0.09868, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.025395, 0.08853, 0.014662);
    glVertex3f(-0.014662, 0.08853, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.014662, 0.08853, 0.025395);
    glVertex3f(0.025395, 0.08853, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(-0.014662, 0.08853, -0.025395);
    glVertex3f(-0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.014662, 0.08853, -0.025395);
    glVertex3f(0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.029324, 0.08853, 0.0);
    glVertex3f(-0.025395, 0.08853, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(-0.0, 0.08853, 0.029324);
    glVertex3f(0.014662, 0.08853, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.08853, -0.014662);
    glVertex3f(0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.029324, 0.08853, 0.0);
    glVertex3f(-0.029324, 0.09868, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.014662, 0.08853, 0.025395);
    glVertex3f(-0.0, 0.08853, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.08853, 0.014662);
    glVertex3f(0.029323, 0.08853, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024125, 0.08447, 0.013929);
    glVertex3f(0.027857, 0.222111, 0.0);
    glVertex3f(0.027857, 0.08447, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.08853, -0.025395);
    glVertex3f(-0.024126, 0.08447, -0.013929);
    glVertex3f(-0.025395, 0.08853, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.08853, -0.025395);
    glVertex3f(-0.0, 0.08447, -0.027857);
    glVertex3f(-0.0, 0.08853, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.08853, 0.025395);
    glVertex3f(-0.024126, 0.08447, 0.013929);
    glVertex3f(-0.013929, 0.08447, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.08853, 0.014662);
    glVertex3f(0.013929, 0.08447, 0.024125);
    glVertex3f(0.024125, 0.08447, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08853, -0.029324);
    glVertex3f(-0.013929, 0.08447, -0.024125);
    glVertex3f(-0.014662, 0.08853, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.08853, -0.014662);
    glVertex3f(0.013929, 0.08447, -0.024125);
    glVertex3f(0.014662, 0.08853, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.08853, 0.014662);
    glVertex3f(-0.027858, 0.08447, 0.0);
    glVertex3f(-0.024126, 0.08447, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.08853, 0.025395);
    glVertex3f(-0.0, 0.08447, 0.027857);
    glVertex3f(0.013929, 0.08447, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.08853, 0.0);
    glVertex3f(0.024125, 0.08447, -0.013929);
    glVertex3f(0.025395, 0.08853, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.08853, -0.014662);
    glVertex3f(-0.027858, 0.08447, 0.0);
    glVertex3f(-0.029324, 0.08853, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08853, 0.029324);
    glVertex3f(-0.013929, 0.08447, 0.024125);
    glVertex3f(-0.0, 0.08447, 0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.027858, 0.222111, 0.0);
    glVertex3f(-0.013929, 0.222111, -0.024125);
    glVertex3f(0.027857, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013929, 0.08447, -0.024125);
    glVertex3f(-0.024125, 0.222111, -0.013929);
    glVertex3f(-0.024126, 0.08447, -0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.08447, -0.024125);
    glVertex3f(-0.0, 0.222111, -0.027857);
    glVertex3f(-0.0, 0.08447, -0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024126, 0.08447, 0.013929);
    glVertex3f(-0.013929, 0.222111, 0.024125);
    glVertex3f(-0.013929, 0.08447, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.08447, 0.024125);
    glVertex3f(0.024125, 0.222111, 0.013929);
    glVertex3f(0.024125, 0.08447, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08447, -0.027857);
    glVertex3f(-0.013929, 0.222111, -0.024125);
    glVertex3f(-0.013929, 0.08447, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024125, 0.08447, -0.013929);
    glVertex3f(0.013929, 0.222111, -0.024125);
    glVertex3f(0.013929, 0.08447, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.027858, 0.08447, 0.0);
    glVertex3f(-0.024125, 0.222111, 0.013929);
    glVertex3f(-0.024126, 0.08447, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.08447, 0.024125);
    glVertex3f(-0.0, 0.222111, 0.027857);
    glVertex3f(0.013929, 0.222111, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024125, 0.08447, -0.013929);
    glVertex3f(0.027857, 0.222111, 0.0);
    glVertex3f(0.024125, 0.222111, -0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.027858, 0.08447, 0.0);
    glVertex3f(-0.024125, 0.222111, -0.013929);
    glVertex3f(-0.027858, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08447, 0.027857);
    glVertex3f(-0.013929, 0.222111, 0.024125);
    glVertex3f(-0.0, 0.222111, 0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.95931, -0.040204);
    glVertex3f(0.020102, 0.95931, -0.034818);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020102, 0.95931, -0.034818);
    glVertex3f(0.034818, 0.95931, -0.020102);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034818, 0.95931, -0.020102);
    glVertex3f(0.040204, 0.95931, 0.0);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.040204, 0.95931, 0.0);
    glVertex3f(0.034818, 0.95931, 0.020102);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034818, 0.95931, 0.020102);
    glVertex3f(0.020102, 0.95931, 0.034818);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020102, 0.95931, 0.034818);
    glVertex3f(0.0, 0.95931, 0.040204);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.95931, 0.040204);
    glVertex3f(-0.020102, 0.95931, 0.034818);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020102, 0.95931, 0.034818);
    glVertex3f(-0.034818, 0.95931, 0.020102);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034818, 0.95931, 0.020102);
    glVertex3f(-0.040204, 0.95931, 0.0);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.040204, 0.95931, 0.0);
    glVertex3f(-0.034818, 0.95931, -0.020102);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034818, 0.95931, -0.020102);
    glVertex3f(-0.020102, 0.95931, -0.034818);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020102, 0.95931, -0.034818);
    glVertex3f(0.0, 0.95931, -0.040204);
    glVertex3f(0.0, 1.040194, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.95931, 0.040204);
    glVertex3f(-0.020098, 0.797045, 0.034811);
    glVertex3f(-0.020102, 0.95931, 0.034818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014503, 0.748028, 0.025119);
    glVertex3f(-0.034811, 0.797045, 0.020098);
    glVertex3f(-0.020098, 0.797045, 0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034811, 0.797045, 0.020098);
    glVertex3f(-0.040204, 0.95931, 0.0);
    glVertex3f(-0.034818, 0.95931, 0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034811, 0.797045, -0.020098);
    glVertex3f(-0.020102, 0.95931, -0.034818);
    glVertex3f(-0.034818, 0.95931, -0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034818, 0.95931, -0.020102);
    glVertex3f(0.040197, 0.797045, 0.0);
    glVertex3f(0.040204, 0.95931, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020098, 0.797045, 0.034811);
    glVertex3f(0.0, 0.95931, 0.040204);
    glVertex3f(0.020102, 0.95931, 0.034818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034811, 0.797045, 0.020098);
    glVertex3f(0.020102, 0.95931, 0.034818);
    glVertex3f(0.034818, 0.95931, 0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020102, 0.95931, 0.034818);
    glVertex3f(-0.034811, 0.797045, 0.020098);
    glVertex3f(-0.034818, 0.95931, 0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020102, 0.95931, -0.034818);
    glVertex3f(0.0, 0.797045, -0.040197);
    glVertex3f(0.0, 0.95931, -0.040204);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.040204, 0.95931, 0.0);
    glVertex3f(-0.034811, 0.797045, -0.020098);
    glVertex3f(-0.034818, 0.95931, -0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020098, 0.797045, -0.034811);
    glVertex3f(0.034818, 0.95931, -0.020102);
    glVertex3f(0.020102, 0.95931, -0.034818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.797045, -0.040197);
    glVertex3f(0.020102, 0.95931, -0.034818);
    glVertex3f(0.0, 0.95931, -0.040204);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.040197, 0.797045, 0.0);
    glVertex3f(0.034818, 0.95931, 0.020102);
    glVertex3f(0.040204, 0.95931, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029005, 0.748028, 0.0);
    glVertex3f(-0.025395, 0.747874, -0.014662);
    glVertex3f(-0.025119, 0.748028, -0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025119, 0.748028, 0.014503);
    glVertex3f(0.020098, 0.797045, 0.034811);
    glVertex3f(0.034811, 0.797045, 0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014503, 0.748028, -0.025119);
    glVertex3f(0.0, 0.797045, -0.040197);
    glVertex3f(-0.020098, 0.797045, -0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020098, 0.797045, -0.034811);
    glVertex3f(0.025119, 0.748028, -0.014503);
    glVertex3f(0.034811, 0.797045, -0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025119, 0.748028, 0.014503);
    glVertex3f(-0.040197, 0.797045, 0.0);
    glVertex3f(-0.034811, 0.797045, 0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014503, 0.748028, 0.025119);
    glVertex3f(0.0, 0.797045, 0.040197);
    glVertex3f(0.020098, 0.797045, 0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025119, 0.748028, -0.014503);
    glVertex3f(0.040197, 0.797045, 0.0);
    glVertex3f(0.034811, 0.797045, -0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029005, 0.748028, 0.0);
    glVertex3f(-0.034811, 0.797045, -0.020098);
    glVertex3f(-0.040197, 0.797045, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, 0.029005);
    glVertex3f(-0.020098, 0.797045, 0.034811);
    glVertex3f(0.0, 0.797045, 0.040197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029005, 0.748028, 0.0);
    glVertex3f(0.034811, 0.797045, 0.020098);
    glVertex3f(0.040197, 0.797045, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034811, 0.797045, -0.020098);
    glVertex3f(-0.014503, 0.748028, -0.025119);
    glVertex3f(-0.020098, 0.797045, -0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, -0.029005);
    glVertex3f(0.020098, 0.797045, -0.034811);
    glVertex3f(0.0, 0.797045, -0.040197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.747988, -0.014521);
    glVertex3f(0.029324, 0.747874, 0.0);
    glVertex3f(0.025395, 0.747874, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, 0.029005);
    glVertex3f(-0.014662, 0.747874, 0.025395);
    glVertex3f(-0.014503, 0.748028, 0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029005, 0.748028, 0.0);
    glVertex3f(0.025395, 0.747874, 0.014662);
    glVertex3f(0.025119, 0.748028, 0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.747874, -0.014662);
    glVertex3f(-0.014503, 0.748028, -0.025119);
    glVertex3f(-0.025119, 0.748028, -0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, -0.029005);
    glVertex3f(0.014662, 0.747874, -0.025395);
    glVertex3f(0.014503, 0.748028, -0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.747874, 0.025395);
    glVertex3f(-0.025119, 0.748028, 0.014503);
    glVertex3f(-0.014503, 0.748028, 0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.747874, 0.014662);
    glVertex3f(0.014503, 0.748028, 0.025119);
    glVertex3f(0.025119, 0.748028, 0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.747874, -0.025395);
    glVertex3f(-0.0, 0.748028, -0.029005);
    glVertex3f(-0.014503, 0.748028, -0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014503, 0.748028, -0.025119);
    glVertex3f(0.025395, 0.747874, -0.014662);
    glVertex3f(0.025119, 0.748028, -0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.747874, 0.014662);
    glVertex3f(-0.029005, 0.748028, 0.0);
    glVertex3f(-0.025119, 0.748028, 0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.747874, 0.025395);
    glVertex3f(-0.0, 0.748028, 0.029005);
    glVertex3f(0.014503, 0.748028, 0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.747874, -0.014662);
    glVertex3f(0.029005, 0.748028, 0.0);
    glVertex3f(0.025119, 0.748028, -0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028921, 0.261037, 3e-05);
    glVertex3f(0.025133, 0.654275, 0.014504);
    glVertex3f(0.029018, 0.654275, 6e-06);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.747874, 0.0);
    glVertex3f(-0.025151, 0.747988, -0.014521);
    glVertex3f(-0.025395, 0.747874, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.747874, 0.029324);
    glVertex3f(-0.014521, 0.747988, 0.025151);
    glVertex3f(-0.014662, 0.747874, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029042, 0.747988, 0.0);
    glVertex3f(0.025395, 0.747874, 0.014662);
    glVertex3f(0.029324, 0.747874, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.747988, -0.029042);
    glVertex3f(0.014662, 0.747874, -0.025395);
    glVertex3f(-0.0, 0.747874, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.747874, 0.025395);
    glVertex3f(-0.025151, 0.747988, 0.014521);
    glVertex3f(-0.025395, 0.747874, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.747988, 0.014521);
    glVertex3f(0.014662, 0.747874, 0.025395);
    glVertex3f(0.025395, 0.747874, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.747988, 0.025151);
    glVertex3f(-0.0, 0.747874, 0.029324);
    glVertex3f(0.014662, 0.747874, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.000318, 0.098455, 0.029208);
    glVertex3f(-0.014984, 0.153044, 0.075433);
    glVertex3f(-3e-05, 0.261037, 0.028921);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025134, 0.654275, -0.014504);
    glVertex3f(-0.014459, 0.26108, -0.025043);
    glVertex3f(-0.014509, 0.654283, -0.02513);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
    glVertex3f(0.014504, 0.654275, -0.025134);
    glVertex3f(6e-06, 0.654275, -0.029018);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014504, 0.654275, 0.025134);
    glVertex3f(-0.025044, 0.26108, 0.014459);
    glVertex3f(-0.02513, 0.654283, 0.014509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025133, 0.654275, 0.014504);
    glVertex3f(0.014459, 0.26108, 0.025043);
    glVertex3f(0.014509, 0.654283, 0.02513);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014459, 0.26108, -0.025043);
    glVertex3f(6e-06, 0.654275, -0.029018);
    glVertex3f(-0.014509, 0.654283, -0.02513);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014504, 0.654275, -0.025134);
    glVertex3f(0.025043, 0.26108, -0.014459);
    glVertex3f(0.02513, 0.654283, -0.014509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025044, 0.26108, 0.014459);
    glVertex3f(-0.029018, 0.654275, -6e-06);
    glVertex3f(-0.02513, 0.654283, 0.014509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014459, 0.26108, 0.025043);
    glVertex3f(-6e-06, 0.654275, 0.029018);
    glVertex3f(0.014509, 0.654283, 0.02513);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025043, 0.26108, -0.014459);
    glVertex3f(0.029018, 0.654275, 6e-06);
    glVertex3f(0.02513, 0.654283, -0.014509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028921, 0.261037, -3e-05);
    glVertex3f(-0.025134, 0.654275, -0.014504);
    glVertex3f(-0.029018, 0.654275, -6e-06);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-6e-06, 0.654275, 0.029018);
    glVertex3f(-0.014435, 0.261037, 0.025061);
    glVertex3f(-0.014504, 0.654275, 0.025134);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(-0.0, 0.098388, 0.029042);
    glVertex3f(-0.000318, 0.098455, 0.029208);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025061, 0.261037, -0.014435);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(-0.014459, 0.26108, -0.025043);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014435, 0.261037, 0.025061);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.025044, 0.26108, 0.014459);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025061, 0.261037, 0.014435);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(0.014459, 0.26108, 0.025043);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
    glVertex3f(-0.014459, 0.26108, -0.025043);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014435, 0.261037, -0.025061);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.025043, 0.26108, -0.014459);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.028921, 0.261037, -3e-05);
    glVertex3f(-0.025044, 0.26108, 0.014459);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(-3e-05, 0.261037, 0.028921);
    glVertex3f(0.014459, 0.26108, 0.025043);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.028921, 0.261037, 3e-05);
    glVertex3f(0.025043, 0.26108, -0.014459);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.075626, 0.039749, -0.014989);
    glVertex3f(-0.072819, 0.153044, -0.024741);
    glVertex3f(-0.075433, 0.153044, -0.014983);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.075433, 0.153044, -0.014983);
    glVertex3f(-0.025061, 0.261037, -0.014435);
    glVertex3f(-0.028921, 0.261037, -3e-05);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029208, 0.098455, -0.000317);
    glVertex3f(-0.075433, 0.153044, -0.014983);
    glVertex3f(-0.028921, 0.261037, -3e-05);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.072819, 0.153044, -0.024741);
    glVertex3f(-0.025454, 0.098455, -0.014329);
    glVertex3f(-0.025061, 0.261037, -0.014435);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.01499, 0.039749, 0.075626);
    glVertex3f(-0.024741, 0.153044, 0.072819);
    glVertex3f(-0.014984, 0.153044, 0.075433);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024741, 0.153044, 0.072819);
    glVertex3f(-0.014329, 0.098455, 0.025454);
    glVertex3f(-0.014435, 0.261037, 0.025061);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014984, 0.153044, 0.075433);
    glVertex3f(-0.014435, 0.261037, 0.025061);
    glVertex3f(-3e-05, 0.261037, 0.028921);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075625, 0.039749, 0.014989);
    glVertex3f(0.072818, 0.153044, 0.024741);
    glVertex3f(0.075433, 0.153044, 0.014983);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.072818, 0.153044, 0.024741);
    glVertex3f(0.025453, 0.098455, 0.014329);
    glVertex3f(0.025061, 0.261037, 0.014435);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075433, 0.153044, 0.014983);
    glVertex3f(0.025061, 0.261037, 0.014435);
    glVertex3f(0.028921, 0.261037, 3e-05);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029208, 0.098455, 0.000318);
    glVertex3f(0.075433, 0.153044, 0.014983);
    glVertex3f(0.028921, 0.261037, 3e-05);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014989, 0.039749, -0.075626);
    glVertex3f(0.02474, 0.153044, -0.072819);
    glVertex3f(0.014983, 0.153044, -0.075433);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014983, 0.153044, -0.075433);
    glVertex3f(0.014435, 0.261037, -0.025061);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02474, 0.153044, -0.072819);
    glVertex3f(0.014329, 0.098455, -0.025454);
    glVertex3f(0.014435, 0.261037, -0.025061);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.000317, 0.098455, -0.029208);
    glVertex3f(0.014983, 0.153044, -0.075433);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025049, 0.088598, -0.014462);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(-0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.029041, 0.098388, 0.0);
    glVertex3f(0.029208, 0.098455, 0.000318);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029042, 0.098388, 0.0);
    glVertex3f(-0.025454, 0.098455, -0.014329);
    glVertex3f(-0.029208, 0.098455, -0.000317);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.098388, 0.029042);
    glVertex3f(-0.014329, 0.098455, 0.025454);
    glVertex3f(-0.000318, 0.098455, 0.029208);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029041, 0.098388, 0.0);
    glVertex3f(0.025453, 0.098455, 0.014329);
    glVertex3f(0.029208, 0.098455, 0.000318);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025454, 0.098455, -0.014329);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(-0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.098388, -0.029042);
    glVertex3f(0.014329, 0.098455, -0.025454);
    glVertex3f(0.000317, 0.098455, -0.029208);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014329, 0.098455, 0.025454);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.025151, 0.098388, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025453, 0.098455, 0.014329);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(0.014521, 0.098388, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(-0.0, 0.098388, -0.029042);
    glVertex3f(0.000317, 0.098455, -0.029208);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014329, 0.098455, -0.025454);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.029042, 0.098388, 0.0);
    glVertex3f(-0.029208, 0.098455, -0.000317);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02786, 0.084876, 0.0);
    glVertex3f(0.025048, 0.088598, 0.014462);
    glVertex3f(0.028923, 0.088598, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.088598, -0.028923);
    glVertex3f(0.014521, 0.098388, -0.025151);
    glVertex3f(-0.0, 0.098388, -0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.098388, 0.025151);
    glVertex3f(-0.025049, 0.088598, 0.014462);
    glVertex3f(-0.025151, 0.098388, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.098388, 0.014521);
    glVertex3f(0.014461, 0.088598, 0.025048);
    glVertex3f(0.014521, 0.098388, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014462, 0.088598, -0.025048);
    glVertex3f(-0.0, 0.098388, -0.029042);
    glVertex3f(-0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014461, 0.088598, -0.025048);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.028924, 0.088598, 0.0);
    glVertex3f(-0.029042, 0.098388, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(-0.0, 0.088598, 0.028923);
    glVertex3f(-0.0, 0.098388, 0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025048, 0.088598, -0.014462);
    glVertex3f(0.029041, 0.098388, 0.0);
    glVertex3f(0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028924, 0.088598, 0.0);
    glVertex3f(-0.025151, 0.098388, -0.014521);
    glVertex3f(-0.029042, 0.098388, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.098388, 0.029042);
    glVertex3f(-0.014462, 0.088598, 0.025048);
    glVertex3f(-0.014521, 0.098388, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029041, 0.098388, 0.0);
    glVertex3f(0.025048, 0.088598, 0.014462);
    glVertex3f(0.025151, 0.098388, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02786, 0.084876, 0.0);
    glVertex3f(0.024391, 0.222377, 0.014082);
    glVertex3f(0.024128, 0.084876, 0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025049, 0.088598, -0.014462);
    glVertex3f(-0.013931, 0.084876, -0.024128);
    glVertex3f(-0.014462, 0.088598, -0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.084876, -0.027861);
    glVertex3f(0.014461, 0.088598, -0.025048);
    glVertex3f(-0.0, 0.088598, -0.028923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014462, 0.088598, 0.025048);
    glVertex3f(-0.024128, 0.084876, 0.01393);
    glVertex3f(-0.025049, 0.088598, 0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024128, 0.084876, 0.01393);
    glVertex3f(0.014461, 0.088598, 0.025048);
    glVertex3f(0.025048, 0.088598, 0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013931, 0.084876, -0.024128);
    glVertex3f(-0.0, 0.088598, -0.028923);
    glVertex3f(-0.014462, 0.088598, -0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014461, 0.088598, -0.025048);
    glVertex3f(0.024128, 0.084876, -0.01393);
    glVertex3f(0.025048, 0.088598, -0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024128, 0.084876, 0.01393);
    glVertex3f(-0.028924, 0.088598, 0.0);
    glVertex3f(-0.025049, 0.088598, 0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.01393, 0.084876, 0.024128);
    glVertex3f(-0.0, 0.088598, 0.028923);
    glVertex3f(0.014461, 0.088598, 0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024128, 0.084876, -0.01393);
    glVertex3f(0.028923, 0.088598, 0.0);
    glVertex3f(0.025048, 0.088598, -0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028924, 0.088598, 0.0);
    glVertex3f(-0.024128, 0.084876, -0.01393);
    glVertex3f(-0.025049, 0.088598, -0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.088598, 0.028923);
    glVertex3f(-0.013931, 0.084876, 0.024128);
    glVertex3f(-0.014462, 0.088598, 0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028165, 0.222377, 0.0);
    glVertex3f(0.014082, 0.222377, -0.024392);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024392, 0.222377, -0.014082);
    glVertex3f(-0.013931, 0.084876, -0.024128);
    glVertex3f(-0.024128, 0.084876, -0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.222377, -0.028165);
    glVertex3f(0.01393, 0.084876, -0.024128);
    glVertex3f(-0.0, 0.084876, -0.027861);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014083, 0.222377, 0.024392);
    glVertex3f(-0.024128, 0.084876, 0.01393);
    glVertex3f(-0.013931, 0.084876, 0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024391, 0.222377, 0.014082);
    glVertex3f(0.01393, 0.084876, 0.024128);
    glVertex3f(0.024128, 0.084876, 0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014083, 0.222377, -0.024391);
    glVertex3f(-0.0, 0.084876, -0.027861);
    glVertex3f(-0.013931, 0.084876, -0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, -0.024392);
    glVertex3f(0.024128, 0.084876, -0.01393);
    glVertex3f(0.01393, 0.084876, -0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024392, 0.222377, 0.014082);
    glVertex3f(-0.027861, 0.084876, 0.0);
    glVertex3f(-0.024128, 0.084876, 0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, 0.024392);
    glVertex3f(-0.0, 0.084876, 0.027861);
    glVertex3f(0.01393, 0.084876, 0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024391, 0.222377, -0.014082);
    glVertex3f(0.02786, 0.084876, 0.0);
    glVertex3f(0.024128, 0.084876, -0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028165, 0.222377, 0.0);
    glVertex3f(-0.024128, 0.084876, -0.01393);
    glVertex3f(-0.027861, 0.084876, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.084876, 0.027861);
    glVertex3f(-0.014083, 0.222377, 0.024392);
    glVertex3f(-0.013931, 0.084876, 0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.747988, 0.029042);
    glVertex3f(-0.014504, 0.654275, 0.025134);
    glVertex3f(-0.014521, 0.747988, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029042, 0.747988, 0.0);
    glVertex3f(-0.025134, 0.654275, -0.014504);
    glVertex3f(-0.025151, 0.747988, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02513, 0.654283, -0.014509);
    glVertex3f(0.029042, 0.747988, 0.0);
    glVertex3f(0.025151, 0.747988, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014509, 0.654283, 0.02513);
    glVertex3f(-0.0, 0.747988, 0.029042);
    glVertex3f(0.014521, 0.747988, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.02513, 0.654283, 0.014509);
    glVertex3f(-0.029042, 0.747988, 0.0);
    glVertex3f(-0.025151, 0.747988, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.747988, -0.025151);
    glVertex3f(0.02513, 0.654283, -0.014509);
    glVertex3f(0.025151, 0.747988, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014509, 0.654283, -0.02513);
    glVertex3f(-0.0, 0.747988, -0.029042);
    glVertex3f(-0.014521, 0.747988, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.747988, 0.014521);
    glVertex3f(0.014509, 0.654283, 0.02513);
    glVertex3f(0.014521, 0.747988, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.747988, 0.025151);
    glVertex3f(-0.02513, 0.654283, 0.014509);
    glVertex3f(-0.025151, 0.747988, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(6e-06, 0.654275, -0.029018);
    glVertex3f(0.014521, 0.747988, -0.025151);
    glVertex3f(-0.0, 0.747988, -0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.747988, -0.014521);
    glVertex3f(-0.014509, 0.654283, -0.02513);
    glVertex3f(-0.014521, 0.747988, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029018, 0.654275, 6e-06);
    glVertex3f(0.025151, 0.747988, 0.014521);
    glVertex3f(0.029042, 0.747988, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.0, 0.74828, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.0, 0.74828, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.0, 0.09868, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.26108, -0.025395);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.26108, 0.014662);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.26108, 0.025395);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.26108, -0.029324);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(-0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.26108, -0.014662);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.26108, 0.0);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.26108, 0.025395);
    glVertex3f(-0.0, 0.26108, 0.029324);
    glVertex3f(-0.0, 0.09868, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.014662, 0.08853, -0.025395);
    glVertex3f(-0.025395, 0.08853, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.029323, 0.09868, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, -0.025395);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(-0.0, 0.09868, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.029324, 0.09868, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.08853, 0.014662);
    glVertex3f(0.024125, 0.08447, 0.013929);
    glVertex3f(0.027857, 0.08447, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.014662, 0.08853, -0.025395);
    glVertex3f(-0.0, 0.08853, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.025395, 0.08853, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(0.014662, 0.08853, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(-0.0, 0.08853, -0.029324);
    glVertex3f(-0.014662, 0.08853, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.025395, 0.08853, -0.014662);
    glVertex3f(0.014662, 0.08853, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, 0.014662);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.029324, 0.08853, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, 0.025395);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.0, 0.08853, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.029323, 0.08853, 0.0);
    glVertex3f(0.025395, 0.08853, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.025395, 0.08853, -0.014662);
    glVertex3f(-0.029324, 0.08853, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.014662, 0.08853, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.025395, 0.08853, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024125, 0.08447, 0.013929);
    glVertex3f(0.024125, 0.222111, 0.013929);
    glVertex3f(0.027857, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.08853, -0.025395);
    glVertex3f(-0.013929, 0.08447, -0.024125);
    glVertex3f(-0.024126, 0.08447, -0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.08853, -0.025395);
    glVertex3f(0.013929, 0.08447, -0.024125);
    glVertex3f(-0.0, 0.08447, -0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.08853, 0.025395);
    glVertex3f(-0.025395, 0.08853, 0.014662);
    glVertex3f(-0.024126, 0.08447, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.08853, 0.014662);
    glVertex3f(0.014662, 0.08853, 0.025395);
    glVertex3f(0.013929, 0.08447, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08853, -0.029324);
    glVertex3f(-0.0, 0.08447, -0.027857);
    glVertex3f(-0.013929, 0.08447, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.08853, -0.014662);
    glVertex3f(0.024125, 0.08447, -0.013929);
    glVertex3f(0.013929, 0.08447, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.08853, 0.014662);
    glVertex3f(-0.029324, 0.08853, 0.0);
    glVertex3f(-0.027858, 0.08447, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.08853, 0.025395);
    glVertex3f(-0.0, 0.08853, 0.029324);
    glVertex3f(-0.0, 0.08447, 0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.08853, 0.0);
    glVertex3f(0.027857, 0.08447, 0.0);
    glVertex3f(0.024125, 0.08447, -0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.08853, -0.014662);
    glVertex3f(-0.024126, 0.08447, -0.013929);
    glVertex3f(-0.027858, 0.08447, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08853, 0.029324);
    glVertex3f(-0.014662, 0.08853, 0.025395);
    glVertex3f(-0.013929, 0.08447, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013929, 0.222111, -0.024125);
    glVertex3f(-0.0, 0.222111, -0.027857);
    glVertex3f(0.013929, 0.222111, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.222111, -0.024125);
    glVertex3f(0.024125, 0.222111, -0.013929);
    glVertex3f(0.027857, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.027857, 0.222111, 0.0);
    glVertex3f(0.024125, 0.222111, 0.013929);
    glVertex3f(0.013929, 0.222111, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.222111, 0.024125);
    glVertex3f(-0.0, 0.222111, 0.027857);
    glVertex3f(-0.013929, 0.222111, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013929, 0.222111, 0.024125);
    glVertex3f(-0.024125, 0.222111, 0.013929);
    glVertex3f(-0.027858, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.027858, 0.222111, 0.0);
    glVertex3f(-0.024125, 0.222111, -0.013929);
    glVertex3f(-0.013929, 0.222111, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013929, 0.222111, -0.024125);
    glVertex3f(0.013929, 0.222111, -0.024125);
    glVertex3f(0.027857, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.027857, 0.222111, 0.0);
    glVertex3f(0.013929, 0.222111, 0.024125);
    glVertex3f(-0.013929, 0.222111, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013929, 0.222111, 0.024125);
    glVertex3f(-0.027858, 0.222111, 0.0);
    glVertex3f(0.027857, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013929, 0.08447, -0.024125);
    glVertex3f(-0.013929, 0.222111, -0.024125);
    glVertex3f(-0.024125, 0.222111, -0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.08447, -0.024125);
    glVertex3f(0.013929, 0.222111, -0.024125);
    glVertex3f(-0.0, 0.222111, -0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024126, 0.08447, 0.013929);
    glVertex3f(-0.024125, 0.222111, 0.013929);
    glVertex3f(-0.013929, 0.222111, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.08447, 0.024125);
    glVertex3f(0.013929, 0.222111, 0.024125);
    glVertex3f(0.024125, 0.222111, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08447, -0.027857);
    glVertex3f(-0.0, 0.222111, -0.027857);
    glVertex3f(-0.013929, 0.222111, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024125, 0.08447, -0.013929);
    glVertex3f(0.024125, 0.222111, -0.013929);
    glVertex3f(0.013929, 0.222111, -0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.027858, 0.08447, 0.0);
    glVertex3f(-0.027858, 0.222111, 0.0);
    glVertex3f(-0.024125, 0.222111, 0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013929, 0.08447, 0.024125);
    glVertex3f(-0.0, 0.08447, 0.027857);
    glVertex3f(-0.0, 0.222111, 0.027857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024125, 0.08447, -0.013929);
    glVertex3f(0.027857, 0.08447, 0.0);
    glVertex3f(0.027857, 0.222111, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.027858, 0.08447, 0.0);
    glVertex3f(-0.024126, 0.08447, -0.013929);
    glVertex3f(-0.024125, 0.222111, -0.013929);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.08447, 0.027857);
    glVertex3f(-0.013929, 0.08447, 0.024125);
    glVertex3f(-0.013929, 0.222111, 0.024125);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.95931, 0.040204);
    glVertex3f(0.0, 0.797045, 0.040197);
    glVertex3f(-0.020098, 0.797045, 0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014503, 0.748028, 0.025119);
    glVertex3f(-0.025119, 0.748028, 0.014503);
    glVertex3f(-0.034811, 0.797045, 0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034811, 0.797045, 0.020098);
    glVertex3f(-0.040197, 0.797045, 0.0);
    glVertex3f(-0.040204, 0.95931, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034811, 0.797045, -0.020098);
    glVertex3f(-0.020098, 0.797045, -0.034811);
    glVertex3f(-0.020102, 0.95931, -0.034818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034818, 0.95931, -0.020102);
    glVertex3f(0.034811, 0.797045, -0.020098);
    glVertex3f(0.040197, 0.797045, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020098, 0.797045, 0.034811);
    glVertex3f(0.0, 0.797045, 0.040197);
    glVertex3f(0.0, 0.95931, 0.040204);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034811, 0.797045, 0.020098);
    glVertex3f(0.020098, 0.797045, 0.034811);
    glVertex3f(0.020102, 0.95931, 0.034818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020102, 0.95931, 0.034818);
    glVertex3f(-0.020098, 0.797045, 0.034811);
    glVertex3f(-0.034811, 0.797045, 0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020102, 0.95931, -0.034818);
    glVertex3f(-0.020098, 0.797045, -0.034811);
    glVertex3f(0.0, 0.797045, -0.040197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.040204, 0.95931, 0.0);
    glVertex3f(-0.040197, 0.797045, 0.0);
    glVertex3f(-0.034811, 0.797045, -0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020098, 0.797045, -0.034811);
    glVertex3f(0.034811, 0.797045, -0.020098);
    glVertex3f(0.034818, 0.95931, -0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.797045, -0.040197);
    glVertex3f(0.020098, 0.797045, -0.034811);
    glVertex3f(0.020102, 0.95931, -0.034818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.040197, 0.797045, 0.0);
    glVertex3f(0.034811, 0.797045, 0.020098);
    glVertex3f(0.034818, 0.95931, 0.020102);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029005, 0.748028, 0.0);
    glVertex3f(-0.029324, 0.747874, 0.0);
    glVertex3f(-0.025395, 0.747874, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025119, 0.748028, 0.014503);
    glVertex3f(0.014503, 0.748028, 0.025119);
    glVertex3f(0.020098, 0.797045, 0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014503, 0.748028, -0.025119);
    glVertex3f(-0.0, 0.748028, -0.029005);
    glVertex3f(0.0, 0.797045, -0.040197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020098, 0.797045, -0.034811);
    glVertex3f(0.014503, 0.748028, -0.025119);
    glVertex3f(0.025119, 0.748028, -0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025119, 0.748028, 0.014503);
    glVertex3f(-0.029005, 0.748028, 0.0);
    glVertex3f(-0.040197, 0.797045, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014503, 0.748028, 0.025119);
    glVertex3f(-0.0, 0.748028, 0.029005);
    glVertex3f(0.0, 0.797045, 0.040197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025119, 0.748028, -0.014503);
    glVertex3f(0.029005, 0.748028, 0.0);
    glVertex3f(0.040197, 0.797045, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029005, 0.748028, 0.0);
    glVertex3f(-0.025119, 0.748028, -0.014503);
    glVertex3f(-0.034811, 0.797045, -0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, 0.029005);
    glVertex3f(-0.014503, 0.748028, 0.025119);
    glVertex3f(-0.020098, 0.797045, 0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029005, 0.748028, 0.0);
    glVertex3f(0.025119, 0.748028, 0.014503);
    glVertex3f(0.034811, 0.797045, 0.020098);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.034811, 0.797045, -0.020098);
    glVertex3f(-0.025119, 0.748028, -0.014503);
    glVertex3f(-0.014503, 0.748028, -0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, -0.029005);
    glVertex3f(0.014503, 0.748028, -0.025119);
    glVertex3f(0.020098, 0.797045, -0.034811);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.747988, -0.014521);
    glVertex3f(0.029042, 0.747988, 0.0);
    glVertex3f(0.029324, 0.747874, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, 0.029005);
    glVertex3f(-0.0, 0.747874, 0.029324);
    glVertex3f(-0.014662, 0.747874, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029005, 0.748028, 0.0);
    glVertex3f(0.029324, 0.747874, 0.0);
    glVertex3f(0.025395, 0.747874, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.747874, -0.014662);
    glVertex3f(-0.014662, 0.747874, -0.025395);
    glVertex3f(-0.014503, 0.748028, -0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.748028, -0.029005);
    glVertex3f(-0.0, 0.747874, -0.029324);
    glVertex3f(0.014662, 0.747874, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.747874, 0.025395);
    glVertex3f(-0.025395, 0.747874, 0.014662);
    glVertex3f(-0.025119, 0.748028, 0.014503);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.747874, 0.014662);
    glVertex3f(0.014662, 0.747874, 0.025395);
    glVertex3f(0.014503, 0.748028, 0.025119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.747874, -0.025395);
    glVertex3f(-0.0, 0.747874, -0.029324);
    glVertex3f(-0.0, 0.748028, -0.029005);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014503, 0.748028, -0.025119);
    glVertex3f(0.014662, 0.747874, -0.025395);
    glVertex3f(0.025395, 0.747874, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.747874, 0.014662);
    glVertex3f(-0.029324, 0.747874, 0.0);
    glVertex3f(-0.029005, 0.748028, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.747874, 0.025395);
    glVertex3f(-0.0, 0.747874, 0.029324);
    glVertex3f(-0.0, 0.748028, 0.029005);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.747874, -0.014662);
    glVertex3f(0.029324, 0.747874, 0.0);
    glVertex3f(0.029005, 0.748028, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028921, 0.261037, 3e-05);
    glVertex3f(0.025061, 0.261037, 0.014435);
    glVertex3f(0.025133, 0.654275, 0.014504);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.747874, 0.0);
    glVertex3f(-0.029042, 0.747988, 0.0);
    glVertex3f(-0.025151, 0.747988, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.747874, 0.029324);
    glVertex3f(-0.0, 0.747988, 0.029042);
    glVertex3f(-0.014521, 0.747988, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029042, 0.747988, 0.0);
    glVertex3f(0.025151, 0.747988, 0.014521);
    glVertex3f(0.025395, 0.747874, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.747988, -0.029042);
    glVertex3f(0.014521, 0.747988, -0.025151);
    glVertex3f(0.014662, 0.747874, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.747874, 0.025395);
    glVertex3f(-0.014521, 0.747988, 0.025151);
    glVertex3f(-0.025151, 0.747988, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.747988, 0.014521);
    glVertex3f(0.014521, 0.747988, 0.025151);
    glVertex3f(0.014662, 0.747874, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.747988, 0.025151);
    glVertex3f(-0.0, 0.747988, 0.029042);
    glVertex3f(-0.0, 0.747874, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.000318, 0.098455, 0.029208);
    glVertex3f(-0.01499, 0.039749, 0.075626);
    glVertex3f(-0.014984, 0.153044, 0.075433);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025134, 0.654275, -0.014504);
    glVertex3f(-0.025061, 0.261037, -0.014435);
    glVertex3f(-0.014459, 0.26108, -0.025043);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
    glVertex3f(0.014435, 0.261037, -0.025061);
    glVertex3f(0.014504, 0.654275, -0.025134);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014504, 0.654275, 0.025134);
    glVertex3f(-0.014435, 0.261037, 0.025061);
    glVertex3f(-0.025044, 0.26108, 0.014459);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025133, 0.654275, 0.014504);
    glVertex3f(0.025061, 0.261037, 0.014435);
    glVertex3f(0.014459, 0.26108, 0.025043);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014459, 0.26108, -0.025043);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
    glVertex3f(6e-06, 0.654275, -0.029018);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014504, 0.654275, -0.025134);
    glVertex3f(0.014435, 0.261037, -0.025061);
    glVertex3f(0.025043, 0.26108, -0.014459);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025044, 0.26108, 0.014459);
    glVertex3f(-0.028921, 0.261037, -3e-05);
    glVertex3f(-0.029018, 0.654275, -6e-06);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014459, 0.26108, 0.025043);
    glVertex3f(-3e-05, 0.261037, 0.028921);
    glVertex3f(-6e-06, 0.654275, 0.029018);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025043, 0.26108, -0.014459);
    glVertex3f(0.028921, 0.261037, 3e-05);
    glVertex3f(0.029018, 0.654275, 6e-06);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028921, 0.261037, -3e-05);
    glVertex3f(-0.025061, 0.261037, -0.014435);
    glVertex3f(-0.025134, 0.654275, -0.014504);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-6e-06, 0.654275, 0.029018);
    glVertex3f(-3e-05, 0.261037, 0.028921);
    glVertex3f(-0.014435, 0.261037, 0.025061);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(-0.0, 0.098388, 0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025061, 0.261037, -0.014435);
    glVertex3f(-0.025454, 0.098455, -0.014329);
    glVertex3f(-0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014435, 0.261037, 0.025061);
    glVertex3f(-0.014329, 0.098455, 0.025454);
    glVertex3f(-0.025151, 0.098388, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025061, 0.261037, 0.014435);
    glVertex3f(0.025453, 0.098455, 0.014329);
    glVertex3f(0.014521, 0.098388, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(0.000317, 0.098455, -0.029208);
    glVertex3f(2.9e-05, 0.261037, -0.028921);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014435, 0.261037, -0.025061);
    glVertex3f(0.014329, 0.098455, -0.025454);
    glVertex3f(0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.029208, 0.098455, -0.000317);
    glVertex3f(-0.028921, 0.261037, -3e-05);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(-0.000318, 0.098455, 0.029208);
    glVertex3f(-3e-05, 0.261037, 0.028921);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.029208, 0.098455, 0.000318);
    glVertex3f(0.028921, 0.261037, 3e-05);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.075626, 0.039749, -0.014989);
    glVertex3f(-0.072989, 0.039749, -0.024831);
    glVertex3f(-0.072819, 0.153044, -0.024741);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.075433, 0.153044, -0.014983);
    glVertex3f(-0.072819, 0.153044, -0.024741);
    glVertex3f(-0.025061, 0.261037, -0.014435);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029208, 0.098455, -0.000317);
    glVertex3f(-0.075626, 0.039749, -0.014989);
    glVertex3f(-0.075433, 0.153044, -0.014983);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.072819, 0.153044, -0.024741);
    glVertex3f(-0.072989, 0.039749, -0.024831);
    glVertex3f(-0.025454, 0.098455, -0.014329);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.01499, 0.039749, 0.075626);
    glVertex3f(-0.024832, 0.039749, 0.072988);
    glVertex3f(-0.024741, 0.153044, 0.072819);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024741, 0.153044, 0.072819);
    glVertex3f(-0.024832, 0.039749, 0.072988);
    glVertex3f(-0.014329, 0.098455, 0.025454);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014984, 0.153044, 0.075433);
    glVertex3f(-0.024741, 0.153044, 0.072819);
    glVertex3f(-0.014435, 0.261037, 0.025061);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075625, 0.039749, 0.014989);
    glVertex3f(0.072988, 0.039749, 0.024832);
    glVertex3f(0.072818, 0.153044, 0.024741);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.072818, 0.153044, 0.024741);
    glVertex3f(0.072988, 0.039749, 0.024832);
    glVertex3f(0.025453, 0.098455, 0.014329);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075433, 0.153044, 0.014983);
    glVertex3f(0.072818, 0.153044, 0.024741);
    glVertex3f(0.025061, 0.261037, 0.014435);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029208, 0.098455, 0.000318);
    glVertex3f(0.075625, 0.039749, 0.014989);
    glVertex3f(0.075433, 0.153044, 0.014983);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014989, 0.039749, -0.075626);
    glVertex3f(0.024831, 0.039749, -0.072988);
    glVertex3f(0.02474, 0.153044, -0.072819);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014983, 0.153044, -0.075433);
    glVertex3f(0.02474, 0.153044, -0.072819);
    glVertex3f(0.014435, 0.261037, -0.025061);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02474, 0.153044, -0.072819);
    glVertex3f(0.024831, 0.039749, -0.072988);
    glVertex3f(0.014329, 0.098455, -0.025454);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.000317, 0.098455, -0.029208);
    glVertex3f(0.014989, 0.039749, -0.075626);
    glVertex3f(0.014983, 0.153044, -0.075433);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025049, 0.088598, -0.014462);
    glVertex3f(-0.014462, 0.088598, -0.025048);
    glVertex3f(-0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.025151, 0.098388, -0.014521);
    glVertex3f(0.029041, 0.098388, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029042, 0.098388, 0.0);
    glVertex3f(-0.025151, 0.098388, -0.014521);
    glVertex3f(-0.025454, 0.098455, -0.014329);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.098388, 0.029042);
    glVertex3f(-0.014521, 0.098388, 0.025151);
    glVertex3f(-0.014329, 0.098455, 0.025454);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029041, 0.098388, 0.0);
    glVertex3f(0.025151, 0.098388, 0.014521);
    glVertex3f(0.025453, 0.098455, 0.014329);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025454, 0.098455, -0.014329);
    glVertex3f(-0.025151, 0.098388, -0.014521);
    glVertex3f(-0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.098388, -0.029042);
    glVertex3f(0.014521, 0.098388, -0.025151);
    glVertex3f(0.014329, 0.098455, -0.025454);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014329, 0.098455, 0.025454);
    glVertex3f(-0.014521, 0.098388, 0.025151);
    glVertex3f(-0.025151, 0.098388, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025453, 0.098455, 0.014329);
    glVertex3f(0.025151, 0.098388, 0.014521);
    glVertex3f(0.014521, 0.098388, 0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(-0.014521, 0.098388, -0.025151);
    glVertex3f(-0.0, 0.098388, -0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014329, 0.098455, -0.025454);
    glVertex3f(0.014521, 0.098388, -0.025151);
    glVertex3f(0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.029042, 0.098388, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02786, 0.084876, 0.0);
    glVertex3f(0.024128, 0.084876, 0.01393);
    glVertex3f(0.025048, 0.088598, 0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.088598, -0.028923);
    glVertex3f(0.014461, 0.088598, -0.025048);
    glVertex3f(0.014521, 0.098388, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.098388, 0.025151);
    glVertex3f(-0.014462, 0.088598, 0.025048);
    glVertex3f(-0.025049, 0.088598, 0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.098388, 0.014521);
    glVertex3f(0.025048, 0.088598, 0.014462);
    glVertex3f(0.014461, 0.088598, 0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014462, 0.088598, -0.025048);
    glVertex3f(-0.0, 0.088598, -0.028923);
    glVertex3f(-0.0, 0.098388, -0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014461, 0.088598, -0.025048);
    glVertex3f(0.025048, 0.088598, -0.014462);
    glVertex3f(0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.098388, 0.014521);
    glVertex3f(-0.025049, 0.088598, 0.014462);
    glVertex3f(-0.028924, 0.088598, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.098388, 0.025151);
    glVertex3f(0.014461, 0.088598, 0.025048);
    glVertex3f(-0.0, 0.088598, 0.028923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025048, 0.088598, -0.014462);
    glVertex3f(0.028923, 0.088598, 0.0);
    glVertex3f(0.029041, 0.098388, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028924, 0.088598, 0.0);
    glVertex3f(-0.025049, 0.088598, -0.014462);
    glVertex3f(-0.025151, 0.098388, -0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.098388, 0.029042);
    glVertex3f(-0.0, 0.088598, 0.028923);
    glVertex3f(-0.014462, 0.088598, 0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029041, 0.098388, 0.0);
    glVertex3f(0.028923, 0.088598, 0.0);
    glVertex3f(0.025048, 0.088598, 0.014462);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02786, 0.084876, 0.0);
    glVertex3f(0.028165, 0.222377, 0.0);
    glVertex3f(0.024391, 0.222377, 0.014082);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025049, 0.088598, -0.014462);
    glVertex3f(-0.024128, 0.084876, -0.01393);
    glVertex3f(-0.013931, 0.084876, -0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.084876, -0.027861);
    glVertex3f(0.01393, 0.084876, -0.024128);
    glVertex3f(0.014461, 0.088598, -0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014462, 0.088598, 0.025048);
    glVertex3f(-0.013931, 0.084876, 0.024128);
    glVertex3f(-0.024128, 0.084876, 0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024128, 0.084876, 0.01393);
    glVertex3f(0.01393, 0.084876, 0.024128);
    glVertex3f(0.014461, 0.088598, 0.025048);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013931, 0.084876, -0.024128);
    glVertex3f(-0.0, 0.084876, -0.027861);
    glVertex3f(-0.0, 0.088598, -0.028923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014461, 0.088598, -0.025048);
    glVertex3f(0.01393, 0.084876, -0.024128);
    glVertex3f(0.024128, 0.084876, -0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024128, 0.084876, 0.01393);
    glVertex3f(-0.027861, 0.084876, 0.0);
    glVertex3f(-0.028924, 0.088598, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.01393, 0.084876, 0.024128);
    glVertex3f(-0.0, 0.084876, 0.027861);
    glVertex3f(-0.0, 0.088598, 0.028923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024128, 0.084876, -0.01393);
    glVertex3f(0.02786, 0.084876, 0.0);
    glVertex3f(0.028923, 0.088598, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028924, 0.088598, 0.0);
    glVertex3f(-0.027861, 0.084876, 0.0);
    glVertex3f(-0.024128, 0.084876, -0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.088598, 0.028923);
    glVertex3f(-0.0, 0.084876, 0.027861);
    glVertex3f(-0.013931, 0.084876, 0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, -0.024392);
    glVertex3f(-0.0, 0.222377, -0.028165);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.222377, -0.028165);
    glVertex3f(-0.014083, 0.222377, -0.024391);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014083, 0.222377, -0.024391);
    glVertex3f(-0.024392, 0.222377, -0.014082);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028165, 0.222377, 0.0);
    glVertex3f(-0.024392, 0.222377, 0.014082);
    glVertex3f(-0.014083, 0.222377, 0.024392);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014083, 0.222377, 0.024392);
    glVertex3f(-0.0, 0.222377, 0.028165);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.222377, 0.028165);
    glVertex3f(0.014082, 0.222377, 0.024392);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, 0.024392);
    glVertex3f(0.024391, 0.222377, 0.014082);
    glVertex3f(0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028165, 0.222377, 0.0);
    glVertex3f(0.024391, 0.222377, -0.014082);
    glVertex3f(0.014082, 0.222377, -0.024392);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, 0.024392);
    glVertex3f(0.028165, 0.222377, 0.0);
    glVertex3f(-0.028165, 0.222377, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024392, 0.222377, -0.014082);
    glVertex3f(-0.014083, 0.222377, -0.024391);
    glVertex3f(-0.013931, 0.084876, -0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.222377, -0.028165);
    glVertex3f(0.014082, 0.222377, -0.024392);
    glVertex3f(0.01393, 0.084876, -0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014083, 0.222377, 0.024392);
    glVertex3f(-0.024392, 0.222377, 0.014082);
    glVertex3f(-0.024128, 0.084876, 0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024391, 0.222377, 0.014082);
    glVertex3f(0.014082, 0.222377, 0.024392);
    glVertex3f(0.01393, 0.084876, 0.024128);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014083, 0.222377, -0.024391);
    glVertex3f(-0.0, 0.222377, -0.028165);
    glVertex3f(-0.0, 0.084876, -0.027861);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, -0.024392);
    glVertex3f(0.024391, 0.222377, -0.014082);
    glVertex3f(0.024128, 0.084876, -0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024392, 0.222377, 0.014082);
    glVertex3f(-0.028165, 0.222377, 0.0);
    glVertex3f(-0.027861, 0.084876, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014082, 0.222377, 0.024392);
    glVertex3f(-0.0, 0.222377, 0.028165);
    glVertex3f(-0.0, 0.084876, 0.027861);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024391, 0.222377, -0.014082);
    glVertex3f(0.028165, 0.222377, 0.0);
    glVertex3f(0.02786, 0.084876, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.028165, 0.222377, 0.0);
    glVertex3f(-0.024392, 0.222377, -0.014082);
    glVertex3f(-0.024128, 0.084876, -0.01393);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.084876, 0.027861);
    glVertex3f(-0.0, 0.222377, 0.028165);
    glVertex3f(-0.014083, 0.222377, 0.024392);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.747988, 0.029042);
    glVertex3f(-6e-06, 0.654275, 0.029018);
    glVertex3f(-0.014504, 0.654275, 0.025134);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029042, 0.747988, 0.0);
    glVertex3f(-0.029018, 0.654275, -6e-06);
    glVertex3f(-0.025134, 0.654275, -0.014504);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02513, 0.654283, -0.014509);
    glVertex3f(0.029018, 0.654275, 6e-06);
    glVertex3f(0.029042, 0.747988, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014509, 0.654283, 0.02513);
    glVertex3f(-6e-06, 0.654275, 0.029018);
    glVertex3f(-0.0, 0.747988, 0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.02513, 0.654283, 0.014509);
    glVertex3f(-0.029018, 0.654275, -6e-06);
    glVertex3f(-0.029042, 0.747988, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.747988, -0.025151);
    glVertex3f(0.014504, 0.654275, -0.025134);
    glVertex3f(0.02513, 0.654283, -0.014509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014509, 0.654283, -0.02513);
    glVertex3f(6e-06, 0.654275, -0.029018);
    glVertex3f(-0.0, 0.747988, -0.029042);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025151, 0.747988, 0.014521);
    glVertex3f(0.025133, 0.654275, 0.014504);
    glVertex3f(0.014509, 0.654283, 0.02513);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.747988, 0.025151);
    glVertex3f(-0.014504, 0.654275, 0.025134);
    glVertex3f(-0.02513, 0.654283, 0.014509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(6e-06, 0.654275, -0.029018);
    glVertex3f(0.014504, 0.654275, -0.025134);
    glVertex3f(0.014521, 0.747988, -0.025151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.747988, -0.014521);
    glVertex3f(-0.025134, 0.654275, -0.014504);
    glVertex3f(-0.014509, 0.654283, -0.02513);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029018, 0.654275, 6e-06);
    glVertex3f(0.025133, 0.654275, 0.014504);
    glVertex3f(0.025151, 0.747988, 0.014521);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.9594, -0.0406);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.0203, 0.9594, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.9594, -0.035161);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.035161, 0.9594, -0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, -0.0203);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.0406, 0.9594, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0406, 0.9594, 0.0);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.035161, 0.9594, 0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, 0.0203);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.0203, 0.9594, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.9594, 0.035161);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.0, 0.9594, 0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.9594, 0.0406);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(-0.0203, 0.9594, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.9594, 0.035161);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(-0.035161, 0.9594, 0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, 0.0203);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(-0.0406, 0.9594, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0406, 0.9594, 0.0);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(-0.035161, 0.9594, -0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, -0.0203);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(-0.0203, 0.9594, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.9594, -0.035161);
    glVertex3f(0.0, 1.0406, 0.0);
    glVertex3f(0.0, 0.9594, -0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.747988, -0.014521);
    glVertex3f(-0.014662, 0.747874, -0.025395);
    glVertex3f(-0.025395, 0.747874, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.747988, -0.025151);
    glVertex3f(-0.0, 0.747874, -0.029324);
    glVertex3f(-0.014662, 0.747874, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.747988, -0.025151);
    glVertex3f(0.025395, 0.747874, -0.014662);
    glVertex3f(0.014662, 0.747874, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.747988, 0.014521);
    glVertex3f(-0.029324, 0.747874, 0.0);
    glVertex3f(-0.025395, 0.747874, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.73649, 0.029324);
    glVertex3f(-0.0, 0.74828, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.029324, 0.73649, 0.0);
    glVertex3f(-0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.73649, -0.014662);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(0.014662, 0.73649, 0.025395);
    glVertex3f(0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.029324, 0.73649, 0.0);
    glVertex3f(-0.025395, 0.73649, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.025395, 0.73649, -0.014662);
    glVertex3f(0.014662, 0.73649, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.73649, -0.029324);
    glVertex3f(-0.014662, 0.73649, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.025395, 0.73649, 0.014662);
    glVertex3f(0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.014662, 0.73649, 0.025395);
    glVertex3f(-0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.73649, -0.029324);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.014662, 0.73649, -0.025395);
    glVertex3f(-0.025395, 0.73649, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.029324, 0.73649, 0.0);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.727238, 0.025395);
    glVertex3f(-0.0, 0.705867, 0.029324);
    glVertex3f(-0.0, 0.727238, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.727238, 0.0);
    glVertex3f(-0.025395, 0.705867, -0.014662);
    glVertex3f(-0.029324, 0.705867, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.727238, -0.014662);
    glVertex3f(0.029324, 0.705867, 0.0);
    glVertex3f(0.025395, 0.705867, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.727238, 0.029324);
    glVertex3f(0.014662, 0.705867, 0.025395);
    glVertex3f(0.014662, 0.727238, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.727238, 0.0);
    glVertex3f(-0.025395, 0.705867, 0.014662);
    glVertex3f(-0.025395, 0.727238, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.727238, -0.025395);
    glVertex3f(0.025395, 0.705867, -0.014662);
    glVertex3f(0.014662, 0.705867, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.727238, -0.025395);
    glVertex3f(-0.0, 0.705867, -0.029324);
    glVertex3f(-0.014662, 0.705867, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.727238, 0.025395);
    glVertex3f(0.025395, 0.705867, 0.014662);
    glVertex3f(0.025395, 0.727238, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.727238, 0.014662);
    glVertex3f(-0.014662, 0.705867, 0.025395);
    glVertex3f(-0.014662, 0.727238, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.727238, -0.029324);
    glVertex3f(0.014662, 0.705867, -0.025395);
    glVertex3f(-0.0, 0.705867, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.727238, -0.025395);
    glVertex3f(-0.025395, 0.705867, -0.014662);
    glVertex3f(-0.025395, 0.727238, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.727238, 0.014662);
    glVertex3f(0.029324, 0.705867, 0.0);
    glVertex3f(0.029324, 0.727238, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.662781, 0.025395);
    glVertex3f(-0.0, 0.643266, 0.029324);
    glVertex3f(-0.0, 0.662781, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.662781, 0.0);
    glVertex3f(-0.025395, 0.643266, -0.014662);
    glVertex3f(-0.029324, 0.643266, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.662781, 0.0);
    glVertex3f(0.025395, 0.643266, -0.014662);
    glVertex3f(0.025395, 0.662781, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.662781, 0.029324);
    glVertex3f(0.014662, 0.643266, 0.025395);
    glVertex3f(0.014662, 0.662781, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.662781, 0.0);
    glVertex3f(-0.025395, 0.643266, 0.014662);
    glVertex3f(-0.025395, 0.662781, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.662781, -0.025395);
    glVertex3f(0.025395, 0.643266, -0.014662);
    glVertex3f(0.014662, 0.643266, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.662781, -0.025395);
    glVertex3f(-0.0, 0.643266, -0.029324);
    glVertex3f(-0.014662, 0.643266, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.662781, 0.025395);
    glVertex3f(0.025395, 0.643266, 0.014662);
    glVertex3f(0.025395, 0.662781, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.662781, 0.014662);
    glVertex3f(-0.014662, 0.643266, 0.025395);
    glVertex3f(-0.014662, 0.662781, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.662781, -0.029324);
    glVertex3f(0.014662, 0.643266, -0.025395);
    glVertex3f(-0.0, 0.643266, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.662781, -0.014662);
    glVertex3f(-0.014662, 0.643266, -0.025395);
    glVertex3f(-0.025395, 0.643266, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.662781, 0.014662);
    glVertex3f(0.029324, 0.643266, 0.0);
    glVertex3f(0.029324, 0.662781, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.643266, 0.025395);
    glVertex3f(-0.0, 0.27241, 0.029324);
    glVertex3f(-0.0, 0.643266, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.643266, -0.014662);
    glVertex3f(-0.029324, 0.27241, 0.0);
    glVertex3f(-0.029324, 0.643266, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.643266, -0.014662);
    glVertex3f(0.029323, 0.27241, 0.0);
    glVertex3f(0.025395, 0.27241, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.643266, 0.029324);
    glVertex3f(0.014662, 0.27241, 0.025395);
    glVertex3f(0.014662, 0.643266, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.643266, 0.014662);
    glVertex3f(-0.029324, 0.27241, 0.0);
    glVertex3f(-0.025395, 0.27241, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.643266, -0.014662);
    glVertex3f(0.014662, 0.27241, -0.025395);
    glVertex3f(0.014662, 0.643266, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.643266, -0.029324);
    glVertex3f(-0.014662, 0.27241, -0.025395);
    glVertex3f(-0.014662, 0.643266, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.643266, 0.025395);
    glVertex3f(0.025395, 0.27241, 0.014662);
    glVertex3f(0.025395, 0.643266, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.643266, 0.014662);
    glVertex3f(-0.014662, 0.27241, 0.025395);
    glVertex3f(-0.014662, 0.643266, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.643266, -0.025395);
    glVertex3f(-0.0, 0.27241, -0.029324);
    glVertex3f(-0.0, 0.643266, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.643266, -0.025395);
    glVertex3f(-0.025395, 0.27241, -0.014662);
    glVertex3f(-0.025395, 0.643266, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.643266, 0.014662);
    glVertex3f(0.029323, 0.27241, 0.0);
    glVertex3f(0.029324, 0.643266, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.694852, 0.014662);
    glVertex3f(0.029324, 0.671404, 0.0);
    glVertex3f(0.029324, 0.694852, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.694852, -0.025395);
    glVertex3f(-0.025395, 0.671404, -0.014662);
    glVertex3f(-0.025395, 0.694852, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.694852, -0.029324);
    glVertex3f(0.014662, 0.671404, -0.025395);
    glVertex3f(-0.0, 0.671404, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.694852, 0.014662);
    glVertex3f(-0.014662, 0.671404, 0.025395);
    glVertex3f(-0.014662, 0.694852, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.694852, 0.025395);
    glVertex3f(0.025395, 0.671404, 0.014662);
    glVertex3f(0.025395, 0.694852, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.694852, -0.025395);
    glVertex3f(-0.0, 0.671404, -0.029324);
    glVertex3f(-0.014662, 0.671404, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.694852, -0.025395);
    glVertex3f(0.025395, 0.671404, -0.014662);
    glVertex3f(0.014662, 0.671404, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.694852, 0.0);
    glVertex3f(-0.025395, 0.671404, 0.014662);
    glVertex3f(-0.025395, 0.694852, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.694852, 0.029324);
    glVertex3f(0.014662, 0.671404, 0.025395);
    glVertex3f(0.014662, 0.694852, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.694852, 0.0);
    glVertex3f(0.025395, 0.671404, -0.014662);
    glVertex3f(0.025395, 0.694852, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.694852, 0.0);
    glVertex3f(-0.025395, 0.671404, -0.014662);
    glVertex3f(-0.029324, 0.671404, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.694852, 0.025395);
    glVertex3f(-0.0, 0.671404, 0.029324);
    glVertex3f(-0.0, 0.694852, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.747988, -0.014521);
    glVertex3f(-0.014521, 0.747988, -0.025151);
    glVertex3f(-0.014662, 0.747874, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014521, 0.747988, -0.025151);
    glVertex3f(-0.0, 0.747988, -0.029042);
    glVertex3f(-0.0, 0.747874, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014521, 0.747988, -0.025151);
    glVertex3f(0.025151, 0.747988, -0.014521);
    glVertex3f(0.025395, 0.747874, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025151, 0.747988, 0.014521);
    glVertex3f(-0.029042, 0.747988, 0.0);
    glVertex3f(-0.029324, 0.747874, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.014662, 0.73649, 0.025395);
    glVertex3f(-0.0, 0.73649, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.025395, 0.73649, -0.014662);
    glVertex3f(-0.029324, 0.73649, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.029324, 0.73649, 0.0);
    glVertex3f(0.025395, 0.73649, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(-0.0, 0.73649, 0.029324);
    glVertex3f(0.014662, 0.73649, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.029324, 0.73649, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.025395, 0.73649, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(-0.0, 0.73649, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.014662, 0.73649, 0.025395);
    glVertex3f(0.025395, 0.73649, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.025395, 0.73649, 0.014662);
    glVertex3f(-0.014662, 0.73649, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(0.014662, 0.73649, -0.025395);
    glVertex3f(-0.0, 0.73649, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.014662, 0.73649, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.025395, 0.73649, 0.014662);
    glVertex3f(0.029324, 0.73649, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.727238, 0.025395);
    glVertex3f(-0.014662, 0.705867, 0.025395);
    glVertex3f(-0.0, 0.705867, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.727238, 0.0);
    glVertex3f(-0.025395, 0.727238, -0.014662);
    glVertex3f(-0.025395, 0.705867, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.727238, -0.014662);
    glVertex3f(0.029324, 0.727238, 0.0);
    glVertex3f(0.029324, 0.705867, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.727238, 0.029324);
    glVertex3f(-0.0, 0.705867, 0.029324);
    glVertex3f(0.014662, 0.705867, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.727238, 0.0);
    glVertex3f(-0.029324, 0.705867, 0.0);
    glVertex3f(-0.025395, 0.705867, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.727238, -0.025395);
    glVertex3f(0.025395, 0.727238, -0.014662);
    glVertex3f(0.025395, 0.705867, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.727238, -0.025395);
    glVertex3f(-0.0, 0.727238, -0.029324);
    glVertex3f(-0.0, 0.705867, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.727238, 0.025395);
    glVertex3f(0.014662, 0.705867, 0.025395);
    glVertex3f(0.025395, 0.705867, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.727238, 0.014662);
    glVertex3f(-0.025395, 0.705867, 0.014662);
    glVertex3f(-0.014662, 0.705867, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.727238, -0.029324);
    glVertex3f(0.014662, 0.727238, -0.025395);
    glVertex3f(0.014662, 0.705867, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.727238, -0.025395);
    glVertex3f(-0.014662, 0.705867, -0.025395);
    glVertex3f(-0.025395, 0.705867, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.727238, 0.014662);
    glVertex3f(0.025395, 0.705867, 0.014662);
    glVertex3f(0.029324, 0.705867, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.662781, 0.025395);
    glVertex3f(-0.014662, 0.643266, 0.025395);
    glVertex3f(-0.0, 0.643266, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.662781, 0.0);
    glVertex3f(-0.025395, 0.662781, -0.014662);
    glVertex3f(-0.025395, 0.643266, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.662781, 0.0);
    glVertex3f(0.029324, 0.643266, 0.0);
    glVertex3f(0.025395, 0.643266, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.662781, 0.029324);
    glVertex3f(-0.0, 0.643266, 0.029324);
    glVertex3f(0.014662, 0.643266, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.662781, 0.0);
    glVertex3f(-0.029324, 0.643266, 0.0);
    glVertex3f(-0.025395, 0.643266, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.662781, -0.025395);
    glVertex3f(0.025395, 0.662781, -0.014662);
    glVertex3f(0.025395, 0.643266, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.662781, -0.025395);
    glVertex3f(-0.0, 0.662781, -0.029324);
    glVertex3f(-0.0, 0.643266, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.662781, 0.025395);
    glVertex3f(0.014662, 0.643266, 0.025395);
    glVertex3f(0.025395, 0.643266, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.662781, 0.014662);
    glVertex3f(-0.025395, 0.643266, 0.014662);
    glVertex3f(-0.014662, 0.643266, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.662781, -0.029324);
    glVertex3f(0.014662, 0.662781, -0.025395);
    glVertex3f(0.014662, 0.643266, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.662781, -0.014662);
    glVertex3f(-0.014662, 0.662781, -0.025395);
    glVertex3f(-0.014662, 0.643266, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.662781, 0.014662);
    glVertex3f(0.025395, 0.643266, 0.014662);
    glVertex3f(0.029324, 0.643266, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.643266, 0.025395);
    glVertex3f(-0.014662, 0.27241, 0.025395);
    glVertex3f(-0.0, 0.27241, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.643266, -0.014662);
    glVertex3f(-0.025395, 0.27241, -0.014662);
    glVertex3f(-0.029324, 0.27241, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.643266, -0.014662);
    glVertex3f(0.029324, 0.643266, 0.0);
    glVertex3f(0.029323, 0.27241, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.643266, 0.029324);
    glVertex3f(-0.0, 0.27241, 0.029324);
    glVertex3f(0.014662, 0.27241, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.643266, 0.014662);
    glVertex3f(-0.029324, 0.643266, 0.0);
    glVertex3f(-0.029324, 0.27241, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.643266, -0.014662);
    glVertex3f(0.025395, 0.27241, -0.014662);
    glVertex3f(0.014662, 0.27241, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.643266, -0.029324);
    glVertex3f(-0.0, 0.27241, -0.029324);
    glVertex3f(-0.014662, 0.27241, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.643266, 0.025395);
    glVertex3f(0.014662, 0.27241, 0.025395);
    glVertex3f(0.025395, 0.27241, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.643266, 0.014662);
    glVertex3f(-0.025395, 0.27241, 0.014662);
    glVertex3f(-0.014662, 0.27241, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.643266, -0.025395);
    glVertex3f(0.014662, 0.27241, -0.025395);
    glVertex3f(-0.0, 0.27241, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.643266, -0.025395);
    glVertex3f(-0.014662, 0.27241, -0.025395);
    glVertex3f(-0.025395, 0.27241, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.643266, 0.014662);
    glVertex3f(0.025395, 0.27241, 0.014662);
    glVertex3f(0.029323, 0.27241, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.694852, 0.014662);
    glVertex3f(0.025395, 0.671404, 0.014662);
    glVertex3f(0.029324, 0.671404, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.694852, -0.025395);
    glVertex3f(-0.014662, 0.671404, -0.025395);
    glVertex3f(-0.025395, 0.671404, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.694852, -0.029324);
    glVertex3f(0.014662, 0.694852, -0.025395);
    glVertex3f(0.014662, 0.671404, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.694852, 0.014662);
    glVertex3f(-0.025395, 0.671404, 0.014662);
    glVertex3f(-0.014662, 0.671404, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.694852, 0.025395);
    glVertex3f(0.014662, 0.671404, 0.025395);
    glVertex3f(0.025395, 0.671404, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.694852, -0.025395);
    glVertex3f(-0.0, 0.694852, -0.029324);
    glVertex3f(-0.0, 0.671404, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.694852, -0.025395);
    glVertex3f(0.025395, 0.694852, -0.014662);
    glVertex3f(0.025395, 0.671404, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.694852, 0.0);
    glVertex3f(-0.029324, 0.671404, 0.0);
    glVertex3f(-0.025395, 0.671404, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.694852, 0.029324);
    glVertex3f(-0.0, 0.671404, 0.029324);
    glVertex3f(0.014662, 0.671404, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.694852, 0.0);
    glVertex3f(0.029324, 0.671404, 0.0);
    glVertex3f(0.025395, 0.671404, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.694852, 0.0);
    glVertex3f(-0.025395, 0.694852, -0.014662);
    glVertex3f(-0.025395, 0.671404, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.694852, 0.025395);
    glVertex3f(-0.014662, 0.671404, 0.025395);
    glVertex3f(-0.0, 0.671404, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.014809, 0.153107, 0.075794);
    glVertex3f(-0.014809, 0.039427, 0.075794);
  glEnd();

  glColor3f(1.0, 0.0, 0.0);

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.073044, 0.039427, 0.025072);
    glVertex3f(0.025395, 0.09868, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(0.025072, 0.039427, -0.073044);
    glVertex3f(0.014662, 0.09868, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.26108, 0.0);
    glVertex3f(0.025395, 0.09868, -0.014662);
    glVertex3f(0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.073044, 0.039427, -0.025072);
    glVertex3f(-0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.073044, 0.153107, -0.025072);
    glVertex3f(-0.075795, 0.039427, -0.014809);
    glVertex3f(-0.075794, 0.153107, -0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.26108, -0.014662);
    glVertex3f(-0.075794, 0.153107, -0.014809);
    glVertex3f(-0.029324, 0.26108, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.075794, 0.153107, -0.014809);
    glVertex3f(-0.075795, 0.039427, -0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.073044, 0.153107, -0.025072);
    glVertex3f(-0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025072, 0.153107, 0.073044);
    glVertex3f(-0.014809, 0.039427, 0.075794);
    glVertex3f(-0.014809, 0.153107, 0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.025072, 0.153107, 0.073044);
    glVertex3f(-0.014662, 0.26108, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.025072, 0.039427, 0.073044);
    glVertex3f(-0.014662, 0.09868, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.26108, 0.025395);
    glVertex3f(-0.014809, 0.153107, 0.075794);
    glVertex3f(-0.0, 0.26108, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.073044, 0.153107, 0.025072);
    glVertex3f(0.075794, 0.039427, 0.014809);
    glVertex3f(0.075794, 0.153107, 0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.073044, 0.153107, 0.025072);
    glVertex3f(0.025395, 0.26108, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.26108, 0.014662);
    glVertex3f(0.075794, 0.153107, 0.014809);
    glVertex3f(0.029323, 0.26108, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.075794, 0.153107, 0.014809);
    glVertex3f(0.075794, 0.039427, 0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025072, 0.153107, -0.073044);
    glVertex3f(0.014809, 0.039427, -0.075794);
    glVertex3f(0.014809, 0.153107, -0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.26108, -0.025395);
    glVertex3f(0.014809, 0.153107, -0.075794);
    glVertex3f(-0.0, 0.26108, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.025072, 0.153107, -0.073044);
    glVertex3f(0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(0.014809, 0.153107, -0.075794);
    glVertex3f(0.014809, 0.039427, -0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.072988, 0.039749, 0.024832);
    glVertex3f(0.029208, 0.098455, 0.000318);
    glVertex3f(0.025453, 0.098455, 0.014329);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024831, 0.039749, -0.072988);
    glVertex3f(0.000317, 0.098455, -0.029208);
    glVertex3f(0.014329, 0.098455, -0.025454);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.072989, 0.039749, -0.024831);
    glVertex3f(-0.029208, 0.098455, -0.000317);
    glVertex3f(-0.025454, 0.098455, -0.014329);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024832, 0.039749, 0.072988);
    glVertex3f(-0.000318, 0.098455, 0.029208);
    glVertex3f(-0.014329, 0.098455, 0.025454);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.0, 0.26108, 0.029324);
    glVertex3f(-0.014809, 0.153107, 0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.075794, 0.039427, 0.014809);
    glVertex3f(0.073044, 0.039427, 0.025072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(0.014809, 0.039427, -0.075794);
    glVertex3f(0.025072, 0.039427, -0.073044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.26108, 0.0);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.025395, 0.09868, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.075795, 0.039427, -0.014809);
    glVertex3f(-0.073044, 0.039427, -0.025072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.073044, 0.153107, -0.025072);
    glVertex3f(-0.073044, 0.039427, -0.025072);
    glVertex3f(-0.075795, 0.039427, -0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.26108, -0.014662);
    glVertex3f(-0.073044, 0.153107, -0.025072);
    glVertex3f(-0.075794, 0.153107, -0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.09868, 0.0);
    glVertex3f(-0.029324, 0.26108, 0.0);
    glVertex3f(-0.075794, 0.153107, -0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.09868, -0.014662);
    glVertex3f(-0.073044, 0.039427, -0.025072);
    glVertex3f(-0.073044, 0.153107, -0.025072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025072, 0.153107, 0.073044);
    glVertex3f(-0.025072, 0.039427, 0.073044);
    glVertex3f(-0.014809, 0.039427, 0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.09868, 0.025395);
    glVertex3f(-0.025072, 0.039427, 0.073044);
    glVertex3f(-0.025072, 0.153107, 0.073044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, 0.029324);
    glVertex3f(-0.014809, 0.039427, 0.075794);
    glVertex3f(-0.025072, 0.039427, 0.073044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.26108, 0.025395);
    glVertex3f(-0.025072, 0.153107, 0.073044);
    glVertex3f(-0.014809, 0.153107, 0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.073044, 0.153107, 0.025072);
    glVertex3f(0.073044, 0.039427, 0.025072);
    glVertex3f(0.075794, 0.039427, 0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.09868, 0.014662);
    glVertex3f(0.073044, 0.039427, 0.025072);
    glVertex3f(0.073044, 0.153107, 0.025072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.26108, 0.014662);
    glVertex3f(0.073044, 0.153107, 0.025072);
    glVertex3f(0.075794, 0.153107, 0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.09868, 0.0);
    glVertex3f(0.029323, 0.26108, 0.0);
    glVertex3f(0.075794, 0.153107, 0.014809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025072, 0.153107, -0.073044);
    glVertex3f(0.025072, 0.039427, -0.073044);
    glVertex3f(0.014809, 0.039427, -0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.26108, -0.025395);
    glVertex3f(0.025072, 0.153107, -0.073044);
    glVertex3f(0.014809, 0.153107, -0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.09868, -0.025395);
    glVertex3f(0.025072, 0.039427, -0.073044);
    glVertex3f(0.025072, 0.153107, -0.073044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.09868, -0.029324);
    glVertex3f(-0.0, 0.26108, -0.029324);
    glVertex3f(0.014809, 0.153107, -0.075794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.072988, 0.039749, 0.024832);
    glVertex3f(0.075625, 0.039749, 0.014989);
    glVertex3f(0.029208, 0.098455, 0.000318);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024831, 0.039749, -0.072988);
    glVertex3f(0.014989, 0.039749, -0.075626);
    glVertex3f(0.000317, 0.098455, -0.029208);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.072989, 0.039749, -0.024831);
    glVertex3f(-0.075626, 0.039749, -0.014989);
    glVertex3f(-0.029208, 0.098455, -0.000317);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.024832, 0.039749, 0.072988);
    glVertex3f(-0.01499, 0.039749, 0.075626);
    glVertex3f(-0.000318, 0.098455, 0.029208);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.9594, 0.035161);
    glVertex3f(0.0, 0.797, 0.0406);
    glVertex3f(0.0, 0.9594, 0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.797, 0.0203);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0203, 0.797, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, 0.0203);
    glVertex3f(-0.0406, 0.797, 0.0);
    glVertex3f(-0.035161, 0.797, 0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, -0.0203);
    glVertex3f(-0.0203, 0.797, -0.035161);
    glVertex3f(-0.035161, 0.797, -0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0406, 0.9594, 0.0);
    glVertex3f(0.035161, 0.797, -0.0203);
    glVertex3f(0.035161, 0.9594, -0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.9594, 0.0406);
    glVertex3f(0.0203, 0.797, 0.035161);
    glVertex3f(0.0203, 0.9594, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, 0.0203);
    glVertex3f(0.0203, 0.797, 0.035161);
    glVertex3f(0.035161, 0.797, 0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, 0.0203);
    glVertex3f(-0.0203, 0.797, 0.035161);
    glVertex3f(-0.0203, 0.9594, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.9594, -0.0406);
    glVertex3f(-0.0203, 0.797, -0.035161);
    glVertex3f(-0.0203, 0.9594, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, -0.0203);
    glVertex3f(-0.0406, 0.797, 0.0);
    glVertex3f(-0.0406, 0.9594, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, -0.0203);
    glVertex3f(0.0203, 0.797, -0.035161);
    glVertex3f(0.0203, 0.9594, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.9594, -0.035161);
    glVertex3f(0.0, 0.797, -0.0406);
    glVertex3f(0.0, 0.9594, -0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, 0.0203);
    glVertex3f(0.0406, 0.797, 0.0);
    glVertex3f(0.0406, 0.9594, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.797, 0.035161);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.035161, 0.797, 0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.797, -0.035161);
    glVertex3f(-0.0, 0.74828, -0.029324);
    glVertex3f(-0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.797, -0.035161);
    glVertex3f(0.025395, 0.74828, -0.014662);
    glVertex3f(0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0406, 0.797, 0.0);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.035161, 0.797, 0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.797, 0.0406);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.0203, 0.797, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.797, -0.0203);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.797, -0.0203);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.0406, 0.797, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.797, 0.035161);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(0.0, 0.797, 0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.797, 0.0203);
    glVertex3f(0.029324, 0.74828, 0.0);
    glVertex3f(0.0406, 0.797, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.797, -0.0203);
    glVertex3f(-0.014662, 0.74828, -0.025395);
    glVertex3f(-0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.797, -0.0406);
    glVertex3f(0.014662, 0.74828, -0.025395);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.27241, 0.014662);
    glVertex3f(0.029323, 0.26108, 0.0);
    glVertex3f(0.029323, 0.27241, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.27241, -0.014662);
    glVertex3f(-0.014662, 0.26108, -0.025395);
    glVertex3f(-0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.27241, -0.029324);
    glVertex3f(0.014662, 0.26108, -0.025395);
    glVertex3f(-0.0, 0.26108, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.27241, 0.014662);
    glVertex3f(-0.014662, 0.26108, 0.025395);
    glVertex3f(-0.014662, 0.27241, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.27241, 0.025395);
    glVertex3f(0.025395, 0.26108, 0.014662);
    glVertex3f(0.025395, 0.27241, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.27241, -0.025395);
    glVertex3f(-0.0, 0.26108, -0.029324);
    glVertex3f(-0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.27241, -0.025395);
    glVertex3f(0.025395, 0.26108, -0.014662);
    glVertex3f(0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.27241, 0.0);
    glVertex3f(-0.025395, 0.26108, 0.014662);
    glVertex3f(-0.025395, 0.27241, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.27241, 0.029324);
    glVertex3f(0.014662, 0.26108, 0.025395);
    glVertex3f(0.014662, 0.27241, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.27241, 0.0);
    glVertex3f(0.025395, 0.26108, -0.014662);
    glVertex3f(0.025395, 0.27241, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.27241, 0.0);
    glVertex3f(-0.025395, 0.26108, -0.014662);
    glVertex3f(-0.029324, 0.26108, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.27241, 0.025395);
    glVertex3f(-0.0, 0.26108, 0.029324);
    glVertex3f(-0.0, 0.27241, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.73649, 0.025395);
    glVertex3f(-0.0, 0.727238, 0.029324);
    glVertex3f(-0.0, 0.73649, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.73649, -0.014662);
    glVertex3f(-0.029324, 0.727238, 0.0);
    glVertex3f(-0.029324, 0.73649, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.73649, 0.0);
    glVertex3f(0.025395, 0.727238, -0.014662);
    glVertex3f(0.025395, 0.73649, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.73649, 0.029324);
    glVertex3f(0.014662, 0.727238, 0.025395);
    glVertex3f(0.014662, 0.73649, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.73649, 0.0);
    glVertex3f(-0.025395, 0.727238, 0.014662);
    glVertex3f(-0.025395, 0.73649, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.73649, -0.025395);
    glVertex3f(0.025395, 0.727238, -0.014662);
    glVertex3f(0.014662, 0.727238, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.73649, -0.025395);
    glVertex3f(-0.0, 0.727238, -0.029324);
    glVertex3f(-0.014662, 0.727238, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.73649, 0.025395);
    glVertex3f(0.025395, 0.727238, 0.014662);
    glVertex3f(0.025395, 0.73649, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.73649, 0.014662);
    glVertex3f(-0.014662, 0.727238, 0.025395);
    glVertex3f(-0.014662, 0.73649, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.73649, -0.029324);
    glVertex3f(0.014662, 0.727238, -0.025395);
    glVertex3f(-0.0, 0.727238, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.73649, -0.025395);
    glVertex3f(-0.025395, 0.727238, -0.014662);
    glVertex3f(-0.025395, 0.73649, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.73649, 0.014662);
    glVertex3f(0.029324, 0.727238, 0.0);
    glVertex3f(0.029324, 0.73649, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.705867, 0.025395);
    glVertex3f(-0.0, 0.694852, 0.029324);
    glVertex3f(-0.0, 0.705867, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.705867, -0.014662);
    glVertex3f(-0.029324, 0.694852, 0.0);
    glVertex3f(-0.029324, 0.705867, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.705867, 0.0);
    glVertex3f(0.025395, 0.694852, -0.014662);
    glVertex3f(0.025395, 0.705867, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.705867, 0.029324);
    glVertex3f(0.014662, 0.694852, 0.025395);
    glVertex3f(0.014662, 0.705867, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.705867, 0.0);
    glVertex3f(-0.025395, 0.694852, 0.014662);
    glVertex3f(-0.025395, 0.705867, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.705867, -0.025395);
    glVertex3f(0.025395, 0.694852, -0.014662);
    glVertex3f(0.014662, 0.694852, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.705867, -0.025395);
    glVertex3f(-0.0, 0.694852, -0.029324);
    glVertex3f(-0.014662, 0.694852, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.705867, 0.025395);
    glVertex3f(0.025395, 0.694852, 0.014662);
    glVertex3f(0.025395, 0.705867, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.705867, 0.014662);
    glVertex3f(-0.014662, 0.694852, 0.025395);
    glVertex3f(-0.014662, 0.705867, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.705867, -0.029324);
    glVertex3f(0.014662, 0.694852, -0.025395);
    glVertex3f(-0.0, 0.694852, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.705867, -0.025395);
    glVertex3f(-0.025395, 0.694852, -0.014662);
    glVertex3f(-0.025395, 0.705867, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.705867, 0.014662);
    glVertex3f(0.029324, 0.694852, 0.0);
    glVertex3f(0.029324, 0.705867, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.671404, 0.014662);
    glVertex3f(0.029324, 0.662781, 0.0);
    glVertex3f(0.029324, 0.671404, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.671404, -0.014662);
    glVertex3f(-0.014662, 0.662781, -0.025395);
    glVertex3f(-0.025395, 0.662781, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.671404, -0.029324);
    glVertex3f(0.014662, 0.662781, -0.025395);
    glVertex3f(-0.0, 0.662781, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.671404, 0.014662);
    glVertex3f(-0.014662, 0.662781, 0.025395);
    glVertex3f(-0.014662, 0.671404, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.671404, 0.025395);
    glVertex3f(0.025395, 0.662781, 0.014662);
    glVertex3f(0.025395, 0.671404, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.671404, -0.025395);
    glVertex3f(-0.0, 0.662781, -0.029324);
    glVertex3f(-0.014662, 0.662781, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.671404, -0.014662);
    glVertex3f(0.014662, 0.662781, -0.025395);
    glVertex3f(0.014662, 0.671404, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.671404, 0.0);
    glVertex3f(-0.025395, 0.662781, 0.014662);
    glVertex3f(-0.025395, 0.671404, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.671404, 0.029324);
    glVertex3f(0.014662, 0.662781, 0.025395);
    glVertex3f(0.014662, 0.671404, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.671404, 0.0);
    glVertex3f(0.025395, 0.662781, -0.014662);
    glVertex3f(0.025395, 0.671404, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.671404, 0.0);
    glVertex3f(-0.025395, 0.662781, -0.014662);
    glVertex3f(-0.029324, 0.662781, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.671404, 0.025395);
    glVertex3f(-0.0, 0.662781, 0.029324);
    glVertex3f(-0.0, 0.671404, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.9594, 0.035161);
    glVertex3f(-0.0203, 0.797, 0.035161);
    glVertex3f(0.0, 0.797, 0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.797, 0.0203);
    glVertex3f(-0.025395, 0.74828, 0.014662);
    glVertex3f(-0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, 0.0203);
    glVertex3f(-0.0406, 0.9594, 0.0);
    glVertex3f(-0.0406, 0.797, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, -0.0203);
    glVertex3f(-0.0203, 0.9594, -0.035161);
    glVertex3f(-0.0203, 0.797, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0406, 0.9594, 0.0);
    glVertex3f(0.0406, 0.797, 0.0);
    glVertex3f(0.035161, 0.797, -0.0203);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.9594, 0.0406);
    glVertex3f(0.0, 0.797, 0.0406);
    glVertex3f(0.0203, 0.797, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, 0.0203);
    glVertex3f(0.0203, 0.9594, 0.035161);
    glVertex3f(0.0203, 0.797, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, 0.0203);
    glVertex3f(-0.035161, 0.797, 0.0203);
    glVertex3f(-0.0203, 0.797, 0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.9594, -0.0406);
    glVertex3f(0.0, 0.797, -0.0406);
    glVertex3f(-0.0203, 0.797, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.9594, -0.0203);
    glVertex3f(-0.035161, 0.797, -0.0203);
    glVertex3f(-0.0406, 0.797, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, -0.0203);
    glVertex3f(0.035161, 0.797, -0.0203);
    glVertex3f(0.0203, 0.797, -0.035161);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.9594, -0.035161);
    glVertex3f(0.0203, 0.797, -0.035161);
    glVertex3f(0.0, 0.797, -0.0406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.9594, 0.0203);
    glVertex3f(0.035161, 0.797, 0.0203);
    glVertex3f(0.0406, 0.797, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.797, 0.035161);
    glVertex3f(0.014662, 0.74828, 0.025395);
    glVertex3f(0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.797, -0.035161);
    glVertex3f(0.0, 0.797, -0.0406);
    glVertex3f(-0.0, 0.74828, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0203, 0.797, -0.035161);
    glVertex3f(0.035161, 0.797, -0.0203);
    glVertex3f(0.025395, 0.74828, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0406, 0.797, 0.0);
    glVertex3f(-0.029324, 0.74828, 0.0);
    glVertex3f(-0.025395, 0.74828, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.797, 0.0406);
    glVertex3f(-0.0, 0.74828, 0.029324);
    glVertex3f(0.014662, 0.74828, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.797, -0.0203);
    glVertex3f(0.0406, 0.797, 0.0);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.797, -0.0203);
    glVertex3f(-0.025395, 0.74828, -0.014662);
    glVertex3f(-0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0203, 0.797, 0.035161);
    glVertex3f(-0.014662, 0.74828, 0.025395);
    glVertex3f(-0.0, 0.74828, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.035161, 0.797, 0.0203);
    glVertex3f(0.025395, 0.74828, 0.014662);
    glVertex3f(0.029324, 0.74828, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035161, 0.797, -0.0203);
    glVertex3f(-0.0203, 0.797, -0.035161);
    glVertex3f(-0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.0, 0.797, -0.0406);
    glVertex3f(0.0203, 0.797, -0.035161);
    glVertex3f(0.014662, 0.74828, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.27241, 0.014662);
    glVertex3f(0.025395, 0.26108, 0.014662);
    glVertex3f(0.029323, 0.26108, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.27241, -0.014662);
    glVertex3f(-0.014662, 0.27241, -0.025395);
    glVertex3f(-0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.27241, -0.029324);
    glVertex3f(0.014662, 0.27241, -0.025395);
    glVertex3f(0.014662, 0.26108, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.27241, 0.014662);
    glVertex3f(-0.025395, 0.26108, 0.014662);
    glVertex3f(-0.014662, 0.26108, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.27241, 0.025395);
    glVertex3f(0.014662, 0.26108, 0.025395);
    glVertex3f(0.025395, 0.26108, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.27241, -0.025395);
    glVertex3f(-0.0, 0.27241, -0.029324);
    glVertex3f(-0.0, 0.26108, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.27241, -0.025395);
    glVertex3f(0.025395, 0.27241, -0.014662);
    glVertex3f(0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.27241, 0.0);
    glVertex3f(-0.029324, 0.26108, 0.0);
    glVertex3f(-0.025395, 0.26108, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.27241, 0.029324);
    glVertex3f(-0.0, 0.26108, 0.029324);
    glVertex3f(0.014662, 0.26108, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029323, 0.27241, 0.0);
    glVertex3f(0.029323, 0.26108, 0.0);
    glVertex3f(0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.27241, 0.0);
    glVertex3f(-0.025395, 0.27241, -0.014662);
    glVertex3f(-0.025395, 0.26108, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.27241, 0.025395);
    glVertex3f(-0.014662, 0.26108, 0.025395);
    glVertex3f(-0.0, 0.26108, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.73649, 0.025395);
    glVertex3f(-0.014662, 0.727238, 0.025395);
    glVertex3f(-0.0, 0.727238, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.73649, -0.014662);
    glVertex3f(-0.025395, 0.727238, -0.014662);
    glVertex3f(-0.029324, 0.727238, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.73649, 0.0);
    glVertex3f(0.029324, 0.727238, 0.0);
    glVertex3f(0.025395, 0.727238, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.73649, 0.029324);
    glVertex3f(-0.0, 0.727238, 0.029324);
    glVertex3f(0.014662, 0.727238, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.73649, 0.0);
    glVertex3f(-0.029324, 0.727238, 0.0);
    glVertex3f(-0.025395, 0.727238, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.73649, -0.025395);
    glVertex3f(0.025395, 0.73649, -0.014662);
    glVertex3f(0.025395, 0.727238, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.73649, -0.025395);
    glVertex3f(-0.0, 0.73649, -0.029324);
    glVertex3f(-0.0, 0.727238, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.73649, 0.025395);
    glVertex3f(0.014662, 0.727238, 0.025395);
    glVertex3f(0.025395, 0.727238, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.73649, 0.014662);
    glVertex3f(-0.025395, 0.727238, 0.014662);
    glVertex3f(-0.014662, 0.727238, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.73649, -0.029324);
    glVertex3f(0.014662, 0.73649, -0.025395);
    glVertex3f(0.014662, 0.727238, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.73649, -0.025395);
    glVertex3f(-0.014662, 0.727238, -0.025395);
    glVertex3f(-0.025395, 0.727238, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.73649, 0.014662);
    glVertex3f(0.025395, 0.727238, 0.014662);
    glVertex3f(0.029324, 0.727238, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.705867, 0.025395);
    glVertex3f(-0.014662, 0.694852, 0.025395);
    glVertex3f(-0.0, 0.694852, 0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.705867, -0.014662);
    glVertex3f(-0.025395, 0.694852, -0.014662);
    glVertex3f(-0.029324, 0.694852, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.705867, 0.0);
    glVertex3f(0.029324, 0.694852, 0.0);
    glVertex3f(0.025395, 0.694852, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.705867, 0.029324);
    glVertex3f(-0.0, 0.694852, 0.029324);
    glVertex3f(0.014662, 0.694852, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.705867, 0.0);
    glVertex3f(-0.029324, 0.694852, 0.0);
    glVertex3f(-0.025395, 0.694852, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.705867, -0.025395);
    glVertex3f(0.025395, 0.705867, -0.014662);
    glVertex3f(0.025395, 0.694852, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.705867, -0.025395);
    glVertex3f(-0.0, 0.705867, -0.029324);
    glVertex3f(-0.0, 0.694852, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.705867, 0.025395);
    glVertex3f(0.014662, 0.694852, 0.025395);
    glVertex3f(0.025395, 0.694852, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.705867, 0.014662);
    glVertex3f(-0.025395, 0.694852, 0.014662);
    glVertex3f(-0.014662, 0.694852, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.705867, -0.029324);
    glVertex3f(0.014662, 0.705867, -0.025395);
    glVertex3f(0.014662, 0.694852, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.705867, -0.025395);
    glVertex3f(-0.014662, 0.694852, -0.025395);
    glVertex3f(-0.025395, 0.694852, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.705867, 0.014662);
    glVertex3f(0.025395, 0.694852, 0.014662);
    glVertex3f(0.029324, 0.694852, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.671404, 0.014662);
    glVertex3f(0.025395, 0.662781, 0.014662);
    glVertex3f(0.029324, 0.662781, 0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.671404, -0.014662);
    glVertex3f(-0.014662, 0.671404, -0.025395);
    glVertex3f(-0.014662, 0.662781, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.671404, -0.029324);
    glVertex3f(0.014662, 0.671404, -0.025395);
    glVertex3f(0.014662, 0.662781, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.025395, 0.671404, 0.014662);
    glVertex3f(-0.025395, 0.662781, 0.014662);
    glVertex3f(-0.014662, 0.662781, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.014662, 0.671404, 0.025395);
    glVertex3f(0.014662, 0.662781, 0.025395);
    glVertex3f(0.025395, 0.662781, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.671404, -0.025395);
    glVertex3f(-0.0, 0.671404, -0.029324);
    glVertex3f(-0.0, 0.662781, -0.029324);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.025395, 0.671404, -0.014662);
    glVertex3f(0.025395, 0.662781, -0.014662);
    glVertex3f(0.014662, 0.662781, -0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.671404, 0.0);
    glVertex3f(-0.029324, 0.662781, 0.0);
    glVertex3f(-0.025395, 0.662781, 0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0, 0.671404, 0.029324);
    glVertex3f(-0.0, 0.662781, 0.029324);
    glVertex3f(0.014662, 0.662781, 0.025395);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.029324, 0.671404, 0.0);
    glVertex3f(0.029324, 0.662781, 0.0);
    glVertex3f(0.025395, 0.662781, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029324, 0.671404, 0.0);
    glVertex3f(-0.025395, 0.671404, -0.014662);
    glVertex3f(-0.025395, 0.662781, -0.014662);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014662, 0.671404, 0.025395);
    glVertex3f(-0.014662, 0.662781, 0.025395);
    glVertex3f(-0.0, 0.662781, 0.029324);
  glEnd();
}
