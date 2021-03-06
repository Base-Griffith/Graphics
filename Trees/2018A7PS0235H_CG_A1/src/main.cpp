#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <GL/glut.h>
#include "toBST.h"
#include "tidy.h"
///Global declaration of the pointer that points to the head of binary search tree.
struct node *root;
int isRainbow=0;
int ptColor= 0;

///A Glut utility function to display the tree.
void renderScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	switch(ptColor)
	{
		case 0:
			break;
		case 1://Violet
			glColor3f(148.0/255.0, 0, 211.0/255.0);
			break;

		case 2://Indigo
		 	glColor3f(75.0/255.0, 0, 130.0/255.0);
			break;

		case 3://Blue
			glColor3f(0.0, 0.0, 1.0);
			break;

		case 4://Green
			glColor3f(0.0, 1.0, 0.0);
			break;

		case 5://Yellow
			glColor3f(1.0, 1.0, 0.0);
			break;

		case 6://Orange
			glColor3f(1.0, 127.0/255.0, 0);
			break;

		case 7://Red
			glColor3f(1.0, 0.0, 0.0);
			break;
	}
	
	//glColor3f(1.0, 1.0, 0.0);
	glPointSize(2.0);
	srand(time(0));
	display_tree(root, 0, 0,isRainbow);
	glutSwapBuffers();
}
///Utility function to change the size of the view port.
///
///@param w Width of the view port.
///@param h Height of the view port.
void changeSize(int w, int h) {

	// Set the viewport to be the entire window
	glViewport(0, 0, 1900, 1060);

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset Matrix
	glLoadIdentity();

	gluOrtho2D(-1900, 1900, 1480, -640);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}
///Main funciton to run the Tidier algorithm and display the tree.
int main(int argc, char **argv)
{
	int n;
	//vector <int> arr;
	
	cout << "*************************************************************\n";
	cout << "*************************************************************\n";
	cout << "*************************************************************\n";
	cout << "*************************************************************\n\n";
	cout << "Welcome to our implementation of the Tilford - Reingold ";
	cout << "Tree Drawing Algorithm.\n\n";
	cout << "A project by\n";
	cout << "Geeth Charan Reddy\n";
	cout << "Keshav Kabra\n";
	cout << "Rupanshu Soi\n\n\n";

	int choice1,ch_rain;
	char ch_color;

	l1:
    cout<<"Enter choice : \n1.Balanced Tree \n2.Unbalanced Tree\n";
	cin>>choice1;

	if(choice1==1)
	{
	    cout << "Enter no. of nodes: ";
        cin >> n;
        vector <int> arr(n);
		root = toBST(arr);
	}

	else if(choice1==2)
	{
	    cout << "Enter n: ";
        cin >> n;
		srand(time(0));
		for (int i = 0; i < n; ++i)
		{
			root = unbalancedBST(root, rand());
		}
	}

        else
        goto l1;

    l2:
    cout<<"Enter color choice : \n1.Single color \n2.Rainbow color\n";
	cin>>ch_rain;

	switch(ch_rain)
	{
		case 1:
			{
				isRainbow=0;

				l3:
				cout<<"Enter Color : \n";
				cout<<"V I B G Y O R \n";
				cin>>ch_color;

				switch(ch_color)
				{
					case 'v':
					case 'V':
						ptColor = 1;
						break;

					case 'i':
					case 'I':
						ptColor = 2;
						break;

					case 'b':
					case 'B':
						ptColor = 3;
						break;

					case 'g':
					case 'G':
						ptColor = 4;
						break;

					case 'y':
					case 'Y':
						ptColor = 5;
						break;

					case 'o':
					case 'O':
						ptColor = 6;
						break;

					case 'r':
					case 'R':
						ptColor = 7;
						break;

					default:
						goto l3;
						break;


				}

				
				break;

			}

		case 2:
			isRainbow=1;
			break;

		default:	goto l2; break;
	}	
	
	struct extreme right, left;

	setup(root, 0, right, left);
	petrify(root, 3);

	// initialising glut
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(10, 10);
	glutInitWindowSize(1900, 1060);
	glutCreateWindow("Tidy Tree Drawing");

	// register callbacks
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);

	// enter GLUT event processing cycle
	glutMainLoop();
}
