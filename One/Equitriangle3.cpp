#include<iostream>

using namespace std;

int main()
{
		int n=5;
		int a = 1;
		int b = n*2-1;
		for(int i=1; i<=n; i++) //n=5
		{
			for(int j=1; j<n*2; j++)// j<10/j<=9
			{
				if(j>=a && j<=b)  //j>=1/j<=9
				{
					cout<<"@";	
				}
				else
				{
					cout<<" ";
				}
			}
			a++;
			b--;
			cout<<endl;
		}
	return 0;
}
