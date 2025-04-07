#include<iostream>

using namespace std;

int main()
{
	int a[5];
	
	int i;
	
	cout<<"Enter the array"<<endl;
	
	for(i=0;i<5;i++)
	{
	cin>>a[i];
	}
	cout<<"--------------------Your array is--------------"<<endl;
	for(i=0;i<5;i++)
	{
	cout<<a[i]+a[i]<<endl;
	}
	return 0;
}



