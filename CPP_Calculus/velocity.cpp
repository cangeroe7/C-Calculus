#include <iostream>
using namespace std;

class Velocity_Program 
{
    class Velocity
    {
        private:
        double initial_velocity;
        double acceleration;
        
        public:
        double get_initial_velocity() {return initial_velocity;}
        double get_acceleration() {return acceleration;}

        void set_values() 
        {
            cout << endl << "Input initial velocity: ";
            cin >> initial_velocity;
            cout <<  "Input acceleration: ";
            cin >> acceleration;
        }
        void calculate_velocities() 
        {
            for(double i = 0; i <= 20; i++)
            {
                double velocity = initial_velocity + i*acceleration;
                cout << endl << "At t = " << i << " seconds, the velocity is " << velocity; 
            }
        }
    };
    public:
    void testRun()
    {
        Velocity speed;
        speed.set_values();
        cout << endl << "An object with an initial velocity of: " << speed.get_initial_velocity() << ", and an acceleration of: " << speed.get_acceleration() << ", speeds up as followed:\n";
        speed.calculate_velocities();
    }
};

int main(void) {
    Velocity_Program start;
    start.testRun();
    return 0;
}
