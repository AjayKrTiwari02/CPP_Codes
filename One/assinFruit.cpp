#include<iostream>
using namespace std;


class Apples
{
	public:
		int A=12;
   		void num()
   		{
   		cout<<"Total number of Apple are:"<<A<<endl;
   		}	
};

class Mangoes
{
	public:
		int M=15;	
		void num1()
		{
			cout<<"Total number of Mangoes are:"<<M<<endl;
		}
	
};
class Fruit: public Apples,public Mangoes
{
	public:
		
			int T;
		void calculate()
			{
				T=A+M;
				cout<<"Total number of Fruits are:"<<T<<endl;
				
			}
				
};


int main()
{
	Fruit f;
	f.Apples::num();
	f.Mangoes::num1();
	f.calculate();

}
