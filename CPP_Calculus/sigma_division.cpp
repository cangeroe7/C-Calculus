#include <iostream>
using namespace std;

class Sigma_Division 
{
    class Division
    {
        private:
            double numerator;
            double sum{0};
        public:
            double get_n() {return numerator;}
            void set_n()
            {
                cout << "Give your numerator: ";
                cin >> numerator;
            }
            double calculate_sum() {
                for (double i = 1; i < numerator+1; i++)
                {
                    sum += 1/i;
                }
                return sum;
            }
    };
    public:
        void testRun()
        {
            Division split;
            split.set_n();
            cout << "Your numerator is: " << split.get_n();
            cout << endl << "1/i sums to: " << split.calculate_sum();
        }
};

int main(void) {
    Sigma_Division start;
    start.testRun();
    return 0;
}

