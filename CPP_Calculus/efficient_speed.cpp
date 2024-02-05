#include <iostream>
#include <math.h>
using namespace std;

class Program6132
{
    class Efficiency
    {
        private:
        double best_speed;
        double best_efficiency{INFINITY};
        double calculate_efficiency(double x) { return 4/x + 0.000625*x; }

        public:
        double calculate_best_speed() {
            for (double x{10}; x <= 150; x += 0.1)
            {
                double curr_eff = calculate_efficiency(x);
                if (curr_eff <= best_efficiency) 
                {
                    best_efficiency = curr_eff;
                    best_speed = x;
                }
            }
            return best_speed;
        }
    };

    public:
    void testRun()
    {
        Efficiency efficiency;
        cout << "With function V = 4/x + 0.000625x | the most sustainable speed is: " << efficiency.calculate_best_speed();
    }
};

int main(void) 
{
    Program6132 start;
    start.testRun();
    return 0;
}