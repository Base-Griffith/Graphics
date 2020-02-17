#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
	struct node *llink, *rlink;
	int xcoord, ycoord;	// coordinates of this node
	int offset;		// distance to each son
	int val;
	bool thread;
	node(int x) : val(x), llink(NULL), rlink(NULL) {}
}node;

//Takes a sorted array as input
node* ArrToBST(vector<int> &arr){
	
	if(arr.size() == 0) 
		return NULL;
	
	if(arr.size() == 1)
		return new node(arr[0]);

	int m = arr.size()/2;
	node* head = new node(arr[m]);

	vector<int> l(arr.begin(),arr.begin()+m);
	vector<int> r(arr.begin()+m+1,arr.end());

	head->llink = ArrToBST(l);
	head->rlink = ArrToBST(r);

	return head;

}