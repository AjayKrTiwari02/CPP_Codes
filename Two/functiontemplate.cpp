//function template
#include <iostream>
#include <string>
using namespace std;

template <class T>  		//syntax of function template.
T  sum(T a , T b)
{
	cout<<"Addition is : "<<(a+b);
}

int main()
{
	sum(78.98 , 876.00);
	
	return 0;
}
