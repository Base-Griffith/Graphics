#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <math.h>
#include "bresenham.h"
using namespace std;

struct point
{
    float x,y;
};

vector <struct point > p;

int degree = -1,radius = 5; // degree of curve  // Radius of anchor points
int currIndex = -1;
bool dragging = FALSE;
void init();
void display();
void reshape(int, int);
void drawBezier();
float B(int n, int i, float t);
int factorial(int n);
void mouseFunc(int button, int state, int x, int y);
void motionFunc(int x, int y);
int checkAnchor(int x, int y);

int main(int argc, char ** argv)
{
	glutInit( &argc,argv);
	init();
	glutMainLoop();
	return 0;
}

void init()
{
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(400,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Bezeir Curve");
    glutDisplayFunc(display);       //Its a display callback
    glutReshapeFunc(reshape);       //callback func to rehape window
    glutMouseFunc(mouseFunc);
    glutMotionFunc(motionFunc);
}

void display()                      //one call to display function is considered one frame
{
    glClear(GL_COLOR_BUFFER_BIT);   //to clear the frame everytime before drawing
    glLoadIdentity();               //clears the transformation Matrix
    glFlush();                      // to display the frame buffer
}

void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);    //changing to projection mode to change projection
    glLoadIdentity();               //clears the transformation Matrix
    gluOrtho2D(-400,400,-400,400);
    glMatrixMode(GL_MODELVIEW);     //coming back to default mode to draw
}


void drawBezier()
{
    int n = degree;
    struct point temp;
    temp.x=0.0;     temp.y=0.0;

    glPointSize(1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i <= n; ++i)
    {
        bres_circle(p[i].x,p[i].y,radius); // To Mark anchor points of the curve
    }

    glBegin(GL_POINTS);
    for(float t=0;t<=1;t+=0.0001)
    {
        temp.x=0.0;
        temp.y=0.0;

        for (int i = 0; i <= n; ++i)
        {
            float multFactor = B(n,i,t);
            temp.x += multFactor*p[i].x;
            temp.y += multFactor*p[i].y;
        }
        glVertex2f(temp.x,temp.y);
    }
    glEnd();
    glFlush();
}

float B(int n, int i, float t)
{
    float nCi = factorial(n) / (factorial(n-i) * factorial(i));
    float value =nCi * pow(1-t,n-i) * pow(t,i);
    return value;
}

int factorial(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++)
      fact *=  i;
    return fact;
}

void mouseFunc(int button, int state, int x, int y)
{
    struct point p1,p2;
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (checkAnchor(x-400,400-y)>=0) )
    {
        currIndex = checkAnchor(x-400,400-y);
        cout<<"Found Anchor "<<x<<","<<y<<endl;
        p1.x = x-400;
        p1.y = 400-y;

        dragging  = (state == GLUT_DOWN );

    }

    else if(button == GLUT_LEFT_BUTTON && state == GLUT_UP && (checkAnchor(x-400,400-y)<0))
    {
        degree ++ ;
        p2.x = x-400;
        p2.y = 400-y;
        p.push_back(point());
        p.back().x=p2.x;
        p.back().y=p2.y;
        glBegin(GL_POINTS);
        glVertex2f(p2.x,p2.y);
        glEnd();
        glFlush();
        drawBezier();
    }

    else if(button == GLUT_RIGHT_BUTTON && state == GLUT_UP && (checkAnchor(x-400,400-y)>=0))
    {
        int index1 = checkAnchor(x-400,400-y);
        p.erase(p.begin() + index1);
        degree--;
        drawBezier();
    }
}

void motionFunc(int x, int y)
{
    if(dragging)
    {
        p[currIndex].x=x-400;
        p[currIndex].y=400-y;
        drawBezier();
    }
}

int checkAnchor(int x, int y)
{
    for (int i = 0; i <= degree ; ++i)
    {
        if( (pow(x-p[i].x,2)+pow(y-p[i].y,2)) <= pow(radius,2)) // check It lies within the circle of anchor
        {
            return i;
            break;
        }
    }
    return -1;
}


