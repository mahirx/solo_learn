#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int *p = NULL; // Pointer initialized with null
	p = new int[20]; // Request memory
	delete [] p; // Delete array ponted to by p
	
	return 0;
}