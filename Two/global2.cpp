#include<iostream>
using namespace std;

int x=11; //global

void fun()
{
cout<<"this is fun block"<<endl;
cout<<x<<endl;
}
int main()
{
	int b=20;// local for main block
	fun();
	cout<<"this is main block"<<endl;
	cout<<x<<endl;
	if(1==1)
	{
		cout<<"This is if block"<<endl;
		int c=30;//local for if block
		cout<<c<<endl;
		cout<<x<<endl;
		cout<<b<<endl;
	}
//	cout<<c<<endl;
	
	return 0;
}
