//Class Template...
#include <iostream>
using namespace std;

template <class x>

class Demo
{
	public:
		
		x add(x a,x b )
		{
			x c=a+b;			
			return c;
		}
		x mul(x a,x b )
		{
			x c=a*b;			
			return c;
		}	
};

int main()
{
	Demo <float> demo1;
	cout<<"The value is:"<<demo1.add(12.3,3.65)<<endl;
	cout<<"The value is:"<<demo1.mul(12.3,3.65)<<endl<<endl;
	
	cout<<"The 2nd Object output:"<<endl<<endl;
	
	Demo <int> demo2;
	cout<<"The value is:"<<demo2.add(15,18)<<endl;
	cout<<"The value is:"<<demo1.mul(12,9)<<endl;
	
	return 0;
}
