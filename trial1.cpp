#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>       /* for cos(), sin(), and sqrt() */
#include <GL/glut.h>    /* OpenGL Utility Toolkit header */
#include<iostream>

using namespace std;
void display();
void reshape(int, int);
void bress_line(int x0,int y0,int x1,int y1);
void bress_circle(int x,int y,int r);

void draw_pixel(int x0, int y0) {
	glBegin(GL_POINTS);
	glVertex2f(x0, y0);
	glEnd();
}

void circle_points(int ,int,int,int);

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

        //bress_line( x0, y0, x1,y1);
        bress_circle(x0,y0,r);

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


void bress_line(int x0,int y0,int x1,int y1)
{

    int dx=x1-x0;
    int dy=y1-y0;
    int incx=1,incy=1;

	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;

	if(x1<x0)incx=-1;
	if(y1<y0)incy=-1;


	if(dy<=dx)//slope < |1|
    {
        int d= 2*dy -dx;
        int incrE=2*dy;
        int incNE=2*(dy-dx);
        int x=x0,y=y0;

        draw_pixel(x,y);

        for(int i=0;i<dx;i++)
        {
        //cout<<"hi";
            if(d<=0)
            {
                d+=incrE;
            }

            else
            {
                d+=incNE;
                y+=incy;
            }
            x+=incx;

            draw_pixel(x,y);

        }
    }

    else //slope > 1
    {
        int d= 2*dx-dy;
        int incN=2*dx;
        int incNE=2*(dx-dy);
        int x=x0,y=y0;

        draw_pixel(x,y);
        for(int i=0;i<dy;i++)
        {
            if(d<=0)
            {
                d+=incN;

            }

            else
            {
                d+=incNE;
                x+=incx;
            }

            y+=incy;
            draw_pixel(x,y);
        }


    }
}

void bress_circle(int x0,int y0,int r)
{
    int x=x0;
    int y=y0+r;
    int d=1-r;
    int deltaE=3;
    int deltaSE=-2*r + 5;
    circle_points(x,y,x0,y0);

    while((y-y0)>(x-x0))
    {
        if(d<0)
        {
            d+=deltaE;
            deltaE+=2;
            deltaSE+=2;
        }

        else
        {
            d+=deltaSE;
            deltaE+=2;
            deltaSE+=4;
            y--;
        }
        x++;
        circle_points(x,y,x0,y0);
    }


}

void circle_points(int x,int y,int x0,int y0)
{

    draw_pixel(x,y);
    draw_pixel((2*x0)-x,y);
    draw_pixel(x,(2*y0)-y);
    draw_pixel((2*x0)-x,(2*y0)-y);
   int ny=x0+y-y0;
    int nx=y0+x-x0;
    draw_pixel(ny,nx);
    draw_pixel((2*x0)-ny,nx);
    draw_pixel(ny,(2*y0)-nx);
    draw_pixel((2*x0)-ny,(2*y0)-nx);
}
