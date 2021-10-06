#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int *p = new int; // request memory
	*p = 5; // store value


	cout << *p << endl; // use value

	delete p; // free up the memory
	
	return 0;
}