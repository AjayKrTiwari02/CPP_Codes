//Encapsulation
#include<iostream>

using namespace std;


class Company
{
	private:
		int salary;
		
	public:
		void setSalary(int fulltime,int overtime)
		{
			salary=fulltime+overtime;
			
		}
		
		int getSalary()
		{
			return salary;
		}
	
};



int main()
{
	Company obj;
	obj.setSalary(60000,3000);
	cout<<"Total slary is:"<<obj.getSalary()<<endl;
	return 0;	
}




