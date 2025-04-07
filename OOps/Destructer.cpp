#include<iostream>

using namespace std;

class Salary
{
	public:
		 int basic, leave, oneDaySalary,workingDays,total_salary;
		
		Salary()
		{
			cout<<"Construtor calling..."<<endl;
			basic=0;
			leave=0;
			oneDaySalary=0;
			workingDays=0;
			total_salary=0;
		}
		void getInfo()	
		{
			cout<<"Enter Your Basic Salary:\n"<<endl;
			cin>>basic;
			cout<<"Enter Your leave:\n"<<endl;
			cin>>leave;
			
			oneDaySalary=basic/30;
			workingDays=30-leave;
			total_salary=workingDays*oneDaySalary;
			
			cout<<"The total salary is:"<<total_salary<<endl;
			
		}
		
		~Salary()						//destructor...
		{
			cout<<endl;
			cout<<"Object Destroyed...";
		}
};

int main()
{
	Salary ob;
	
	ob.getInfo();  //pass object as arguments..
	
	return 0;
		
}



