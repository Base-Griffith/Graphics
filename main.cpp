#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <GL/glut.h>
#include "toBST.h"
#include "tidy.h"

struct node *root;

void post(struct node *head)
{
	if (!head) return;
	post(head->llink);
	post(head->rlink);
}

void renderScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(2.0);
	display_tree(root, 0, 0);
        glutSwapBuffers();
}

void changeSize(int w, int h) {

	// Set the viewport to be the entire window
	glViewport(0, 0, 1920, 1080);

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset Matrix
	glLoadIdentity();

	gluOrtho2D(-2500, 2420, 740, -340);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
	int n;
	vector <int> arr;
	
	int choice1;
	
	l1:
        cout<<"Enter choice : \n 1.Balanced \n 2.Unbalanced\n";
	cin>>choice1;
	
	if(choice1==1)
	{
	    cout << "Enter n: ";
        cin >> n;
		cout << "Please enter the array: ";
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}

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
