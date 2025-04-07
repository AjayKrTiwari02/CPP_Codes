//Class Template...
#include <iostream>
using namespace std;

template <class X>    //class=type name

class Demo
{
	private :
		X num1 , num2;   //ex:int num1,num2
		
	public:
		Demo(X n1 , X n2) //1.x=float ;x=int
		{
			num1 = n1;
			num2 = n2;
		}
		
		void check()
		{
			if(num1>num2)
			{
				cout<<num1<<" is the biggest value."<<num1<<endl;
			}
			else
			{
				cout<<num2<<" is the biggest value."<<endl;
			}
		}
	
};

int main()
{
	Demo <float> demo1(23.87 , 56.87);
	demo1.check();
	
	Demo <int> demo2(67 , 11);
	demo2.check();
	
	Demo <char> demo3('A' , 'E');
	demo3.check();
	
	return 0;
}
