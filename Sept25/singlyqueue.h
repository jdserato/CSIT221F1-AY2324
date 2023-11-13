#include "queue.h"
#include "linkedlist.h"
class SinglyQueue : public Queue {
	LinkedList* list;
	public:
	SinglyQueue() {
		list = new LinkedList();
	}
	void enqueue(int num){
		list->addLast(num);
	}
	int dequeue(){
		return list->removeFirst();
	}
	int first(){
		return list->get(1);
	}
	int size(){
		return list->_size();
	}
	bool isEmpty(){
		return size() == 0;
	}
	void print(){
		list->print();
	}
};
