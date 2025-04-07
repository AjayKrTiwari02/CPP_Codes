#include <iostream>

using namespace std;

class Int
{
	
	private:
		int i;
		
		public:
			Int():i(0)
			{
				
			}
			Int(int n):i(n)
			{
				}
				void display(Int obj2,Int obj3,char ch)const
				
			{
				cout<<obj2.i<<ch<<obj3.i<<"="<<i<<endl;
				
			}
			Int operator+(Int)const;
				Int operator-(Int)const;
			
			Int operator*(Int)const;
			Int operator/(Int)const;	
				
};

Int Int::operator+(Int temp)const
{
	int r;
	r=i-temp.i;
	return Int(r);
	
}
Int::operator*(Int temp)const
{
	int r;
	r=i*temp.i;
	return Int(r);
}
Int::operator/(Int temp)const
{
	int r;
	r=i/temp.i;
	return Int(r);
}

int main()
{
	Int first,second(167),third(200);
	
	first=second+third;  first.display(second,third,'+');
	first=second-third;  first.display(second,third,'-');
	first=second*third;  first.display(second,third,'*');
	first=second/third;  first.display(second,third,'/');
	
	sytem("pause");
	
	
}






