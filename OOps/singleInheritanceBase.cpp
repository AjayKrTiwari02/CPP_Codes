#include<iostream>

using namespace std;

class Parent
{
	public:
		
	void one()
	{
		cout<<"I am the parent or super or base class"<<endl;
	}
};

class Child: public Parent
{
	public:
		
	void two()
	{
		cout<<"I am the child or sub or derived class"<<endl;
	}
};

int main()
{
	Child c;
	
	c.one(); //parent
	c.two(); //child
	
	return 0;
}
