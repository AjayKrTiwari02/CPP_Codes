//Encapsulation
#include<iostream>
using namespace std;

class Employee
{
	private:
		string name;
		int id;
		int salary;
		
		public:
			void setName(string name)
			{
				this->name=name;   //When we want to Initiate private 
									//variable out side the class
			}
			string getName()
			{
				return name;
			}
			void  setId(int id)
			{
				this->id=id;
			}
			int getId()
			{
				return id;
			}
			void setSalary(int salary)
			{
				this->salary=salary;
			}
			int getSalary()
			{
				return salary;
			}
	
};
int main()
{
	Employee e;
	

	
	e.setName("S.Ray");
	e.setId(786);
	e.setSalary(150000);//always callnthe member function with object or 
							//face out of scope error
	cout<<"Employee Name :"<<e.getName()<<endl;
	cout<<"Employee Id :"<<e.getId()<<endl;
	cout<<"Employee salary :"<<e.getSalary()<<endl;

	
	return 0;
}




