#include <iostream>
#include "arraylist.h"
using namespace std;
int main() {
	List* list = new ArrayList();
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
