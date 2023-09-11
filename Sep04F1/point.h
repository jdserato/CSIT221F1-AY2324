typedef int coord;

typedef struct Point{
	coord x; //4
	coord y; //4
	
	Point midpoint(Point* other) {
		Point midpoint;
		midpoint.x = (other->x + x) / 2;
		midpoint.y = (other->y + y) / 2;
		return midpoint;
	}
} point;
