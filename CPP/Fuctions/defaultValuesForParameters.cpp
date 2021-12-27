#include <iostream>
using namespace std;


int sum(int a, int b=42) {
  int result = a + b;
  return (result);
}


int main(int argc, char const *argv[])
{
	int x=24;
	int y=36;


	//calling the fucntion with both parameters
	cout << sum(x,y) << endl;


	//calling the function without b
	cout << sum(x) << endl;
	return 0;
}