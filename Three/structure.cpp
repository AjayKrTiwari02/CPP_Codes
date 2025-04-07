#include <iostream>
using namespace std;

struct employee
{
	int id;
	char gender;
	double salary;

};

int main()
{
	struct employee amit , barun, sunita;
	amit.id = 105;
	amit.gender = 'M';
	amit.salary = 7856.87;
	
	cout<<"Amit Id : "<<amit.id<<endl;
	cout<<"Amit Gender : "<<amit.gender<<endl;
	cout<<"Amit salary : "<<amit.salary<<endl;
	
	barun.id = 107;
	barun.gender = 'M';
	barun.salary = 9878.786;
	
	cout<<"Barun Id : "<<barun.id<<endl;
	cout<<"Barun Gender : "<<barun.gender<<endl;
	cout<<"Barun salary : "<<barun.salary<<endl;
	
	sunita.id = 109;
	sunita.gender = 'F';
	sunita.salary = 120000.45;
	
	cout<<"sunita Id : "<<sunita.id<<endl;
	cout<<"sunita Gender : "<<sunita.gender<<endl;
	cout<<"sunita salary : "<<sunita.salary<<endl;
	
	
	return 0;
}
