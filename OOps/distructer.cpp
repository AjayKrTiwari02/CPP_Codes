#include <iostream>
using namespace std;

class Salary
{
	public:
		int basic , leave , onedaysalary , workingdays , totalsalary;
		
		Salary()
		{
			cout<<"Constructor calling..."<<endl;
			basic=0;
			leave = 0;
			onedaysalary = 0;
			workingdays = 0;
			totalsalary = 0;
//cout<<"\nadrees of basic:"<<&basic<<endl;//address of variable where'&' pointer
		}	
		
		void getInfo()
		{
			cout<<"Enter your basic salary : \n";
			cin>>basic;
			cout<<"Enter your leave days : \n";
			cin>>leave;
			
			onedaysalary = basic/30;
			workingdays = 30 - leave;
			totalsalary = workingdays * onedaysalary;
			cout<<"Total Salary : "<<totalsalary<<endl;
		}
		
		~Salary()
		{
			cout<<endl;
			cout<<"Thank you for working with Us.."<<endl;
		}
	
	
};

int main()
{
	Salary obj;
	obj.getInfo();

	
	return 0;
}
