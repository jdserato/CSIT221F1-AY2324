#include <iostream>
#include "arraylist.h"
using namespace std;
struct foo {
	int *a;
	char ch, ch2;
	int i;
////	char ch2;
};

int main() {
	cout << "Size of foo: " << sizeof(foo) << endl;
	int *array = (int*) malloc(5 * sizeof(int));
	cout << "Array is " << array << endl;
	int* new_array = (int*) realloc(array, 10*sizeof(int));
	
	ArrayList* list = new ArrayList();
//	cout << "List capacity:" << list->capacity << endl;
	int n;
	char op;
	do {
		cin >> op;
		switch(op) {
			case 'a':
				cin >> n;
				list->add(n);
				break;
			case 'p':
				list->print();
				break;
			case 'r':
				cin >> n;
				list->remove(n);
				break;
			case 'R':
				cin >> n;
				cout << "Removed " << list->removeAll(n) << " stuffs";
				break;
				
		}
	} while (op != 'x');
	list->add(13);
	list->add(7);
	list->add(20);
	list->add(9);
	list->add(35);
	list->print();
	list->add(90);
	list->print();
	cout << "The element 1 is " << list->get(1) << endl;
	cout << "The element 3 is " << list->get(3) << endl;
	cout << "The element 5 is " << list->get(5) << endl;
	cout << "Remove 20; found at " << list->remove(20) << endl;
	list->print();
	cout << "Remove 20; found at " << list->remove(20) << endl;
	list->print();
	return 0;
}
