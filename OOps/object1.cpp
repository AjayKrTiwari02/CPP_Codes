#include <iostream>

using namespace std;

class Room 
{
	public :
		double length , breadth , height; //class level param.
		
	 double calculateArea()
		{
			
			return length * breadth;
			
		}
		
		double calculateVolume()
		{
			return length * breadth * height;
			
		}	
};


int main()
{	
	//syntax:classname    objname
	// Room r1=new Room();	 java 
	
	Room  r1;
	
	r1.height = 19.76;
	r1.length =23.68;           //or a
	r1.breadth = 28.62;
	
	double ans=r1.calculateVolume();
	
	cout<<"Area of room : "<< r1.calculateArea() <<endl;
	cout<<"Volume of room : "<< ans <<endl;
 cout<<"--------------------------------"<<endl;	
	Room  r2;
	
	r2.height = 20.76;
	r2.length = 48.72;//or b
	r2.breadth = 38.72;
	
	cout<<"Area of room2 : "<< r2.calculateArea() <<endl;
	cout<<"Volume of room2 : "<< r2.calculateVolume() <<endl;
	
	return 0;
}
