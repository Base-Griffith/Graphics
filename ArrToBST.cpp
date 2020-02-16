#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int val;
    node *left;
    node *right;
   	node(int x) : val(x), left(NULL), right(NULL) {}
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

	head->left = ArrToBST(l);
	head->right = ArrToBST(r);

	return head;

}