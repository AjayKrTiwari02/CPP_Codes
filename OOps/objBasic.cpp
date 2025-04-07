#include<iostream>

using namespace std;

class First
{
	public:
		int a,b;     /// class level param.
	private:
		int c;    //private , can't be called outside of the class 
	public:
	
	int sum()
	{
		c=a+b;
		
		return c;
	}
	void print(int a )
	{
		cout<<"You just entered "<< a<<" number"<<endl;
	}
	First()
	{
		cout<<"I am Constructer , I'll not give you any value"<<endl;
	}
	First(int x , int y)
	{
		int c=x/y;
		cout<<"The division output:"<<c<<endl;
	}
	
		
	
};

int main()
{
	First f;  /// class_name obj
	
	f.a=12;
	f.b=10;
////	cout<<f.c; ///error

//	int a=f.sum();
//	cout<<a;

	cout<<"The Answer is : "<< f.sum()<<endl;
	f.print(6);
	
	cout<<"\n---------------------2ndObject-----------------\n"<<endl;
	
	First F2(12,6);   // 2nd object
	F2.print(12);
	
	
	return 0;
}
