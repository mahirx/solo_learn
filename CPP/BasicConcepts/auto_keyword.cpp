#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {
    auto i = 4; // integer
    auto f = 2.77; // float
    auto s = "string"; // string
    auto c = 'L'; // char


    cout << i << '\n' << f << endl << s << endl << c << endl;
    return 0;
}


// keynote: Any variable declared with the auto keyword should be initialized at the time of its declaration or there will be an error.
