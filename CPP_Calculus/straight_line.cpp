#include <iostream>
using namespace std;

class Straight {
    private :
        double slope, intercept;
    
    public :
        void move() {
            intercept -= 5;
        }
        double get_m() const { return slope; }
        double get_b() const { return intercept; }
        Straight(double m, double b);

};

Straight::Straight(double m, double b) { slope = m; intercept = b; }

int main(void) {
    Straight line1(1.2, 4.5);
    line1.move();
    cout << endl << "Line 1 intercepts at: " << line1.get_b();
    cout << " and has a slope of : " << line1.get_m();
    cin.get();
    return 0;
}