#include<iostream>

using namespace std;

int main()
{
	int a[]={10,20,30,40,50};
	int b[6];
	
	cout<<"Value at index:2:"<<a[2]<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Value at index->"<<i<<":"<<a[i]<<endl;
	}
	
	cout<< "Enter the values of B:\n"<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>b[i];
	}
	cout<<"Your values are:"<<endl;
	
	for(int i=0;i<6;i++)
	{
		cout<<"Value at index "<<i<<":"<<b[i]<<endl;
	}
	
	
	
	
	return 0;
}
