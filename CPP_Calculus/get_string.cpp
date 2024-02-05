#include <iostream>
using namespace std;

int main(void) 
{
    const int MAX{256};
    int i{};
    char character, text[MAX];

    cout << "Give text: ";
    while ( cin.get(character), character != '\n') text[i++] = character;
    text[i] = '\0';
    cout  << "Text: " << text << " - bestaat uit " << i << " characters";
    cin.get();
    return 0;
}