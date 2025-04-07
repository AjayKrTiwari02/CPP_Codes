#include<iostream>

using namespace std;

class Calculator 
{
private: 
 int number1, number2, tot;
public:
	
 Calculator()
 {
 number1 = number2 = tot =10; 
 cout << "Constructor invoked:\t" <<number1<< endl; 
}
}; 
int main()
{
Calculator cal;

return 0;	
}
