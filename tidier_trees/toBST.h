#ifndef toBST_h
#define toBST_h
#include<iostream>
#include<vector>
using namespace std;

typedef struct node
{
	struct node *llink, *rlink;
	int xcoord, ycoord;	// coordinates of this node
	int offset;		// distance to each son
	int val;
	bool thread;
	node(){}
	node(int x) : val(x), llink(NULL), rlink(NULL) {}
}node;

node* ArrToBST(vector<int> &arr);
//Takes a sorted array as input


#endif

