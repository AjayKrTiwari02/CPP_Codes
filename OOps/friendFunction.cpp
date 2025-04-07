 #include <iostream>
using namespace std;

class Calculator    /// c1(a,b),c2(a,b)
{
	int a , b;    // class parameter
	
	//indivisual declaring function..
	friend Calculator sumNumber(Calculator c1 , Calculator c2);
	friend Calculator subNumber(Calculator c1 , Calculator c2);

	
	public:
		void setNumber(int n1 , int n2)  //2 //4
		{
			a = n1;
			b = n2;	
		}
		
		void printNumber()
		{
			cout<<"First Number is : "<<a<<" , Second number is : "<<b<<endl;	
		}	
};

Calculator sumNumber(Calculator c1 , Calculator c2)  //6
{
	Calculator c3;
	c3.setNumber((c1.a + c2.a) , (c1.b + c2.b));
	return c3;
}

Calculator subNumber(Calculator c1 , Calculator c2)//8
{
	Calculator c3;
	c3.setNumber((c1.a - c2.a) , (c1.b - c2.b));
	return c3;
}

int main()
{
	Calculator cal1 , cal2, sum , sub;
	cal1.setNumber(5 , 34);  //1
	cal1.printNumber();
	
	cal2.setNumber(4 , 9);//3
	cal2.printNumber();
	
	
	sum = sumNumber(cal1 , cal2);//5
	sum.printNumber();
	
	sub = subNumber(cal1 , cal2);//7
	sub.printNumber();
	return 0;	
}
