#include "heap.h"
#include "../arraylist.h"
class ArrayHeap : public Heap {
	ArrayList* list;
	public:
	ArrayHeap() {
		list = new ArrayList();
	}
	
	void insert(int num) {
		list->add(num);
		
		int curr_ind = list->_size() - 1;
		while (true) {
			int par_ind = (curr_ind - 1) / 2; // correct
			
			if (num < list->get(par_ind+1)) {
				list->swap(curr_ind, par_ind);
				curr_ind = par_ind;
			} else {
				break;
			}
		}
	}
	
	int removeMin(){
		
	}
	void print() {
		list->print();
	}
};
