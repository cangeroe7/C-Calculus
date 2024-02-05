#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14;

class Sphere_Program {
    class Sphere {
        private: 
            double radius;
        
        public: 
            double area() 
            {
                return 4.0 * PI * pow( radius, 2.0 );
            }
            double volume() 
            {
                return (4.0/3.0) * M_PI * pow( radius, 2.0);
            }
        Sphere (double r) : radius(r) {};
    };

    public: 
        void testRun() {
            double radius;
            std::cout << "\nGive the radius of the sphere: ";
            std::cin >> radius;

            Sphere sphere1 = Sphere(radius);
            std::cout << "\nThe Area of your sphere = " << sphere1.area() << "\nThe volume of your sphere = " << sphere1.volume() << std::endl; 
        }
};

int main(void) 
{
    Sphere_Program start;
    start.testRun();
    return 0;
}