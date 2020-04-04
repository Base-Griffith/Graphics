#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <GL/glut.h>
#include "toBST.h"
#include "tidy.h"
#include "bresenham.h"

using namespace std;

#define MINSEP 50
#define SCALE 20
#define RADIUS 10

void setup(node* root, int level, extreme &rightmost, extreme &leftmost) {
	node* left;
	node* right;
	extreme LR, LL, RR, RL;
	int cursep, rootsep, loffsum, roffsum;
	if (root == NULL) {
		leftmost.level = -1;
		rightmost.level = -1;
	}
	else {
		root->y = level;
		left = root->llink;
		right = root->rlink;
		setup(left, level +1, LR, LL);       //Position left subtree recursively 
		setup(right, level +1, RR, RL);	  //Postion right subtree recursively
		if (left == NULL && right == NULL) {
			rightmost.adr = root;
			leftmost.adr = root;
			rightmost.level = level;
			leftmost.level = level;
			rightmost.offset = 0;
			leftmost.offset = 0;
			root->offset = 0;
		}
		else {

			//Set up for subtree pushing. Place roots of subtrees minimum distance apart
			cursep = MINSEP;
			rootsep = MINSEP;
			loffsum = 0;
			roffsum = 0;
			/*Now consider each level  in turn until one subtree is exhausted
			pushing the subtrees apart when neccessary.*/
			while (left != NULL && right != NULL) {
				if (cursep < MINSEP) {
					rootsep = rootsep + (MINSEP - cursep);
					cursep = MINSEP;
				}
				//Advance left 
				if (left->rlink != NULL) {
					loffsum = loffsum + left->offset;
					cursep = cursep - left->offset;
					left = left->rlink;
				}
				else {
					loffsum = loffsum - left->offset;
					cursep = cursep + left->offset;
					left = left->llink;
				}
				//Advance right
				if (right->llink != NULL) {
					roffsum = roffsum - right->offset;
					cursep = cursep - right->offset;
					right = right->llink;
				}
				else {
					roffsum = roffsum + right->offset;
					cursep = cursep + right->offset;
					right = right->rlink;
				}
			}
			/*Set the offset in node root and include it in accumulated offsets in right and left*/
			root->offset = (rootsep + 1) / 2;
			loffsum = loffsum - root->offset;
			roffsum = roffsum + root->offset;
			/*Update extreme descendents information*/
			if (RL.level > LL.level || root->llink == NULL) {
				leftmost = RL;
				leftmost.offset = leftmost.offset + root->offset;
			}
			else {
				leftmost = LL;
				leftmost.offset = leftmost.offset - root->offset;
			}
			if (LR.level > RR.level || root->rlink == NULL) {
				rightmost = LR;
				rightmost.offset = rightmost.offset - root->offset;
			}
			else {
				rightmost = RR;
				rightmost.offset = rightmost.offset + root->offset;
			}
			/*If subtrees of root were of uneven heights,check to see if threadng is necessary
			At most one thread needs to be inserted*/
			if (left != NULL && left != root->llink) {
				(RR.adr)->thread = true;
				(RR.adr)->offset = abs((RR.offset + root->offset) - loffsum);
				if ((loffsum - root->offset) <= RR.offset) {
					(RR.adr)->llink = left;
				}
				else {
					(RR.adr)->rlink = left;
				}
			}
			else if (right != NULL && right != root->rlink) {
				(LL.adr)->thread = true;
				(LL.adr)->offset = abs((LL.offset - root->offset) - roffsum);
				if ((roffsum + root->offset) >= LL.offset) {
					(LL.adr)->rlink = right;
				}
				else {
					(LL.adr)->llink = right;
				}
			}
		}
	}
}

void petrify(struct node *t, int xpos)
{
	if (t != NULL)
	{
		t->x = xpos;
		if (t->thread == true)
		{
			t->thread = false;
			t->rlink = NULL;
			t->llink = NULL;
		}
		petrify(t->llink, xpos - t->offset);
		petrify(t->rlink, xpos + t->offset);
	}
}

void display_tree(struct node *root, int parx, int pary, int isRainbow)
{
	if(isRainbow)
	{
		float r1=(rand()%256);
		float r2=(rand()%256);
		float r3= (rand()%256);
		glColor3f(r1/255.0, r2/255.0, r3/255.0);
	}

	

	int currx = root->x, curry = (root->y)*SCALE - 100;

	if (parx == 0 && pary == 0)
	{
		parx = currx;
		pary = curry;
	}
	if (root->llink != NULL)	
		display_tree(root->llink, currx, curry, isRainbow);
	if (root->rlink != NULL)	
		display_tree(root->rlink, currx, curry, isRainbow);
	
	bres_circle(currx, curry, RADIUS);	
	bres_line(currx, curry, parx, pary);
}
