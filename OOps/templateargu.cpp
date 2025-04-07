#include <iostream>
using namespace std;

template <class T, class U>  //ex:int,string

 class  Abc
 {


public:        //1.T=char,U=float
			   //2.T=int,U=double	
	T x;
	U y;

	Abc( T a,U b ) 
	{ 
		x=a;
		y=b;
	cout << "Constructor Called ,Value:"<<endl;
	
	
	cout<<sizeof(x)<<endl<<"The value of x:"<<x<<endl;
	cout<<sizeof(y)<<endl<<"The value of y:"<<y<<endl;
	cout<<endl<<"\n--------------------------\n"<<endl;
	
	 }

};

int main()
{
	Abc<char, float> a('A',12.22f);  // 1st T=char ,U=float

	Abc<int, double> b(10,123.33);   // 2nd  T=int, U=Double



	return 0;
}

