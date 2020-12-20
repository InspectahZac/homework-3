#include <iostream>

class Circle {
	protected:
		float _radius;
		float _area;

	public:
		// Constructors
		Circle();
		Circle(float radius);
		Circle(const Circle &c);

		// Destructor
		~Circle();

		// Setters
		virtual void set_radius(float radius);
		virtual void calculate_area();

		// Getters
		float radius() const;
		float diameter() const;
		float area() const;

		// Operator overloads
		Circle &operator=(const Circle &c);

		friend std::ostream &operator<<(std::ostream &out, const Circle &c);
};
