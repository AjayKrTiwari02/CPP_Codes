//single inheritance.....

#include <iostream>
using namespace std;


class Calculator
{
	protected:
		int firstNumber , secondNumber , result;
		
		void add()
		{
			result = firstNumber + secondNumber;
		}
		
		void sub()
		{
			result = firstNumber - secondNumber;
		}
		
		void multi()
		{
			result = firstNumber * secondNumber;
		}
		
		void div()
		{
			result = firstNumber / secondNumber;
		}

		void acceptData()
		{
			cout<<"Enter 1st number : ";
			cin>>firstNumber;
			cout<<"Enter 2nd number : ";
			cin>>secondNumber;
		}
		
		void resultDisplay()
		{
			cout<<"Result : "<<result<<endl;
		}
	
};

class ScientificCalculator :private  Calculator
{
	public:
		void menu()
		{
			cout<<"--------------CALCULATION-----------\n";
			cout<<"1. ADD : \n";
			cout<<"2. SUB : \n";
			cout<<"3. MULTI : \n";
			cout<<"4. DIV : \n";
			
			cout<<"ENTER CHOICE : ";
			int choice;
			cin>>choice;
			
			acceptData();     // 2values scaned
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
					
				default:
					cout<<"Incorrect option...";
					break;
			}
			resultDisplay();
		}	
	
};

int main()
{
	ScientificCalculator sc; //sub class/child

	sc.menu();	
	
	return 0;
}





