#include<iostream>

using namespace std;

int main()
{
	int a;
	
	string op,h,t;
	
	cout<<"Enter any number"<<endl;
	
	h="Head";
	t="Tail";
	
	cin>>a;
	
	op=(a%2==0)? h : t;
	
	cout<<"The Call is "<<op;
	
	
	return 0;
}
