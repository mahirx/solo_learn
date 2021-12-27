#include <iostream>
using namespace std;


void printNumber(int a) { 
  cout << a << endl;
}


void printNumber(float a) { 
  cout << a << endl;
}


int main(int argc, char const *argv[])
{
	float b = 12.5;
	printNumber(8);
	printNumber(b);
	return 0;
}