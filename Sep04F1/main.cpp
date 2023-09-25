#include <iostream>
#include "rectangle.h"
using namespace std;

int main(int argc, char** argv) {
	point p1, p2;
	Rectangle rec;
	cout << "Size of point is " << sizeof(Point) << endl;
	cout << "Enter coordinates for point 1: ";
	cin >> p1.x >> p1.y;
	cout << "Enter coordinates for point 2: ";
	cin >> p2.x >> p2.y;
	rec.p1 = p1;
	rec.p2 = p2;
	Rectangle* pares = rec.twin();
//	Point mid = p2.midpoint(&p2);
	cout << "Orig Point 1 is " << rec.p1.x << ", " << rec.p1.y << endl;
	cout << "Orig Point 2 is " << rec.p2.x << ", " << rec.p2.y << endl;
	cout << "Twin Point 1 is " << pares->p1.x << ", " << pares->p1.y << endl;
	cout << "Twin Point 2 is " << pares->p2.x << ", " << pares->p2.y << endl;
	free(pares);
//	delete pares;
	cout << "Twin Point 1 is " << pares->p1.x << ", " << pares->p1.y << endl;
	cout << "Twin Point 2 is " << pares->p2.x << ", " << pares->p2.y << endl;
	free(pares);
//	cout << "Midpoint is (" << mid.x << "," << mid.y << ")" << endl;
	return 0;
}
