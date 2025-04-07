#include <iostream>
using namespace std;
//single inheritance.....

class Employee
{
	public:
		int empno;
		string empname;
		string empdesig;
		
		Employee()
		{
			empno = 111;
			empname = "New Employee";
			empdesig = "Training";	
		}
		
		void acceptEmployee(int no , string name , string desig)
		{
			empno = no;
			empname = name;
			empdesig = 	desig;
		}	
		
		void display()
		{
			cout<<"Employee Name : "<<empname<<endl;
			cout<<"Employee No : "<<empno<<endl;
			cout<<"Employee Designation : "<<empdesig<<endl;
		}
	
	
};

class Salary : public Employee
{
	public:
		double basic;
		
		Salary()
		{
			basic = 0.0;
		}
		
		void acceptSalary(double b)
		{
			basic = b;
		}
		
		void calculate()
		{
			double da = basic * 0.1;
			double hra = basic * 0.15;
			double salary = basic + hra + da;
			double pf = salary * 0.08;
			double netSalary = salary - pf;
			
			display();
			cout<<"Net Salary : "<<netSalary<<endl;
				
		}
	
};


int main()
{
	Salary sal;
	sal.acceptEmployee(12345 , "Amit Kumar Das" , "IT Developer");
	sal.acceptSalary(28600.00);
	sal.calculate(); 
	
	
	return 0;
}
