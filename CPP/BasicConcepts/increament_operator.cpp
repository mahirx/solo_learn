#include <iostream>
using namespace std;


int main()
{
    int x = 10;
    int y;
    x++;
    cout << x << endl;
    x++;
    cout << x << endl;


    ++x; // prefix
    x++; // postfix

    x = 5;
    y = ++x;
    // x is 6, y is 6
    //The prefix example increments the value of x, and then assigns it to y.
    // The postfix example assigns the value of x to y, and then increments it.

    cout << "x " << x << "y " << y << endl;

    x = 5;
    y = x++;
    // x is 6, y is 5
    //The postfix example assigns the value of x to y, and then increments it.

    cout << "x " << x << "y " << y << endl;

    return 0;


}