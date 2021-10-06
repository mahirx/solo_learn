#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int _number[100];
	cout << sizeof(_number) / sizeof(_number[0]) << endl;
	return 0;
}