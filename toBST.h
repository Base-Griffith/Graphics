#include <vector>
using namespace std;

struct node
{
	struct node *llink, *rlink;
	int x, y;	// coordinates of this node
	int offset;		// distance to each son
	int val;
	bool thread;
	node(){}
	node(int x) : val(x), llink(NULL), rlink(NULL) {}
};

struct extreme
{
	struct node *adr;
	int offset;		// offset from root
	int level;		// tree level
};

struct node* toBST(vector<int> &arr);
struct node *unbalancedBST(struct node *root, int key);
