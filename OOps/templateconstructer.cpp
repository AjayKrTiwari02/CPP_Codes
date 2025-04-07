#include <iostream>
using namespace std;

// defining a class template
template <class T> 

class Info 
{
public:
	Info(T A) // constructor of type template
	{
		cout << "\n"<< "A = " << A<< " size of data in bytes:" << sizeof(A);
	} 
}; 


int main()
{

	// passing character value by creating an objects
	Info<char> p('x');

	// passing integer value by creating an object
	Info<int> q(22);

	// passing float value by creating an object
	Info<float> r(2.25);

	return 0;
} 

