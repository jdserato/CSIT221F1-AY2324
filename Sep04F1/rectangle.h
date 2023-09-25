#include "point.h"

struct Rectangle {
	Point p1, p2;
	
	Rectangle* twin() {
		Rectangle* another = (Rectangle*) malloc( sizeof(Rectangle) );
//		Rectangle* another = new Rectangle;
		another->p1.x = p1.x;
		another->p1.y = p2.y;
		another->p2.x = p2.x;
		another->p2.y = p1.y;
		
		return another;
	}
};
