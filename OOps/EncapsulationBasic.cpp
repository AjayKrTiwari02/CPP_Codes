// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
	private:
		// data hidden from outside class
		int x;
		
	public:
		// function to set value of
		// variable x
		void set(int a)
		{
			x =a;  
		}
		
		// function to return value of
		// variable x
		int get()
		{
			return x; 
		}
};

// main function
int main()
{
	Encapsulation obj;
	
	obj.set(5);
	
	cout<<"The Output:"<<obj.get();
	return 0;
}

