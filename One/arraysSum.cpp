#include<iostream>

using namespace std;

int main()
{
	int first[10],second[10],r,sum[10];
	
	cout<<"Enter the number of terms"<<endl;
	cin>>r;

	cout<<"Enter the values of first array"<<endl;
	
	for(int i=0;i<r;i++)
	{
		cin>>first[i];
	}
	cout<<"Enter the values of second array"<<endl;
	
	for(int i=0;i<r;i++)
	{
		cin>>second[i];
	}
	cout<<"The sum of the arrays :"<<endl;
	for(int i=0;i<r;i++)
	{
		sum[i]=first[i]+second[i];
		cout<<sum[i]<<endl;
	}
		
	return 0;
}
