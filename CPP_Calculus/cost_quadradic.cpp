#include <iostream>
#include <math.h>
using namespace std;

class Program_6_13_1
{
    class Cost_Quadratic
    {
    private:
        double x;
        double result;

    public:
        void set_x(double value) { x = value; }
        double get_result() { return result; }
        void calculate_result() 
        {
            result = 0.003*pow(x, 3.0) - 13*pow(x, 2.0) + 12300*x + 35;
        }
    };  
    public:
        void testRun() 
        {
            Cost_Quadratic quadratic;
            quadratic.set_x(1000000);
            quadratic.calculate_result();
            cout << "Your result is: " << quadratic.get_result();
        }
};

int main(void) 
{
    Program_6_13_1 start;
    start.testRun();
    return 0;
}

