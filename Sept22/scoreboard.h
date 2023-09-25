#include "entry.h"
#include <iostream>
using namespace std;
class Scoreboard {
	entry board[5];
	int size = 0;
	
	public:
	bool add(entry e) {
		int i;
		for (i = size-1; i >= 0; i--) {
			entry* player = &board[i];
			if (player->score < e.score) {
				if (i < 4) {
					board[i+1] = board[i];
				}
			} else {
				break;
			}
		}
		if (i+1 < 5) {
			board[i+1] = e;
		} else {
			return false;
		}
		if (size < 5) {
			size++;
		}
		return true;
	}
	
	void print() {
		for (int i = 0; i < 5; i++) {
			if (i < size) {
				entry* player = &board[i];
				cout << i+1 << ". " << player->name << " (" << player->college << ") - " << player->score << endl;
			} else {
				cout << i+1 << ". (none)" << endl;
			}
		}
	}
};
