///A post order traversal function that sets the distances between the levels of every corresponding pair of subtrees.
///
///An implementation of the *Tidier* algorithm. This function does three tasks at every node **t** during its post order traversal. 
///First it determines how close together the subtrees of **t** can be placed. We store the relative distance rather than the 
///absolute location so that subtrees can be pushed apart easily. Second, it keeps track of nodes that may need to be threaded 
///later; and third, it inserts a thread if one is required.
///
///@param t It is the pointer to the head of the subtree on which setup is being called.
///@param level It is the level in which the node pointed to by **t** is present.
///@param rmost This variable is passed by referance and the function **setup** 
///stores the address and details of the rightmost node on the lowest level of the subtree headed by **t**.
///@param lmost This variable is passed by referance and the function **setup** 
///stores the address and details of the leftmost node on the lowest level of the subtree headed by **t**.
///
///Click here to go back to the page with the list of functions >> @ref Functions
void setup(struct node *t, int level, struct extreme &rmost, struct extreme &lmost);
///Computes the final position of each node.
///
///A preorder traversal function that converts the relative positions given by setup() into absolute coordintes.
///@param t It is the pointer to the head of the subtree on which setup is being called.
///@param xpos It the is the x coordinate of the head of the tree.
///
///Click here to go back to the page with the list of functions >> @ref Functions
void petrify(struct node *t, int xpos);
///Draws the tree.
///
///For each node, the function draws a circle and also draws a line to the parent node's center. Then the function is recursively
///called to cover all the nodes.
///
///@param root It is the pointer to the current node.
///@param parx It is the x coordinate of the parent of root.
///@param pary It is the y coordinate of the parent of root.
///@param isRainbow Acts as a flag if a user wants a multi-coloured tree.
///
///Click here to go back to the page with the list of functions >> @ref Functions
void display_tree(struct node *root, int parx, int pary,int isRainbow);
