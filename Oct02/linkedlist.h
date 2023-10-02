#include "list.h"
#include <iostream>
#include "node.h"
using namespace std;

class DoublyLL : public List {
	node *head, *tail;
	int size;
	
public:
	void addFirst(int num) {
		// STEP 1: Create node
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;
		// STEP 2: Set n's next to head
		n->next = head;
		if (head) {
			head->prev = n;
		}
		// STEP 3: Set head to n
		head = n;
		if (!tail) {
			tail = n;
		}
		// STEP 4: Update size
		size++;
	}
	
	void addLast(int num) {
		// STEP 1: Create the node...
		node* n = new node;
		n->elem = num;
		n->next = nullptr;
		// STEP 2: If tail...
		n->prev = tail;
		if (tail) {
			tail->next = n;
		} else {
			head = n;
		}
		// STEP 3: Set tail to n
		tail = n;
		// STEP 4: Update size
		size++;
	}
	
	void removeFirst() {
		if (size == 0) {
			return;
		}
		head = head->next;
		if (head) {	
			free(head->prev);
			head->prev = nullptr;
		} else {
			free(tail);
			tail = nullptr;
		}
		size--;
	}
	
	void removeLast() {
		if (size == 0) {
			return;
		}
		tail = tail->prev;
		if (tail) {	
			free(tail->next);
			tail->next = nullptr;
		} else {
			free(head);
			head = nullptr;
		}
		size--;
	}
	
	void add(int num) {
		addFirst(num);
	}
	
	int get(int pos) {
		node* curr = head;
		int ctr = 1;
		while (ctr != pos) {
			curr = curr->next;
			ctr++;
		}
		return curr->elem;
	}
	
	int remove(int num) {
		
	}
	
	void print() {
		cout << "Size: " << size << endl;
		node* curr = head;
		cout << "From HEAD: ";
		while (curr) {
			cout << curr->elem << "->";
			curr = curr->next;
		}
		curr = tail;
		cout << endl << "From TAIL: ";
		while (curr) {
			cout << curr->elem << "<-";
			curr = curr->prev;
		}
		cout << endl;
	}
};
