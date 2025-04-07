#include<iostream>	
using namespace std;
int main()
{
	
	
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i>j)
			{
				cout<<" * ";
			}
			else
			{
				cout<<" "<<i<<" ";
			}
		}
		cout<<endl<<endl;
	}
		
	return 0;
}
