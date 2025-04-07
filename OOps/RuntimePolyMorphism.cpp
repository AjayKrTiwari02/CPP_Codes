#include<iostream>

using namespace std;
class Parent
{
	public:
	void call()
	{ 
		cout<<"Call for parent class...";
	}
	
};
class Child :public Parent
{
	public:	
	void call()
	{
		cout<<"The child is called..";
	}
	
};


int main()
{ 
	Parent p;
	
	p.call();

	return 0;
}
