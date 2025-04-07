#include<iostream>
using namespace std;

int main()
{
	int i,j,num;

	cout<<"Enter the number of terms/no of rows you want:"<<endl;
	cin>>num;

	cout<<endl<<"Your Triangle is :-"<<endl<<endl;

	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
return 0;	
	
}
