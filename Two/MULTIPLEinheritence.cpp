//multiple inheritance.....
#include <iostream>
using namespace std;


class Parent1  ///base class
{
	public:
		void calculate()
		{
			cout<<"Parent 1 Calculate Called : \n";
		}
		
		int add(int num1 , int num2)
		{
			return (num1 + num2);
		}
		
		int sub(int num1 , int num2)
		{
			return (num1 - num2);
		}
};

class Parent2 						//base class2
{
		public:
		void calculate()
		{
			cout<<"Parent 2 Calculate Called : \n";
		}
		
		int multi(int num1 , int num2)
		{
			return (num1 * num2);
		}
		
		int div(int num1 , int num2)
		{
			return (num1 / num2);
		}
	
};

class Calculator : public Parent1 , public Parent2			 //child class
{
	public :
		int cube(int num1)
		{
			return (num1 * num1 * num1);
		}
		
		int calculatePower(int base , int power)
		{
			int result = 1;
			for(int i=1; i<=power ; i++)
			{
				result = result * base;
			}
			return result;
		}
		
		
		void menu()
		{
			
			cout<<"----------CALCULATION-------------\n";
		
			cout<<"1. ADD\n";
			cout<<"2. SUB\n";
			cout<<"3. MULTI\n";
			cout<<"4. DIV\n";
			cout<<"5. CUBE\n";
			cout<<"6. POWER\n";
			cout<<"---------------------------------\n";
			cout<<"Enter Your Choice : \n";
			int choice;
			cin>>choice;
			
			cout<<"Enter two number : \n";
			
			int num1 , num2;
			cin>>num1;
			cin>>num2;
			
//			calculate(); //ambiguity problem..
			Parent1::calculate();   //scope resolution operator.
			Parent2::calculate();
			switch(choice)
			{
				case 1:
					cout<<"Result of addition is : "<<add(num1 , num2)<<endl;
					break;
					
				case 2:
					cout<<"Result of subtaction is : "<<sub(num1 , num2)<<endl;
					break;
					
				case 3:
					cout<<"Result of multiplication is : "<<multi(num1 , num2)<<endl;
					break;
					
				case 4:
					cout<<"Result of divition is : "<<div(num1 , num2)<<endl;
					break;
					
				case 5:
					cout<<"Result of cube is : "<<cube(num1)<<endl;
					break;
					
				case 6:
					cout<<"Result of power is : "<<calculatePower(num1 , num2)<<endl;
					break;
					
				default:
					cout<<"Incorrect Option...\n";
					break;
			}
		}
};


int main()
{
	Calculator cal;
	int ch = 1;
	while(ch!=0)
	{
		cout<<"Enter 1 to Start Calculator : \n";
		cout<<"Enter 0 to Stop Calculator : \n";
				
		cout<<"Enter Your Choice : \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cal.menu();
				break;
				
			case 0:
				cout<<"Thank You for Using Calculator.\n";
				break;
				
			default:
				cout<<"Invalid Input.\n";
				break;
		}
	}

	
	
	return 0;
}
