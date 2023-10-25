#include "stack.h"
#include "arraylist.h"
class ArrayStack : public Stack {
	// FIELD DECLARATION
	ArrayList* list;
	public:
	ArrayStack() {
		list = new ArrayList();
	}
	
	void push(int num) {
		list->insertLast(num);
	}
	int pop() {
		return list->removeLast();
	}
	int top() {
		return list->get(size());
	}
	int size() {
		return list->_size();
	}
	bool isEmpty() {
		return size() == 0;
	}
	void print() {
		list->print();
	}
}; 
