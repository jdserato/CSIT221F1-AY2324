#include <iostream>
#include "list.h"
using namespace std;

class ArrayList : public List {
	int size = 0;
	int array[5];
	
	public:
	void add(int num) {
		cout << "Adding " << num << endl;
		if (size < 5) {
			array[size] = num;
			size++;	
		} else {
			cout << "PUNO NA" << endl;
		}
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	int remove(int num) {
		for (int i = 0; i < size; i++) {
			// Step 1: Find num
			if (array[i] == num) {
				// Step 2: Move elements to left
				for (int j = i+1; j < size; j++) {
					array[j-1] = array[j];
				}
				// Step 3: Set last to 0
				array[size-1] = 0;
				// Step 4: Decrement size
				size--;
				// Step 5: Return pos
				return i+1;
			} 
		}
		return -1;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
