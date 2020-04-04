#include <vector>
using namespace std;
///The structure node contains requried data for a node needed to implement the algorithm.
///
///@param llink Contains address of the left child of the node.
///@param rlink Contains address of the right child of the node.
///@param x Stores the x coordinate of the node
///@param y Stores the y coordinate of the node
///@param offset Specifies the horizontal offset between the node and each of its sons
///@param val Value of the key held by the node.
///@param thread Serves as a flag to distinguish between a regular and a temporary pointer
///
///Click here to go back to the page with the list of functions >> @ref Functions
struct node
{
	struct node *llink, *rlink;
	int x, y;	// coordinates of this node
	int offset;		// distance to each son
	int val;
	bool thread;
	node(){}
	///This is the constructor for struct node.
	///
	///It takes **x** as a parameter and initialises val to **x**, llink and rlink to NULL.
	///
	///@param x The value we intended to initialise val with.
	///
	///Click here to go back to the page with the list of functions >> @ref Functions
	node(int x) : val(x), llink(NULL), rlink(NULL) {}
};
///The structure extreme contains data concering extreme descendants.
///
///This struct is helpful in keeping track of the leftmost and rightmost nodes on the lowest
///level of the subtree since only these nodes could ever be threaded. 
///
///@param adr Contains address of extreme node.
///@param offset Offset from root of subtree.
///@param level Level of the extreme node.
///
///Click here to go back to the page with the list of functions >> @ref Functions
struct extreme
{
	struct node *adr;
	int offset;		// offset from root
	int level;		// tree level
};
///Creates a balanced binary search tree based on the number of values present in the vector.
///
///@param arr The vector of integers that is passed.
///@returns Pointer to the head of the binary search tree.
///
///Click here to go back to the page with the list of functions >> @ref Functions
struct node* toBST(vector<int> &arr);
///Creates an unbalanced binary search tree depending upon the values being inserted into it.
///
///@param root Pointer to the head of the binary search tree.
///@param key The key we wish to insert into the binary search tree.
///@returns Pointer to the head of the binary search tree.
///
///Click here to go back to the page with the list of functions >> @ref Functions
struct node *unbalancedBST(struct node *root, int key);
