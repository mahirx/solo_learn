#include <iostream>
#include <cstdlib>
using namespace std;

void randomNuber()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << 1 + (rand() % 6) << endl;
		// Use the modulo (%) operator to generate random numbers within a specific range.
		// The example below generates whole numbers within a range of 1 to 6.

	}
}


int main(int argc, char const *argv[])
{
	cout << rand() << endl;
	randomNuber();

	return 0;
}