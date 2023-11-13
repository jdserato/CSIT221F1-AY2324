#include <iostream>
#include "singlyqueue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Queue* queue = new SinglyQueue();
	char op;
	int num;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'e':
				cin >> num;
				queue->enqueue(num);
				break;
			case 'd':
				cout << "Removed " << queue->dequeue() << endl;
				break;
			case 'f':
				cout << "First: " << queue->first() << endl;
				break;
			case 's':
				cout << "Size: " << queue->size() << endl;
				break;
			case '?':
				cout << "Is Empty? " << queue->isEmpty() << endl;
				break;
			case 'p':
				queue->print();
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while (op != 'x');
	return 0;
}
