#include "toBST.h"

struct node *toBST(vector<int> &arr){

	if(arr.size() == 0)
		return NULL;

	if(arr.size() == 1)
		return new node(arr[0]);

	int m = arr.size()/2;
	node *head = new node(arr[m]);

	vector<int> l(arr.begin(),arr.begin()+m);
	vector<int> r(arr.begin()+m+1,arr.end());

	head->llink = toBST(l);
	head->rlink = toBST(r);

	return head;
}

struct node* unbalancedBST(struct node* head, int key) 
{ 
    if(head == NULL)
    	return new node(key); 
     
  
    if(key < head->val) 
        head->llink  = unbalancedBST(head->llink, key); 
    
    else 
        head->rlink = unbalancedBST(head->rlink, key);    

    return head; 
}
