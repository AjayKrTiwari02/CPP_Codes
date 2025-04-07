#include <iostream>
using namespace std;

int fact(int n) //1.function defination//n=a
{
	if(n <= 1)//3.n assigned wint value of a
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);//5*4*3*2=120
	}//4.output of the process/function...
}

int main()
{	
	int a ;
	cout<<"Enter the number :"<<endl;
	cin>>a;//2.scanning
	int x = fact(a);//5.value of process 
	
	cout<<"Factorial value : "<<x;//6.display

	return 0;
}
