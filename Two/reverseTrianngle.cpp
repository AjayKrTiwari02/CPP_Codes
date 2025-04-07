#include<iostream>
using namespace std;

int main()
	{
		int l;
		cout<<"Enter the length pattern:"<<endl;
		cin>>l;
		for(int i=0;i<l;i++)//5
		{
			for (int j=l-1;j>=i;j--)//j==4
			{
				cout<<(" * ");
			}
		cout<<"\n"<<endl;			
		}
		return 0;
	}
	
	
