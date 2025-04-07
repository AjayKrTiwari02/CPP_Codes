//call by value..
#include <iostream>
using namespace std;

 	int sum(int , int); //function prototype..
	void display(void); 



int main()
{
	int num1 , num2;
	cout<<"Enter number 1 : "<<endl;
	cin>>num1;
	
	cout<<"Enter number 2 : "<<endl;
	cin>>num2;
	
	cout<<"Display sum : "<<sum(num1 , num2)<<endl;  //agruments
	display();
	cout<<endl;
	cout<<"Display sum : "<<sum(27 , 25)<<endl;

	return 0;
}


int sum(int a , int b)  //parametersised function
{
	int c = a+b;   
	return c;
	
}

void display()
{
	cout<<"Thank you.";
	
}
