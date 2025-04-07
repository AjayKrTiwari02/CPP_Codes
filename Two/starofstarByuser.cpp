#include<iostream>	
using namespace std;
int main()
{
		
	int i,j,t ,h;
	
	cout<<"Enter any odd Number of terms:"<<endl;
	cin>>t;
	h=t-1;
	
	for(i=0;i<=h;i++)
	{
		for(j=0;j<t;j++)
		{
			if((i==h/2||j==h/2)||((i+j)==h)||(i==j))
			{				
				cout<<" * ";
			}
			else
			{
				cout<<"   ";
			}
		}
		cout<<endl<<endl;
	}
		
	return 0;
}
