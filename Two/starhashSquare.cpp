#include<iostream>	
using namespace std;
int main()
{
		
	int i,j;
	for(i=0;i<5;i++)  //((i<=4)==(i<5))
	{
		for(j=0;j<5;j++)
		{
			if((i==0||i==4)||(j==0||j==4))
			{
				cout<<" * ";
			}
			else
			{
			//	cout<<"   ";
//				cout<<" # ";
				cout<<" "<<i<<" ";
			}
		}
		cout<<endl;
	}
		
	return 0;
}
