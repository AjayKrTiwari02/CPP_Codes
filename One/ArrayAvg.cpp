#include<iostream>

using namespace std;

int main()
{
	cout<<"Enter the Size of the array..:"<<endl;
	
	int s ;
	
	cin >>s;
	
	int a[s];
	
	cout<<"Enter the eliments of the array"<<endl;
	
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
	}
	
	int sum=0;
	
	for(int i=0;i<s;i++)
	{
		sum=sum+a[i];
	}
	cout<<"The Sum of the array elements is:"<<sum<<endl;
	
	double avg=(double)sum/(double)s;
	
	cout<<"The Avg. of the Values is:"<<avg;
	
	return 0;
}
