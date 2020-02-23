#include <iostream>
#include "toBST.h"
#include "bresenham.h"
#include "tidy.h"


node * root;
using namespace std;

//node * root = new node;// the root node to the BST
int rr=10;
#define MINSEP 50
#define YSCALE 30




void setup(struct node *t, int level, int minsep, struct extreme *rmost, struct extreme *lmost)
{
	struct node *l, *r;
	struct extreme lr, ll, rr, rl;

	int cursep, rootsep, loffsum, roffsum;

	if (t == NULL)
	{
		lmost->lev = -1;
		rmost->lev = -1;
	}
	else
	{
		t->ycoord = level;
		l = t->llink;
		r = t->rlink;
		setup(l, minsep, level + 1, &lr, &ll);	// lr, ll etc not set yet?
		setup(r, minsep, level + 1, &rr, &rl);
		if (r == NULL && l == NULL)		// t is a leaf
		{
			rmost->addr = t;
			lmost->addr = t;
			rmost->lev = level;
			lmost->lev = level;
			rmost->off = 0;
			lmost->off = 0;
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
				lmost = &rl;
				lmost->off += t->offset;
			}
			else
			{
				lmost = &ll;
				lmost->off -= t->offset;
			}
			if ((lr.lev > rr.lev) || (t->rlink == NULL))
			{
				rmost = &lr;
				rmost->off -= t->offset;
			}
			else
			{
				rmost = &rr;
				rmost->off += t->offset;
			}

			if (l != NULL && l != t->llink)
			{
				rr.addr->thread = true;
				rr.addr->offset = abs((rr.off + t->offset) - loffsum);
				if (loffsum - t->offset <= rr.off)
					rr.addr->llink = l;
				else
					rr.addr->rlink = l;
			}
			else if (r != NULL && r != t->rlink)
			{
				ll.addr->thread = true;
				ll.addr->offset = abs((ll.off - t->offset) - roffsum);
				if (roffsum + t->offset >= ll.off)
					ll.addr->rlink = r;
				else
					ll.addr->llink = r;
			}
		}
	}
}

void petrify(struct node *t, int xpos)
{
	if (t != NULL)
	{
		t->xcoord = xpos;
		if (t->thread)
		{
			t->thread = false;
			t->rlink = NULL;
			t->llink = NULL;
		}
		petrify(t->llink, xpos - t->offset);
		petrify(t->rlink, xpos + t->offset);
	}
}

void draw_tree(int cx = 0, int cy = 0, node *N = NULL)
{
	if (N == NULL) N = root;
	int dx = N->xcoord;
	int dy = (N->ycoord)*YSCALE-200;
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
		if(N->llink ==NULL && N->rlink==NULL)//if node is a leaf draw a diamond
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

	extreme *rightmost, *leftmost;

	setup (root,0,2,rightmost, leftmost);//Now keeping minsep=2, may have to change later
	petrify(root, 680);
	draw_tree();

}



/*int main()
{


	int n;vector <int> arr(10000000);
	cin>>n;
	cout<<"Enter n";

	cout << "Please enter the array: ";
		for (int i = 0; i < n; ++i) cin >> arr[i];

		root= ArrToBST(arr); // forms a BST
		tidy();

		//t = new tree(arr, n);

	return 0;
}
*/
