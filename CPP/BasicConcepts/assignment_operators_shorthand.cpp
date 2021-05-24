#include <iostream>
using namespace std;



int main(int argc, char const *argv[]) {
    int x;

    x=10;
    x += 5;//x=x+5;
    cout << x << '\n';

    x=10;
    x -= 5;//x=x-5;
    cout << x << '\n';

    x=10;
    x *= 5;//x=x*5;
    cout << x << '\n';


    x=10;
    x /= 5;//x=x/5;
    cout << x << '\n';

    x=10;
    x %= 4;//x=x%4;
    cout << x << '\n';
    return 0;
}
