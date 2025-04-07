#include<iostream>

using namespace std;

class Vehicle
{
	public:
		void company()
		{
			cout<<"BMW\n";
		}
	public:
		void model()
		{
			cout<<"10134cbmw\n";
		}
	public:
		void color()
		{
			cout<<"Red/GREEN/Silver\n";
		}
	public:
		void cost()
		{
			cout<<"Rs. 60000$ to 900000$\n";
		}
	public:
		void oil()
		{
			cout<<"PETROL\n";
		}
	private:
		void piston()
		{
			cout<<"4 piston\n";
		}
	private:
		void manWhoMade()
		{
			cout<<"Markus Librette\n";
		}
};

int main()
{
	
	Vehicle obj;
	obj.company();
	obj.model();
	obj.color();
	obj.cost();
	obj.oil();
//	obj.piston();

}


