
#include<iostream>
using namespace std;
  
class Base
{
   int x;
public:
    virtual void fun()=0 ; //syntax of pure virtual function or abstract function...
    void amstrong();
    
    int getX() 
	{ 
	x=10;
	return x;
	 }
};
  
// This class inherits from Base and implements fun()


class Derived: public Base
{
    int y;
public:
    void fun() 
	{ 
		cout << "fun class"<<endl;
	 }
	void amstrong()
	{
		cout<<"I am normal fuction,I am in Child class..!"<<endl;
	}


};
  
int main()
{
    Derived d;
    //d.fun();
    d.amstrong();
    cout<<"Value of X"<<d.getX();
    return 0;
}
