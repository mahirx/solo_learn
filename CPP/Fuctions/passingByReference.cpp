#include <bits/stdc++.h>
using namespace std;


void myFunc(int *x){
	*x = 100;
}


int main(int argc, char const *argv[])
{
	int var = 32;
	myFunc(&var);
	cout << var << endl;
	// printf("%p", &var);
	return 0;
}