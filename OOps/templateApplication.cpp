#include<iostream>

using namespace std;

template <class D>

class Sum
{
	public:
	D a,b,c;
	
	 Sum(D a1 ,D b1)
	{
		a=a1;
		b=b1;	
	}
	void sum()
	{
		c=a+b;
		cout<< "The OutPut is : "<<c<<endl;
	}
	
};



int main()
{
	Sum<int> s(10,20);
	s.sum();
	
	Sum <string> s1("Hello","Buddy");
	s1.sum();
	
	Sum <char> s2('N','W');
	s2.sum();
	
	Sum <double> s3(122.22,154.66);
	s3.sum();
	
	return 0;
}
