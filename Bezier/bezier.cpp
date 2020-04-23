#include <GL/freeglut.h>
#include <iostream>
#include <vector>
#include <math.h>
#include "bresenham.h"

#ifdef _WIN32
#include <windows.h>
#endif

///////////////////////////////////////////////////////////////////////////////
// Global variables to capture program state
///////////////////////////////////////////////////////////////////////////////
int degree = -1;
int radius = 5;
int currIndex = -1;
bool isMouseDragging = false;

struct Point
{
    double x, y;
};

std::vector<struct Point> points;
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
//Math Utility Functions
//////////////////////////////////////////////////////////////////////////////
long long int factorial(int n)
{
    long long int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

double binomialCoeff(int n, int i, double t)
{
    double nCi = factorial(n) / (factorial(n-i) * factorial(i));
    double value = nCi * pow(1 - t, n - i) * pow(t, i);
    return value;
}

int checkAnchor(int x, int y)
{
    for (int i = 0; i <= degree; ++i)
    {
	// Check if the point lies within anchor circle
        double dist = pow(x - points[i].x, 2) + pow(y - points[i].y, 2);
        if(dist <= radius * radius)
            return i;
    }
    return -1;
}
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// Main Drawing Function
///////////////////////////////////////////////////////////////////////////////
void drawBezier()
{
    struct Point temp = {0.0f, 0.0f};

    glPointSize(1.0);

    // Marking anchor points of the curve
    for (int i = 0; i <= degree; ++i)
        bres_circle(points[i].x, points[i].y, radius);

    glBegin(GL_POINTS);
        for (double t = 0; t <= 1; t += 0.0001)
        {
            temp.x = 0.0f;
            temp.y = 0.0f;
    
            for (int i = 0; i <= degree; ++i)
            {
                double multFactor = binomialCoeff(degree, i, t);
                temp.x += multFactor * points[i].x;
                temp.y += multFactor * points[i].y;
            }
            glVertex2f(temp.x, temp.y);
        }
    glEnd();
}
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// GLUT Callback Functions
///////////////////////////////////////////////////////////////////////////////
void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    drawBezier();

    glutSwapBuffers();
}

// Closes window on hitting Esc
void keyboard(unsigned char key, int x, int y)
{
    if (key == 27)
        glutLeaveMainLoop();
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-400, 400, -400, 400);
    glMatrixMode(GL_MODELVIEW);
}

void mouseFunc(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN &&
       (checkAnchor(x - 400, 400 - y) >= 0))
    {        
        currIndex = checkAnchor(x - 400, 400 - y);
        std::cout << "Found anchor at (" << x << ", " << y << ")" << std::endl;
        isMouseDragging = (state == GLUT_DOWN);
    }

    else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP &&
            (checkAnchor(x - 400, 400 - y) < 0))
    {
        degree++;

        struct Point p = {x - 400.0f, 400.0f - y};
        points.push_back(p);

        glBegin(GL_POINTS);
          glVertex2f(p.x, p.y);
        glEnd();

        glutPostRedisplay();
    }

    else if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP &&
            (checkAnchor(x - 400, 400 - y) >= 0))
    {
        int idx = checkAnchor(x - 400, 400 - y);
        points.erase(points.begin() + idx);

        degree--;

        glutPostRedisplay();
    }
}

void motionFunc(int x, int y)
{
    if (isMouseDragging)
    {
        points[currIndex].x = x - 400;
        points[currIndex].y = 400 - y;

        glutPostRedisplay();
    }
}
///////////////////////////////////////////////////////////////////////////////


int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(400,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Bezier Curve");

    // Registering GLUT callbacks
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouseFunc);
    glutMotionFunc(motionFunc);
    
    glutMainLoop();
    return 0;
}

