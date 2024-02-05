#include <iostream>
using namespace std;
const int MAX{20};

class Sigma_Programma 
{
    class Sigma
    {
    private:
        double sum;        
    public:
        void set_sum(double s) { sum = s; }

        double decide_sum() 
        {
            double x[MAX];
            for(int i = 0; i < MAX; i++) 
            {
                cout << "\nGeef een getal: ";
                cout << "x[" << (i+1) << "] = ";
                cin >> x[i];
                sum = sum + x[i];
            }
            return sum;
        }
    };

    public:
        void testRun() 
        {
            Sigma sum;
            sum.set_sum(1000);
            int amount = sum.decide_sum();
            cout << endl << "De som van " << MAX << " getallen wordt: ";
            cout << amount;
        }
};

int main(void)
{
    Sigma_Programma start;
    start.testRun();
    return 0;
}