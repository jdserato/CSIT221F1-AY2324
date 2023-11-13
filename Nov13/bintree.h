#include "node.h"
class BinaryTree {
	public:
	virtual node* addRoot(int) = 0;
	virtual node* addLeft(node*, int) = 0;
	virtual node* addRight(node*, int) = 0;
	virtual void print() = 0;
};
