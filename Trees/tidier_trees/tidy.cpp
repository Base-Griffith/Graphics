#include <iostream>
#include "toBST.h"
#include "bresenham.h"
#include "tidy.h"

using namespace std;

//node * root = new node;// the root node to the BST
int rr=1;
#define MINSEP 10
#define YSCALE 8

void setup_tdr(node* root, int level, extreme &rightmost, extreme &leftmost) {
	node* left;
	node* right;
	extreme LR, LL, RR, RL;
	int CURsep, ROOTsep, LOffsum, ROffsum;
	if (root == NULL) {
		leftmost.level = -1;
		rightmost.level = -1;
	}
	else {
		root->y = level;
		left = root->llink;
		right = root->rlink;
		setup_tdr(left, level +1, LR, LL);       //Position left subtree recursively 
		setup_tdr(right, level +1, RR, RL);	  //Postion right subtree recursively
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
			CURsep = MINSEP;
			ROOTsep = MINSEP;
			LOffsum = 0;
			ROffsum = 0;
			/*Now consider each level  in turn until one subtree is exhausted
			pushing the subtrees apart when neccessary.*/
			while (left != NULL && right != NULL) {
				if (CURsep < MINSEP) {
					ROOTsep = ROOTsep + (MINSEP - CURsep);
					CURsep = MINSEP;
				}
				//Advance left 
				if (left->rlink != NULL) {
					LOffsum = LOffsum + left->offset;
					CURsep = CURsep - left->offset;
					left = left->rlink;
				}
				else {
					LOffsum = LOffsum - left->offset;
					CURsep = CURsep + left->offset;
					left = left->llink;
				}
				//Advance right
				if (right->llink != NULL) {
					ROffsum = ROffsum - right->offset;
					CURsep = CURsep - right->offset;
					right = right->llink;
				}
				else {
					ROffsum = ROffsum + right->offset;
					CURsep = CURsep + right->offset;
					right = right->rlink;
				}
			}
			/*Set the offset in node root and include it in accumulated offsets in right and left*/
			root->offset = (ROOTsep + 1) / 2;
			LOffsum = LOffsum - root->offset;
			ROffsum = ROffsum + root->offset;
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
				(RR.adr)->offset = abs((RR.offset + root->offset) - LOffsum);
				if ((LOffsum - root->offset) <= RR.offset) {
					(RR.adr)->llink = left;
				}
				else {
					(RR.adr)->rlink = left;
				}
			}
			else if (right != NULL && right != root->rlink) {
				(LL.adr)->thread = true;
				(LL.adr)->offset = abs((LL.offset - root->offset) - ROffsum);
				if ((ROffsum + root->offset) >= LL.offset) {
					(LL.adr)->rlink = right;
				}
				else {
					(LL.adr)->llink = right;
				}
			}
		}
	}
}
/*
void setup(struct node *t, int level, int minsep, struct extreme &rmost, struct extreme &lmost)
{
	struct node *l, *r;
	struct extreme lr, ll, rr, rl;

	int cursep, rootsep, loffsum, roffsum;

	if (t == NULL)
	{
		lmost.lev = -1;
		rmost.lev = -1;
	}
	else
	{
		t->ycoord = level;
		l = t->llink;
		r = t->rlink;
		setup(l, minsep, level + 1, lr, ll);	// lr, ll etc not set yet?
		setup(r, minsep, level + 1, rr, rl);
		if (r == NULL && l == NULL)		// t is a leaf
		{
			rmost.addr = t;
			lmost.addr = t;
			rmost.lev = level;
			lmost.lev = level;
			rmost.off = 0;
			lmost.off = 0;
			t->offset = 0;
		}
		else					// t not a leaf
		{
			cursep = minsep;
			rootsep = minsep;
			loffsum = 0;
			roffsum = 0;

			while (l != NULL && r != NULL)
			{
				if (cursep < minsep)	// push
				{
					rootsep += minsep - cursep;
					cursep = minsep;
				}
				// advancing l, r
				if (l->rlink != NULL)
				{
					loffsum += l->offset;
					cursep -= l->offset;
					l = l->rlink;
				}
				else
				{
					loffsum -= l->offset;
					cursep += l->offset;
					l = l->llink;
				}
				if (r->llink != NULL)
				{
					roffsum -= r->offset;
					cursep -= r->offset;
					r = r->llink;
				}
				else
				{
					roffsum += r->offset;
					cursep += r->offset;
					r = r->rlink;
				}
			}

			t->offset = (rootsep + 1) / 2;
			loffsum -= t->offset;
			roffsum += t->offset;

			if ((rl.lev > ll.lev) || (t->llink == NULL))
			{
				lmost = rl;
				lmost.off += t->offset;
			}
			else
			{
				lmost = ll;
				lmost.off -= t->offset;
			}
			if ((lr.lev > rr.lev) || (t->rlink == NULL))
			{
				rmost = lr;
				rmost.off -= t->offset;
			}
			else
			{
				rmost = rr;
				rmost.off += t->offset;
			}

			if (l != NULL && l != t->llink)
			{
				(rr.addr)->thread = true;
				(rr.addr)->offset = abs((rr.off + t->offset) - loffsum);
				if (loffsum - t->offset <= rr.off)
					(rr.addr)->llink = l;
				else
					(rr.addr)->rlink = l;
			}
			else if (r != NULL && r != t->rlink)
			{
				(ll.addr)->thread = true;
				(ll.addr)->offset = abs((ll.off - t->offset) - roffsum);
				if (roffsum + t->offset >= ll.off)
					(ll.addr)->rlink = r;
				else
					(ll.addr)->llink = r;
			}
		}
	}
}
*/
void petrify(struct node *t, int xpos)
{
	if (t != NULL)
	{
		t->x = xpos;
		if (t->thread == true)
		{
			cout << "inside if condition\n";
			t->thread = false;
			t->rlink = NULL;
			t->llink = NULL;
		}
		petrify(t->llink, xpos - t->offset);
		petrify(t->rlink, xpos + t->offset);
		cout << t->x << ' ' << t->y << '\n';
	}
}

void draw_tree(int cx = 0, int cy = 0, node *N = NULL)
{
	if (N == NULL) N = root;
	int dx = N->x;
	int dy = (N->y)*YSCALE-200;
	if (cx == 0 && cy == 0)
	{
		cx = dx;
		cy = dy;
	}

	if (N->llink != NULL) //draw the root -> llink subtree
		draw_tree(dx, dy, N->llink);
	if (N->rlink != NULL) //draw the root -> rlink subtree
		draw_tree(dx, dy, N->rlink);


//////////////////////////////////
		if(N->llink == NULL && N->rlink==NULL)//if node is a leaf draw a diamond
	{
		//cout << "drawing leaf\n";
		bres_line(dx - rr, dy, dx, dy + rr);
		bres_line(dx, dy + rr, dx + rr, dy);
		bres_line(dx + rr, dy, dx,dy- rr);
		bres_line(dx, dy - rr, dx - rr, dy);
	}

	else //if node is not a leaf then draw circle
	{
		bres_circle(dx, dy, rr);
		//cout << "drawing circle\n";
	}

	bres_line(dx, dy, cx, cy);
	//cout << "drawing line to parent\n";
	    //drawing a line from the center of current node to the center of parent node



}

void tidy()
{

	extreme rightmost, leftmost;

	setup_tdr(root,0, rightmost, leftmost);//Now keeping minsep=2, may have to change later
	petrify(root, 680);

	cout << "calling draw tree, thanks\n";
	draw_tree();

}
