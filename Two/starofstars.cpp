#include<iostream>	
using namespace std;
int main()
{
		
	int i,j;
	for(i=0;i<=12;i++)
	{
		for(j=0;j<13;j++)
		{
			if((i==6||j==6)||((i+j)==12)||(i==j))
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
