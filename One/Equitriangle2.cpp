#include<iostream>

using namespace std;

int main()
{
		int n=5;
		int a = n;  //5
		int b = n;   //5
		for(int i=1; i<=n; i++) //5
		{
			for(int j=1; j<n*2; j++) //j<10/j=9
			{
				if(j>=a && j<=b)
				{
					cout<<"*";	   /// add space and will find another triangle
				}
				else
				{
					cout<<" ";
				}
			}
			a--;//5 4 3 2 1
			b++;//5 6 7 8 9
			cout<<endl;
		}
	return 0;
}
