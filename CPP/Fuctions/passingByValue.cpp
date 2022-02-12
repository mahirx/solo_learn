#include <iostream>
using namespace std;



void myFunc(int x){
	x = 200;
}


int main(int argc, char const *argv[])
{
	int var = 20;
	myFunc(var);
	cout << var;
	return 0;
}