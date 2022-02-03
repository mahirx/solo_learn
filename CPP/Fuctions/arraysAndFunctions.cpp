// Remember to specify the array's name without square brackets when passing it as an argument to a function.

#include <iostream>
using namespace std;


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}


int main(int argc, char const *argv[])
{
	int myArr[3] = {32, 42, 99};
	printArray(myArr, 3);
	return 0;
}


