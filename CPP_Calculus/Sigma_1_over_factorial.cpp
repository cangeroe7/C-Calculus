#include <iostream>
#include <cmath>
using namespace std;

class Program581
{
    class Sigma
    {
        private:
            double repetitions;
            double sum{0};
        
        public:
            double get_repetitions() { return repetitions; }
            void set_repetitions() 
            {
                do
                {
                    cout << endl << "Give your value for n: ";
                    cin >> repetitions;
                } while (0 > repetitions || repetitions > 100 || floor(repetitions) != repetitions);
            }

            double factorial(double n)
            {
                double s{1};
                while (n > 0)
                {
                    s *= n--;
                }
                return s;
            }

            double get_sum()
            {
                for (double n{0}; n <= repetitions; n++)
                {
                    sum = sum + 1/factorial(n);
                }
                return sum;
            }
    };
    public:
        void testRun() 
        {
            Sigma sigma_factorial;
            sigma_factorial.set_repetitions();
            cout << endl << "Sigma 1/n! with n: " << sigma_factorial.get_repetitions() << " = " << sigma_factorial.get_sum();
        }
};

int main(void) 
{
    Program581 start;
    start.testRun();
    return 0;
}

