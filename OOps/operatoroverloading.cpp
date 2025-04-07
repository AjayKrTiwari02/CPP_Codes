#include <iostream>
using namespace std;

//operator overloading

class Calculator
{
	public:
	int add(int a , int b)// (+-*/)
	{
		return a+b;
	}	
	string add(string a , string b) //concatination
	{
		return a+b;
	}
	char add(char a , char b) //concatination	
	{
		return a+b;
	}
	double add(double a , double b)//addition
	{
		return a+b;
	}
			
};

int main()
	{
		Calculator cal;
		

		cout<<"Addition : "<<cal.add("welcome to","   Aptech")<<endl;
		cout<<"Addition : "<<cal.add('W','N')<<endl;
		cout<<"Addition : "<<cal.add(14.89,15.55)<<endl;
		cout<<"Addition : "<<cal.add(43 , 78)<<endl;
		
		
		return 0;
	}









