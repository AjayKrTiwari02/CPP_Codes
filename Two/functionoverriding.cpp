#include<iostream>

using namespace std;

class Parent
{
	public:
		
		void display()
		{
			cout<<"This is parent class"<<endl;
		}
		void measure()
		{
			cout<<"This is for measurement"<<endl;
		}
		int add(int a, int b)
		{
			int c=a+b;
			return c; 
		}
};
class Child:public Parent
{
	public:
		
		void display()
		{
//			Parent::display();
		
			cout<<"This is child class"<<endl;
			
		}
		int add()
		{
			int a=10;
			int b=20;
			int c=a+b;
			return c;
		}
		
};

int main()
{
	
	Child c;
//	c.Parent::display(); //2
	c.display();
	c.measure();
	cout<<"the addition is"<<c.add()<<endl;
//	cout<<"the addition is"<<c.Parent::add(12,4)<<endl;
	
	
	return 0;
}



//////note :	Parent c= new Child();/////Java Dynamic dispatch
