#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <math.h>
#include "bresenham.h"

#ifdef _WIN32
#include <windows.h>
#endif

struct Point
{
    double x, y;
};

std::vector<struct Point> points;

void drawBezier();
int checkAnchor(int x, int y);

///////////////////////////////////////////////////////////////////////////////// Global variables to capture program state
///////////////////////////////////////////////////////////////////////////////
int degree = -1;
int radius = 5;
int currIndex = -1;
bool dragging = false;
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////// GLUT Callback Functions
///////////////////////////////////////////////////////////////////////////////
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // TODO: change to glutSwapBuffers()
    glFlush();
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
       (checkAnchor(x - 400 , 400 - y) >= 0))
    {        
        currIndex = checkAnchor(x - 400, 400 - y);
        std::cout << "Found anchor at (" << x << ", " << y << ")" << std::endl;
        dragging = (state == GLUT_DOWN);
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
        glFlush();

        drawBezier();
    }

    else if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP &&
            (checkAnchor(x - 400, 400 - y) >= 0))
    {
        int idx = checkAnchor(x - 400, 400 - y);
        points.erase(points.begin() + idx);

        degree--;

        drawBezier();
    }
}

void motionFunc(int x, int y)
{
    if (dragging)
    {
        points[currIndex].x = x - 400;
        points[currIndex].y = 400 - y;

        drawBezier();
    }
}
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////// Math Utility Functions
//////////////////////////////////////////////////////////////////////////////
int factorial(int n)
{
    int fact = 1;
    for(int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

float binomialCoeff(int n, int i, float t)
{
    float nCi = factorial(n) / (factorial(n-i) * factorial(i));
    float value = nCi * pow(1 - t, n - i) * pow(t, i);
    return value;
}

int checkAnchor(int x, int y)
{
    for (int i = 0; i <= degree ; ++i)
    {
        if( (pow(x-points[i].x,2)+pow(y-points[i].y,2)) <= pow(radius,2)) // check It lies within the circle of anchor
        {
            return i;
            break;
        }
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
    glClear(GL_COLOR_BUFFER_BIT);

    // Marking anchor points of the curve
    for (int i = 0; i <= degree; ++i)
        bres_circle(points[i].x, points[i].y, radius);

    glBegin(GL_POINTS);
        for (float t = 0; t <= 1; t += 0.0001)
        {
            temp.x=0.0;
            temp.y=0.0;
    
            for (int i = 0; i <= degree; ++i)
            {
                float multFactor = binomialCoeff(degree, i, t);
                temp.x += multFactor * points[i].x;
                temp.y += multFactor * points[i].y;
            }
            glVertex2f(temp.x, temp.y);
        }
    glEnd();
    glFlush();
}
///////////////////////////////////////////////////////////////////////////////


void init()
{
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(400,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Bezier Curve");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouseFunc);
    glutMotionFunc(motionFunc);
}

int main(int argc, char ** argv)
{
	glutInit(&argc,argv);
	init();
	glutMainLoop();
	return 0;
}

