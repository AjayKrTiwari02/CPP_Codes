#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0) // even
			{
				cout<<"*";
			}
			else
			{
				cout<<"#";  //i,j
			}
		}
		cout<<endl;
	}
		
	return 0;
}
