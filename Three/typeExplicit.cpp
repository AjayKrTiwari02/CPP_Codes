// explicit type casting
#include <iostream>
using namespace std;

int main()
{
	double x = 112.5656;
	char d='T';
	int c=121;


	// Explicit conversion from double to int

	cout << "Type Casted value is: " << (int)x<<endl; //dou->int
	cout << "Type Casted value is: " << (int)d<<endl;// char->int
	cout << "Type Casted value is: " << (char)c<<endl;//int->char


	return 0;
}

