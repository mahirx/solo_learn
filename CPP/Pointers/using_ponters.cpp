#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int score = 5;
	int *scorePtr;

	scorePtr = &score;


	cout << *scorePtr << endl;


	*scorePtr = 10;

	cout << score << endl;

	return 0;
}