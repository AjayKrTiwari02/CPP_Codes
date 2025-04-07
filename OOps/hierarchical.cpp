//hierarchical inheritance
#include <iostream>
#include<string>// for string library

using namespace std;

class Mobile
{
	public:
		string name;
		string brand;
		int model;
		string color;
		
		void calling()
		{
			cout<<"Mobile gives the feature of calling facilities..."<<endl;		
		}
		
		void sendSms()
		{
			cout<<"In mobile you can send sms very easily & fast... "<<endl;
		}
};

class Samsung : public Mobile
{
	public:
		void setName(string name1)
		{
			this->name=name1;	
		}
		
		void setBrand(string brand1)
		{
			this->brand=brand1;	
		}
		
		void setModel(int model1)
		{
			this->model=model1;	
		}
		
		void setColor(string color1)
		{
			this->color=color1;	
		}	
		void display1()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Brand:"<<brand<<endl;
			cout<<"Model number:"<<model<<endl;
			cout<<"Colour:"<<color<<endl;
		}
	
};

class Nokia : public Mobile
{
	public:
		void setName(string name2)
		{
			this-> name=name2;	
		}
		
		void setBrand(string brand2)
		{
			this-> brand=brand2;	
		}
		
		void setModel(int model2)
		{
			this-> model=model2;	
		}
		
		void setColor(string color2)
		{
			this->color=color2;	
		}	
		void display2()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Brand:"<<brand<<endl;
			cout<<"ModelNumber:"<<model<<endl;
			cout<<"Colour:"<<color<<endl;
		}
	
	
};

int main()
{

	Samsung s1;
	cout<<("----------:Samsung Class:------------")<<endl;
	s1.setName("Samsung v3");
	s1.setBrand("Samung");
	s1.setModel(13245);
	s1.setColor("black");
	s1.display1();
	s1.calling();
	s1.sendSms();
	cout<<endl;
	cout<<("-------------:Nokia Class:------------")<<endl;
	Nokia n;
	n.setName("Nokia 1100");
	n.setBrand("Nokia");
	n.setModel(11567);
	n.setColor("Red");
	n.display2();
	n.calling();
	n.sendSms();

	

	cout<<endl;
	
	return 0;
}
