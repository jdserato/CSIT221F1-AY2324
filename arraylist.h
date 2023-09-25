#include <iostream>
#include <cstdlib>
#include "list.h"
using namespace std;

class ArrayList : public List {
	int* array = (int*) calloc( capacity , sizeof(int) );
	int capacity = 5;
	int size = 0;
	
	int removeOne(int num) {
		for (int i = 0; i < size; i++) {
			if (array[i] == num) {
				for (int j = i+1; j < size; j++) {
					array[j-1] = array[j];
				}
				array[size-1] = 0;
				size--;
				return i+1;
			} 
		}
		return -1;
	}
	
	public:
	ArrayList() {
		capacity = 5;
		array = (int*) calloc( capacity , sizeof(int) );
		cout << "Address of array: " << array << endl;
	}
	
	void add(int num) {
		cout << "Adding " << num << endl;
		if (size >= capacity) {
			capacity *= 1.5;
			cout << "Resizing to " << capacity << endl;
			array = (int*) realloc(array, capacity * sizeof(int) );
			cout << "Address of array: " << array << endl;
		}
		array[size] = num;
		size++;	
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	// capacity *= 1.5; array = (int*) realloc(array, capacity * sizeof(int) );
	// Note that when the number of elements reach 2/3 of the capacity, 
	// you are to reallocate the array by reducing its size by 25%, 
	// Additionally, add the functionality to maintain a minimum 
	// capacity of 5. Write which line number you will add your code after.
	int remove(int num) {
		for (int i = 0; i < size; i++) {
			if (array[i] == num) {
				for (int j = i+1; j < size; j++) {
					array[j-1] = array[j];
				}
				array[size-1] = 0;
				size--;
				if (size <= (2/3.0) * capacity) {
					capacity *= 0.75;
					if (capacity < 5) {
						capacity = 5;
					}
					array = (int*) realloc(array, capacity * sizeof(int) );
				}
				return i+1;
			} 
		}
		return -1;
	}
	
	int removeAll(int num) {
		int ctr = 0;
		while (removeOne(num) != -1) {
			ctr++;
		}
		
				if (size <= 0.6 * capacity) {
					capacity *= 0.8;
					if (capacity < 5) {
						capacity = 5;
					}
					array = (int*) realloc(array, capacity * sizeof(int) );
				}
		return ctr;
	}
	
	// TIME REMAINING: 0:00 MINUTE 
	void print() {
		cout << "Size: " << size << endl;
		for (int i = 0; i < capacity; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
};
