#include <iostream>
#include <stdexcept>
#include "mybintree.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree* tree = new MyBinaryTree();
	node* fifty = tree->addRoot(50);
	try {
		node* forty = tree->addRoot(40);
	} catch (logic_error& e) {
		cout << e.what() << endl;
	}
	node* forty5 = tree->addLeft(fifty, 45); 
	try {
		node* thirty = tree->addLeft(fifty, 30); 
		cout << "noprob" << endl;
	} catch (logic_error& e) {
		cout << e.what() << endl;
	}
	node* forty_1 = tree->addLeft(forty5, 40);
	tree->print();
	return 0;
}
