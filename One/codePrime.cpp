
#include<iostream>

using namespace std;

int main()
	{

	int n,m=0,flag=0;


	cout<<"Enter the number to check prime:"<<endl;
	cin>>n;    //7 ,8

		m=n/2; //m=3  ,4  ,4

	for(int i=2;i<=m;i++)
	{
	if(n%i==0)
	{
	cout<<"Number is not prime"<<endl;
	flag=1;
	break;
	}
	}
	if(flag==0)
		cout<<"Number is prime";
	return 0;
 }



