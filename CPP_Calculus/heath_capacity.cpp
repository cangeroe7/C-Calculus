#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double C15{4.1855};
const double C1{996185E-6};
const double C2{2874E-7};
const double C3{11160E-6};

class Program711
{
    class Heathcapacity
    {
        private:
            int temp, lowest_temp;

        public:
            void set_temp(int t) { temp = t; }
            void set_lowest_temp(int temp) { lowest_temp = temp; }
            int get_temp() { return temp; }
            int get_lowest_temp() { return lowest_temp; }

            double heathcapacity()
            {
                return C15*(C1 + C2 * pow((temp + 100.0)/100.0, 5.26) + C3*pow(10.0, -0.036 * temp));
            }
            void lowest_hc() 
            {
                double lowest, result;
                lowest = heathcapacity();
                for (int temp = 1; temp <= 100; temp++) 
                {
                    set_temp(temp);
                    result = heathcapacity();
                    if (result < lowest)
                    {
                        lowest = result;
                        set_lowest_temp(get_temp());
                    }
                }
            }
    };
    public:
        void testRun() 
        {
            Heathcapacity hc;
            hc.set_temp(0);
            hc.lowest_hc();

            cout << endl << "Lowest hc value Temperature = " << hc.get_lowest_temp() << " degrees C ";
            cout << endl << "\nPress a key to continue ";
            cin.get();
            cout << setprecision (5);
            cout << endl << "\nOverview HEATH CAPACITY WATER f(T)\n";
            cout << endl << setw(10) << "Temperature" << setw(20);
            cout << "Heath Capacity H2O\n";
            for (int temp = 0; temp <= 100; temp += 5 )
            {
                hc.set_temp(temp);
                cout << endl << setw(7) << temp;
                cout << setw(20) << hc.heathcapacity();
            }
        }
};

int main(void) 
{
    Program711 start;
    start.testRun();
    return 0;
}