#include <iostream>

using namespace std;

union employee
{
	int id;
	char gender;
	double salary;   //8 byte

};

int main()
{
	union employee amit , barun;
	amit.id = 105;
	cout<<"Amit Id : "<<amit.id<<endl;
	amit.gender = 'M';
	cout<<"Amit Gender : "<<amit.gender<<endl;
	amit.salary = 7856.87;
	cout<<"Amit salary : "<<amit.salary<<endl;
	
	cout<<"Drawback"<<endl;
	
	barun.id = 107;
	barun.gender = 'M';   //13 bytes 8bytes
	barun.salary = 9878.786;
	
	cout<<"Barun Id : "<<barun.id<<endl;
	cout<<"Barun Gender : "<<barun.gender<<endl;
	cout<<"Barun salary : "<<barun.salary<<endl;
	
	
	return 0;
}
