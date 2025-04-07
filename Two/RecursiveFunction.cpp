#include <iostream>
using namespace std;

int fact(int n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}

int main()
{	
	int a = 8;
	int x = fact(a);
	
	cout<<"Factorial value : "<<x<<endl;
	cout<<"Factorial of 7 is : "<<fact(7);

	return 0;
}

