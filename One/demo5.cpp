#include<iostream>

using namespace std;
class MyClass
{
	int x1,x2,tot;
	public:
		MyClass();
		MyClass(int,int);
		void add();
		void disp();
};
MyClass::MyClass(){
x1=x2=tot=0;
}
MyClass::MyClass(int num1,int num2)
{
	x1=num1;x2=num2;tot=0;
}
void MyClass::add()
{
	tot=x1+x2;
}
void MyClass::disp()
{
	cout<<"Sum"<<tot<<endl;
}
int main()
{
	MyClass cal1;
	MyClass cal2(4,3);
	cal1.add();
	cal1.disp();
	cal2.add();
	cal2.disp();
	

	return 0;
	
}
