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