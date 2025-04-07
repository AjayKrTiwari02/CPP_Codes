// C++ program to demonstrate static
// variables inside a class

#include<iostream>
using namespace std;

class Abc
{
public:
	static int i;
	
	Abc()
	{
		// Do nothing
	}
};

int main()
{
Abc obj1;
Abc obj2;
obj1.i =2;
//obj2.i = 3;
	
// prints value of i
cout << obj1.i<<" "<<obj2.i;
}

