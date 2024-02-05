#include <iostream>
#include <cmath>
using namespace std;

class Factorial_Program 
{
    class Factorial 
    {
        private:
        double num1;
        double num2;

        public:
        void get_values() 
        {
            do
            {
                cout << endl << "Enter your biggest number: ";
                cin >> num1;
                cout << endl << "Enter you smallest number: ";
                cin >> num2;
            } while (num1 <= num2 || num1 > 100 || num2 < 0);
        }

        double calculate_factorial(double num) 
        {
            if (num == 0) return 1;
            double factor{1};
            do
            {
                factor *= num --;
            } while (num > 0);
            return factor;
        }

        double calculate_nr() { return calculate_factorial(num1) / (calculate_factorial(num2) * calculate_factorial(num1 - num2)); }
    };
    
    public:
    void testRun() 
    {
        Factorial factorial;
        factorial.get_values();
        cout << "Your R-N factorial answer: " << factorial.calculate_nr();
    }
};

int main(void) {
    Factorial_Program start;
    start.testRun();
    return 0;
}
