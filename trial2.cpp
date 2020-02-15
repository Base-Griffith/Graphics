#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>       /* for cos(), sin(), and sqrt() */
#include <GL/glut.h>    /* OpenGL Utility Toolkit header */
#include<iostream>
#include "bresenham.h"

using namespace std;
void display();
void reshape(int, int);


int screen_w=glutGet(GLUT_SCREEN_WIDTH)-100;
int screen_h=glutGet(GLUT_SCREEN_HEIGHT)-100;

int x0,y0,x1,y1,r;
int main(int argc, char ** argv)
{

        cin>>x0>>y0>>r;
    glutInit( &argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(screen_w,screen_h);
    glutCreateWindow("Hello world");
    glutDisplayFunc(display);//Its a display callback
    glutReshapeFunc(reshape);//callback func to rehape window
    //glClearColor(0.0,1.0,1.0,0.0);//changing colour by giving R G B values
    glutMainLoop();

}

void display()//one call to display function is considered one frame
{
    glClear(GL_COLOR_BUFFER_BIT);//to clear the frame everytime before drawing
    glLoadIdentity();//clears the transformation Matrix
    //draw

    //glPointSize(10);//changing picel size
   // glBegin(GL_POINTS);//to start specifying vertices/lines/polygons

        //bres_line( x0, y0, x1,y1);
        bres_circle(x0,y0,r);

    //



    glFlush();// to display the frame buffer
}

void reshape(int w, int h)
{
    //setting viewport and projection
    //viewport= area in the window where drawings will be displayed
    glViewport(0,0,(GLsizei)w,(GLsizei)h);

    glMatrixMode(GL_PROJECTION);//changing to projection mode to change projection
    glLoadIdentity();//clears the transformation Matrix
    gluOrtho2D(0,screen_w,0,screen_h);


    glMatrixMode(GL_MODELVIEW);//coming back to default mode to draw


}


