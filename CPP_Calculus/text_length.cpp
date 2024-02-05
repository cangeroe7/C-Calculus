#include <iostream>
#include <string>
using namespace std;

class Text_Programma 
{
    class Text_Length 
    {
        private:
            int amount;
            string text;

        public:
            string get_text() const {return text;}
            int text_length() 
            {
                cout << endl << "Give a string: ";
                getline(cin, text);
                amount = text.length();
                return amount;
            }
    };

    public:
    void testRun() 
    {
        Text_Length text;
        int length = text.text_length();
        cout << endl << "Your text is: '" << text.get_text() << "', which contains " << length << " characters";
    }
};

int main(void) {
    Text_Programma start;
    start.testRun();
    return 0;
}
