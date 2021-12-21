#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(int argc, char const *argv[])
{
	srand(time(0));


	
	cout << time(0) << endl;
	


	for (int i = 1; i <= 10; i++)
	{
		cout << 1 + (rand() % 6)<< endl;
	}
	return 0;
}


// A solution to generate truly random numbers, is to use the current time as a seed value for the srand() function.
// This example makes use of the time() function to get the number of seconds on your system time, and randomly seed the rand() function (we need to include the <ctime> header for it):
// time(0) will return the current second count, prompting the srand() function to set a different seed for the rand() function each time the program runs.