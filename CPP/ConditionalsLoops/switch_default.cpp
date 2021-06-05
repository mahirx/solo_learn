#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int age = 25;

	switch(age)
	{
		case 16:
			cout << "To young";
			break;
		case 42:
			cout << "Adult";
			break;
		case 70:
			cout << "Senior";
			break;
		default:
			cout << "This is a default statement";
	}


	return 0;
}