// C++ Modifiers
#include <iostream>

using namespace std;

int main()
{
    short int i;
    short unsigned int j; // bit organization
    j = 50000;
    i = j;

    // 0000 1111    short int
    // 1111 0000    short unsigned int

    cout << sizeof(short int) << endl;
    cout << sizeof(short unsigned int) << endl;

    cout << "I value " << i << "J value" << j << endl;

    return 0;
}
