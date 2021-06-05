#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
	int age = 42;

	switch (age) {
		case 16:
			cout << "To young" << endl;
		case 42:
			cout << "Adult"  << endl;
		case 70:
			cout << "Senior" << endl;
		default:
			cout << "This is the default case" << endl;
	}
	return 0;
}