#include<iostream>
using namespace std;

class Marks
{
	public:
		int num;
		string name;
		int roll;
		int marks;
		int Numstudent()
		{
			for(int i=1;i==num;i++)
			{
			
			 cout<<"Enter the number of student:";
			 cin>>num<<endl;
			 cout<<"Enter the roll number:";
			 cin>>name<<endl;
			}
		}
	
};
class physics : public Marks
{
	public:	
	int p;
	void phy()
	{
	cout<<"Enter the number of physics:\n"	;
	cin>> p<<endl;
		
	}
	
};
class chemistry : public Marks
{
	public:
	 
	int c;
	void chem()
	{
	cout<<"Enter the number of chemistry:\n"	;
	cin>> c<<endl;		
	}
	
};
clas mathematics  :public Marks
{
	public:
	int m;
	void math()
	{
	cout<<"Enter the number of Mathematics:\n"	;
	cin>> m<<endl;	
	}
};
int main()
{
	Marks M;
	M.Numstudend;
	M.chemistry::chem;
	M.physics::phy;
	M.mathematics::math;
	
	
	return 0;
	
	
}

