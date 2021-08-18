// Every variable is a memory location, which has its address defined.
// That address can be accessed using the ampersand (&) operator (also called the address-of operator), which denotes an address in memory.





#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int score = 5;
	cout << &score << endl;


	int *ip;  // pointer to an integer
	double *dp;   // pointer to a double
	float *fp;  // pointer to a float
	char *ch;  // pointer to a character

	return 0;
}