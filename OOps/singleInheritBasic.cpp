#include <iostream>

using namespace std;

class Parent
{
		public:
			
		  int x;       	
		void firstPrint()
		{
			cout<<"The Parent class value:"<<x<<endl;
		}
			
};
class Child:public Parent
{
	public:
	
		int y;
		void secondPrint()
		{
			cout<<"The Child Value:"<<y<<endl;
		}
	
};



int main()
{
	Child c;
	
	c.x=10;
	c.y=20;
	c.firstPrint();
	c.secondPrint();

	return 0;
}
