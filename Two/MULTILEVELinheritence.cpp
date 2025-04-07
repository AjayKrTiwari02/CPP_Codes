//multi level inheritance.....

#include <iostream>
using namespace std;


class Data
{
	protected:
		int firstNumber , secoundNumber;
		double result;
		
		void accept()
		{
			cout<<"Enter 1st number : \n";
			cin>>firstNumber;
			
			cout<<"Enter 2nd number : \n";
			cin>>secoundNumber;		
		}
		
		void display()
		{
			cout<<"Result = "<<result<<endl;
		}
};

class Calculator : public Data
{
	protected:
		void add()
		{
			result = firstNumber + secoundNumber;	
		}
		
		void sub()
		{
			result = firstNumber - secoundNumber;	
		}
		
		void multi()
		{
			result = firstNumber * secoundNumber;	
		}
		
		void div()
		{
			result = firstNumber / secoundNumber;	
		}	
	
};

class ScientificCalculator : private Calculator
{
	public :
		void cube(int firstNumber)
		{
			result = firstNumber * firstNumber * firstNumber;
			
		}
		
		void calculatePower(int base , int power)
		{
			result = 1;
			for(int i=1; i<=power ; i++)
			{
				result = result * base;
			}
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
				
				accept();
				switch(choice)
				{
					case 1:
						add();
						break;
						
					case 2:
						sub();
						break;
						
					case 3:
						multi();
						break;
						
					case 4:
						div();
						break;
						
					case 5:
						cube(firstNumber);
						break;
						
					case 6:
						calculatePower(firstNumber , secoundNumber);
						break;
						
					default:
						cout<<"Incorrect Option...\n";
						break;
				}
				display();	
		}
};

int main()
{
	ScientificCalculator scal;
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
				scal.menu();
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
