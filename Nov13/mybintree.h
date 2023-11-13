#include "bintree.h"
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;
class MyBinaryTree : public BinaryTree {
	node* root;
	int size;
	public:
	MyBinaryTree() {
		root = nullptr;
		size = 0;
	}
	
	node* addRoot(int e) {
		if (!root) {
			node* n = (node*) calloc(1, sizeof(node));
			n->elem = e;
			size++;
			root = n;
			return n;
		}
		throw logic_error("Already has root");
	}
	node* addLeft(node* p, int e) {
		if (!p->left) {
			node* n = (node*) calloc(1, sizeof(node));
			n->elem = e;
			n->parent = p;
			size++;
			p->left = n;
			return n;
		}
		throw logic_error(to_string(p->elem) + " has left child");
	}
	node* addRight(node* p, int e) {
	}
	
	void print() {
		cout << "Size: " << size << endl;
		print(root);
	}
	
	void print(node* n) {
		if (n) {
			cout << n->elem << endl;
			if (n->left) {
			cout << "-L:";
			print(n->left);
			}
			if (n->right) {
			
			cout << endl << "-R:";
			print(n->right);
			}
		}
	}
};
