#include<iostream>

using namespace std;

class Fun
{
	public:
		Fun()
		{
			cout<<"I am constructor you don't have to call me"<<endl;
		}
		void fun()
		{
			cout<<"I am function(fun) you, have to call me"<<endl;
		}
		
		int abc()
		{
			int a=10,b=20;
			int c =a*b;
			cout<<"I am function(abc) you also have to call me"<<endl;
			return c;
		}
		
	
};

int main()
{ 	
	Fun fn;

	fn.fun();
	
	cout<<"The Answer of last function"<<fn.abc();
	return 0;
}
