#include <iostream>
#include "arraystack.h"
using namespace std;

int main() {
	Stack* stack = new ArrayStack();
	int n;
	char op;
	do {
		cin >> op;
		switch(op) {
			case 'a':
				cin >> n;
				stack->push(n);
				break;
			case 'p':
				stack->print();
				break;
			case 'r':
				cout << "Removed " << stack->pop() << endl;
				break;
			case 't':
				cout << "Top is " << stack->top() << endl;
				break;
			case 's':
				cout << "Size: " << stack->size() << endl;
				break;
			case 'e':
				cout << "IsEmpty? " << stack->isEmpty() << endl;
				break;
				
		}
	} while (op != 'x');
	return 0;
}
