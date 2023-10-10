#include <iostream>
#include "linkedlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Size of one node: " << sizeof(node) << endl;
	DoublyLL* list = new DoublyLL();
//	DoublyLL* list = (DoublyLL*) calloc(1, sizeof(DoublyLL));
	char op;
	int num, pos;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'h':
				cin >> num;
				list->addFirst(num);
				break;
			case 't':
				cin >> num;
				list->addLast(num);
				break;
			case '@':
				cin >> num >> pos;
				list->addAt(num, pos);
				break;
			case 'r':
				cin >> num;
				cout << "Removed " << list->remove(num) << endl;
				break;
			case 'F':
				list->removeFirst();
				break;
			case 'T':
				list->removeLast();
				break;
			case 'p':
				list->print();
				break;
			case 'g':
				cin >> num;
				cout << "Pos " << num << " is " << list->get(num) << endl;
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while (op != 'x');
	return 0;
}
