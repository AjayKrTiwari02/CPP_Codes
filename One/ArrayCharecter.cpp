// charecter array or String....
#include<iostream>

using namespace std;

int main()
{
	char a[6]={'H','e','l','l','o'};
	char b[10]="India";
	char c[6];
	int i;

	cout<<b[4]<<endl;
	
	cout<<"Enter the name:"<<endl;
	
	for(i=0;i<6;i++)
	{
		cin>>c[i];
	}
	cout<<"--------------------Your array is--------------"<<endl;
	for(i=0;i<6;i++)
	{
	cout<<a[i];

	}
	cout<<endl;
	for(i=0;i<7;i++)
	{
	cout<<b[i]<<"\t";

	}
	cout<<endl;
	for(i=0;i<6;i++)
	{
	cout<<c[i];
	}
	return 0;
}



