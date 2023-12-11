#include <iostream>
#include "arrayheap.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Heap* heap = new ArrayHeap();
	char op;
	int n;
	do {
		cout << "Op: ";
		cin >> op;
		switch(op) {
			case 'i':
				cin >> n;
				heap->insert(n);
			case 'p':
				heap->print();
				break;
			case 'r':
				cout << "Removed " << heap->removeMin() << endl;
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while (op != 'x');
	return 0;
}
