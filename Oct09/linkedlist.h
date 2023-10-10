#include "list.h"
#include <iostream>
#include "node.h"
using namespace std;

class DoublyLL : public List {
	node *head, *tail;
	int size;
	
	void addBetween(int num, node* pred, node* succ) {
		node* n = (node*) malloc( sizeof(node) );
		n->elem = num;
		n->next = succ;
		n->prev = pred;
		pred->next = n;
		succ->prev = n;
		size++;
	}
	// 1. Implement removeNode with only ONE parameter
	void removeNode(node* n) {
		node* pred = n->prev;
		node* succ = n->next;
		
		pred->next = succ;
		succ->prev = pred;
		
		free(n);
		size--;
	}
	// 2. Revise the remove(int num) using removeNode()
	// Params: num - element to be removed
	// Returns the position where it was found
	//         -1 if not found
	// Consider remove(0) and sentinels have 0 as elem
	// Time remaining 00:00
	
public:
	DoublyLL() {
		cout <<"HI" << endl;
		head = (node*) calloc(1, sizeof(node));
		tail = (node*) calloc(1, sizeof(node));
		head->next = tail;
		tail->prev = head;
		size = 0;
	}
	
	void addFirst(int num) {
		addBetween(num, head, head->next);
	}
	
	void addLast(int num) {
		addBetween(num, tail->prev, tail);
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
		node* curr = head->next;
		int pos = 1;
		while (curr != tail) {
			if (curr->elem == num) {
				removeNode(curr);
				return pos;
			}
			curr = curr->next;
			pos++;
		}
		return -1;
	}
	
	void addAt(int num, int pos) {
		// Step 2: Iterate curr
		node* curr = head->next;
		int ctr = 1;
		while (ctr < pos && curr != tail) {
			curr = curr->next;
			ctr++;
		}
		// Step 3: Identify
		addBetween(num, curr->prev, curr);
	}
	
	void print() {
		cout << "Size: " << size << endl;
		node* curr = head->next;
		cout << "From HEAD: ";
		while (curr != tail) {
			cout << curr->elem << "->";
			curr = curr->next;
		}
		curr = tail->prev;
		cout << endl << "From TAIL: ";
		while (curr != head) {
			cout << curr->elem << "<-";
			curr = curr->prev;
		}
		cout << endl;
	}
};
