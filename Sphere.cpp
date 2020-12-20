#include "sphere.hpp"
#include <cmath>

Sphere::Sphere() : _radius{1}, _surface_area{}, _volume{} {

}

Sphere::Sphere(float radius) : _radius{1} {
        set_radius(radius);
	calculate_surface_area();
	calculate_volume();
}

Sphere::Sphere(const Sphere &s) : _radius{s._radius},
       	_surface_area{s._surface_area},
       	_volume{s._volume} {

}

Sphere::~Sphere() { }

void Sphere::set_radius(float radius) {
        if (radius > 0) {
                _radius = radius;
        }
        calculate_surface_area();
	calculate_volume();
}

void Sphere::calculate_surface_area() {
        _surface_area = 4 * M_PI * (radius() * radius());
}

void Sphere::calculate_volume() {
	_volume = 4/3 * M_PI * (radius() * radius() * radius());
}

float Sphere::radius() const {
        return _radius;
}

float Sphere::surface_area() const {
        return _surface_area;
}

float Sphere::volume() const {
	return _volume;
}

Sphere &Sphere::operator=(const Sphere &s) {
        _radius = s._radius;
        _surface_area = s._surface_area;
	_volume = s._volume;
        return *this;
}

Sphere Sphere::operator*(float x) {
	Sphere n_sphere;
	n_sphere.set_radius(radius() * x);
	return n_sphere;
}

std::ostream &operator<<(std::ostream &out, const Sphere &s) {
        out << s._radius << ' ' << s._surface_area << ' ' << s._volume;
        return out;
}
