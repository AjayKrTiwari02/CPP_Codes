#include<iostream>

using namespace std;

int main()
{	
	int a[]={1,2,3,4,5,6};
	int n;
	
	cout<<"Enter the index of the Number You want :"<<endl;
	
	cin>> n;
	
	try
	{
		if(n<6)
		{
			cout<<"The Value is "<< a[n]<<endl;
		}
		else(throw n);
	}
	catch (int e )
	{
		cout<<"The number you just entered is out of range "<<e<<endl;
	}
	
	return 0;
 } 
