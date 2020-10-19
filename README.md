# homework-3
A homework about practicing object oriented programming

## Context

For this assignment you will practice object oriented programming by using the provided base class `Circle` to create a derived class called `Sphere`. **You do not need to edit circle.hpp and Circle.cpp**, these files are completed. **You will however need to edit main.cpp**. You should take a look at the code for all of these files and try to understand what is going on. 
## Sphere.hpp

To begin creating the new Sphere class I recommend these attributes:

  ```
  A float representing the volume, and a float representing the surface area.
  ```
  
I also recommend these constructors:

  ```
  Sphere()
  Sphere(float radius)
  Sphere(const Sphere &s)
  ```

You should override the `set_radius` method from the `Circle` base class, since volume and surface area are dependent on radius. You should also have methods to update `volume` and `surface area`. These two methods should be similar to `Cube` and `Pyramid` classes in lecture. To learn more about the formulas for a sphere click [here](https://en.wikipedia.org/wiki/Sphere)

Make sure you have getters for `volume` and `surface area`, also **you must make sure that you have a public in heritence from Circle**. Then you must overload the `=` operator and the `<<` operator. These should look similar to `Circle`. As a twist, you must also overload the `*` operator but not for other Circles, but for a float. The prototype should look like this:

  ```
  Sphere operator*(float x)
  ```
  
Lastly, you must create a Makefile to compile your code. **Do not upload your object code (.o files) or executables to your git!!!! Its bad practice and I will take points off your grade!**

## Rubric

|Requirement                                         |Score  |
|  :---:                                             | :---: |
|Completing the header file and prototypes           | 20%   |
|Creation of cpp files and implementation of methods | 30%   |
|Correct implementation of overloading operators     | 20%   |
|Creation of Makefile                                | 20%   |
|Clean and readable code                             | 10%   |
|Total                                               | 100%  |
