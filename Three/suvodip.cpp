#include<iostream>

using namespace std;

class Dealer
{
	public:
	char firstName[25];
 	char lastName[25];
 	char phoneNo[11]; 
  
 void display() 
 { 
 	cout << "Name:- "; 
	cout << firstName <<" "<< lastName << endl;  	
	cout << "Phone number:- "; 
	cout << phoneNo << endl; 
 } 
};

class Dealer1 : public Dealer
{ 	
	public:
 	void get1() 
 { 
	 cout << "First name: "; 
	 	cin >> firstName; 
	 cout << endl << "Last Name: "; 
	 	cin >> lastName; 	
	 cout << endl << "Residence phone number: ";
		cin >> phoneNo;
 }
}; 

class Dealer2 : public Dealer
{
 	public: 
 		void get2() 
 { 
	 cout << "First name: "; 
	 	cin >> firstName; 
	 cout << endl << "Last Name: "; 
	 	cin >> lastName; 	
	 cout << endl << "Residence phone number: ";
		cin >> phoneNo;
 }	
};

class Dealer3 : public Dealer
{
	public:
 	void get3() 
 { 
	 cout << "First name: "; 
	 	cin >> firstName; 
	 cout << endl << "Last Name: "; 
	 	cin >> lastName; 	
	 cout << endl << "Residence phone number: ";
		cin >> phoneNo;
 }		
};


int main() 
{
	
Dealer d;
Dealer1 d1;
Dealer2 d2;
Dealer3 d3; 

d1.get1(); 	
d2.get2(); 
d3.get3();
d1.display(); 
d2.display();
d3.display();
 
return 0; 
}
