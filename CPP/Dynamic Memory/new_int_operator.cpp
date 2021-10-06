#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int *p = new int;
	*p = 5;

	printf("%d", *p);
	return 0;
}