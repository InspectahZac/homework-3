
all: main.o Circle.o circle.hpp Sphere.o sphere.hpp
	g++ main.o Circle.o Sphere.o -o test

main.o: main.cpp
	g++ -c main.cpp

Circle.o: Circle.cpp circle.hpp
	g++ -c Circle.cpp

Sphere.o: Sphere.cpp sphere.hpp
	g++ -c Sphere.cpp

clean: 
	rm *.o
	rm test
