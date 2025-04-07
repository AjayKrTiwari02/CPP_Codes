// An example of implicit conversion
#include <iostream>

using namespace std;

int main()
{
	int x = 10; 
	char y = 'a';

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	
	x = x + y; // 10+97=107

	// x is implicitly converted to float
	
	float z = x + 1.6; //107+1.0=108.6

	cout << "x = " << x << endl //107
		<< "y = " << y << endl  //a
		<< "z = " << z << endl; //108.6

	return 0;
}

