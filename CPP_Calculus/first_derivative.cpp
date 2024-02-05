#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Program715
{
    class first_derivative
    {
        private:
        double x, h, k;

        public:
        void set_x(const double xx) { x = xx; }
        void set_h(const double hh) { h = hh; }
        void set_k(const double kk) { k = kk; }
        double get_h() const { return h; };

        double fx(const double x) {return 2.0*x*x -2.0*x;}
        double f_prime_x() { return 4.0*x -2.0; }
        double newton_approximation()
        {
            double deltafx = fx(x + k*h) - fx(x);
            double delta2fx = fx(x + 2.0*k*h) -2.0*fx(x + 1.0*k*h) + fx(x);
            double delta3fx = fx(x + 3.0*k*h) - 3.0*fx(x + 2.0*k*h) + 3.0*fx(x + k*h) - fx(x);
            double delta4fx = fx(x + 4.0*k*h) - 4.0*fx(x + 3.0*k*h) + 6.0*fx(x + 2.0*k*h) - 4.0*fx(x + k*h) + fx(x);
            // cout << "1: " <<deltafx << " - 2: " << delta2fx << " - 3: " << delta3fx << " - 4: " << delta4fx << "\n\n";
            return (1.0/h)*(deltafx + (k-0.5)*delta2fx +((3.0*k*k-6.0*k+2.0)/6.0)*delta3fx + ((2.0*k*k*k-9.0*k*k+11.0*k-3.0)/12.0)*delta4fx);
        }
        double error()
        {
            return (( newton_approximation() - f_prime_x())/f_prime_x())*100.0;
        }
    };
    public: 
        void testRun()
        {
            first_derivative derivative;
            double hh{1.0E-1};
            derivative.set_k(1.0);
            derivative.set_x(2.0);
            derivative.set_h(hh);
            cout << "------------------------------------------------------------" << endl;
            cout << setw(5) << "h" << setw(20) << "derived(x)" << setw(25)
            << "estimated.der()" << setw(10) << "% error" << endl;
            for (hh; hh > 1.0E-11;hh/= 10.0)
            {
                derivative.set_h(hh);
                derivative.newton_approximation();
                cout << setprecision(1) << scientific << setw(5)
                << derivative.get_h() << setprecision(8)
                << setw(20) << derivative.f_prime_x() << setw(20)
                << derivative.newton_approximation() << setw(15)
                << setprecision(2) << derivative.error() << endl;
            }
            cout << "------------------------------------------------------------" << endl;
        }
};

int main(void) 
{
    Program715 start;
    start.testRun();
    return 0;
}