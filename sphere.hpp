#include <iostream>


class Sphere {

        private:
                float _radius;
		float _surface_area;
		float _volume;

        public:
                // Constructors
                Sphere();
                Sphere(float radius);
                Sphere(const Sphere &s);

                // Destructor
		~Sphere();

                // Setters
                virtual void set_radius(float radius);
                virtual void calculate_surface_area();
		virtual void calculate_volume();

                // Getters
                float radius() const;
                float surface_area() const;
		float volume() const;

                // Operator overloads
                Sphere &operator=(const Sphere &s);
		Sphere operator*(float x);
                friend std::ostream &operator<<(std::ostream &out, const Sphere &s);
};        
