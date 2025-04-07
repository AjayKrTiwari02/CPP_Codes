#include<iostream>
using namespace std;

int main()
{
	int num1 , num2 , num3;
	cout<<"Please enter the number 1 : " <<endl;
	cin>> num1;
	cout<<"Please enter the number 2 : " <<endl;
	cin>> num2;
	cout<<"Please enter the number 3 : " <<endl;
	cin>> num3;
	int temp;
	
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			temp = num1;
		}
		else
		{
			temp = num3;
		}
	}
	else
	{
		if(num2>num3)
		{
			temp = num2;
		}
		else
		{
			temp = num3;
		}
	}
	
	cout<<"Biggest Number :  " <<temp<<endl;
	
	return 0;
}
