#include "list.h"
#include <iostream>
#include "node.h"
using namespace std;

class LinkedList : public List {
	node *head, *tail;
	int size;
	
public:
	void addFirst(int num) {
		// STEP 1: Create node
		node* n = (node*) malloc( sizeof(node) );
		cout << "n's address is " << n << endl;
		n->elem = num;
		// STEP 2: Set n's next to head
		n->next = head;
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
		cout << "n's address is " << n << endl;
		n->elem = num;
		n->next = nullptr;
		// STEP 2: If tail...
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
		while (curr) {
			cout << curr->elem << "->";
//			cout << curr->elem << " @" << curr << endl;
			curr = curr->next;
		}
		cout << endl;
	}
};
