#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Cylinder_Programma 
{
    class Cylinder 
    {
        private:
            double radius;
            double height;
        public:
            void set_radius(double r) {radius = r;}
            void set_height(double h) {height = h;}
            double volume() {return height * M_PI * pow(radius, 2.0);}
    };

    public:
        void testRun() 
        {
            Cylinder cylinder1;
            double radius, height;
            cout << "What is the radius of your cylinder: ";
            cin >> radius;
            cout << endl << "What is the height of your cylinder: ";
            cin >> height;
            cylinder1.set_radius(radius);
            cylinder1.set_height(height);
            cout << endl << "The volume of your cylinder is: " << cylinder1.volume();   
        }
};

int main(void) 
{
    Cylinder_Programma start;
    start.testRun();
    return 0;
}