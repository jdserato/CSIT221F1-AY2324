#include <iostream>
#include "point.h"
using namespace std;

int main(int argc, char** argv) {
	point p1, p2;
	cout << "Size of point is " << sizeof(Point) << endl;
	cout << "Enter coordinates for point 1: ";
	cin >> p1.x >> p1.y;
	cout << "Enter coordinates for point 2: ";
	cin >> p2.x >> p2.y;
	Point mid = p2.midpoint(&p2);
	cout << "Point 1's x is " << p1.x << endl;
	cout << "Midpoint is (" << mid.x << "," << mid.y << ")" << endl;
	return 0;
}
