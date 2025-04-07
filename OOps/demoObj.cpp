#include<iostream>

using namespace std;

class Car
{
	public:
		
	Car()
	{
		cout<<"Lamborgini is everyones dream car now a days"<<endl;
			
	}
	void display()
	{
		cout<<"Farari is Very expansive car"<<endl;
	}
	void sum(int a, int b)
	{
		
		int c=a+b;
		
		cout<< c<<endl;
	}
};
	int main()
	{
		Car cr;
		cr.display();
		//cout<<"The Summation is"<<cr.sum(20,33)<<endl;
		cr.sum(20,33);
		return 0;
	}

