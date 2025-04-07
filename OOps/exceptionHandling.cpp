//Exception Handeled
#include <iostream>
using namespace std;

int main()
{
	int num1 , num2 , result;
	
	cout<<"Enter 1st number : ";
	cin>>num1;
	cout<<"Enter 2nd number : ";
	cin>>num2;
	try
	{
		if(num2 != 0)
		{
			cout<<"Flag1"<<endl;
			result = num1/num2;
			cout<<"Result : "<<result<<endl;
			cout<<"Flag2"<<endl;
		}
		else throw(num2);
	}
	catch(int e)
	{
		cout<<"Flag3"<<endl;
		cout<<"Division by zero is not allowed. "<<e<<endl;
	}

	cout<<"ThankYou..!"<<endl;
	
	return 0;
}



