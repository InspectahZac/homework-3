#include "circle.hpp"
#include <cmath>

Circle::Circle() : _radius{1}, _area{2 * M_PI} {
	
}

Circle::Circle(float radius) : _radius{1}, _area{2 * M_PI} {
	set_radius(radius);
}

Circle::Circle(const Circle &c) : _radius{c._radius}, _area{c._area} {
	
}

Circle::~Circle() { }

void Circle::set_radius(float radius) {
	if (radius > 0) {
		_radius = radius;
	}
	calculate_area();
}

void Circle::calculate_area() {
	_area = 2 * M_PI * radius();
}

float Circle::radius() const {
	return _radius;
}

float Circle::diameter() const {
	return 2 * radius();
}

float Circle::area() const {
	return _area;
}

Circle &Circle::operator=(const Circle &c) {
	_radius = c._radius;
	_area = c._area;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Circle &c) {
	out << c._radius << ' ' << c._area;
	return out;
}
