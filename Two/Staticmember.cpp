#include <iostream>
using namespace std;

class Maneger
{
	int id;
	static int count;
	
	public:
			void setData()
			{
				cout<<"Enter the id : "<<endl;
				cin>>id;
				count++;
			}
			
			void getData()
			{
				cout<<"Display ID : "<<id<<endl;
			}
			
			static void getCount(void)
			{
				cout<<"Display Count : "<<count<<endl;
			}
		
};

//count is the static data member of class Employee.
int Maneger ::count;  //default value is 0..

int main()
{
	Maneger m1 , m2,m3 ;
	m1.setData();
	m1.getData();
	Maneger::getCount();
	
	m2.setData();
	m2.getData();
	Maneger::getCount();
	
	m3.setData();
	m3.getData();
	Maneger::getCount();
	
	
	return 0;
}
