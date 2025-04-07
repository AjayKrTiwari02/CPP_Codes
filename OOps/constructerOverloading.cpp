#include <iostream>
using namespace std;

//Constructor Overloading

class Calculator
{
	public:
		int firstNumber;
		int secoundNumber;
		
		Calculator()
		{
			firstNumber = 12;
			secoundNumber = 13;
		}
		
		Calculator(int firstNumber)
		{
			this->firstNumber = firstNumber;
			secoundNumber = 10;
		}
		
		Calculator(int firstNumber , int secoundNumber)
		{
			this->firstNumber = firstNumber;
			this->secoundNumber = secoundNumber;
		}
		
		void display()
		{
			cout<<"First Number : "<<firstNumber<<endl;
			cout<<"Second Number : "<<secoundNumber<<endl;
		}	
	
	
};


int main()
{
	cout<<"Object 1 \n";
	
	Calculator cal;
	cal.display() ;
	
	cout<<"Object 2 \n";
	
	Calculator cal1(34);
	cal1.display() ;
	
	cout<<"Object 3 \n";
	
	Calculator cal2(71 , 76);
	cal2.display() ;
		
		
	return 0;
}





