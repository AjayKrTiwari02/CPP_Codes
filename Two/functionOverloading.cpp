#include <iostream>
using namespace std;

//Static polymorphism (compile time polymorphism)

class Calculator
{
	public:
	
	int add(int a , int b)
	{
		return a+b;
	}
	
	float add(float a , float b)
	{
		return a+b;
	}
	
	float add(float a , int b)
	{
		return a+b;
	}
	
	float add(int a , float b)
	{
		return a+b;
	}
	float add(int a , float b,float c)
	{
		return a+b+c;
	}
		
};

int main()
{
	Calculator cal;
	
	cout<<"Addition1 : "<<cal.add(43 , 78)<<endl<<endl;
	cout<<"Addition2 : "<<cal.add(43.45f , 78.21f)<<endl<<endl;
	cout<<"Addition3 : "<<cal.add(43.45f , 43)<<endl<<endl;
	cout<<"Addition4 : "<<cal.add(71 , 78.21f)<<endl<<endl;
	cout<<"Addition5 : "<<cal.add(71 , 78.21f,78.16f)<<endl;
	
	return 0;
}




