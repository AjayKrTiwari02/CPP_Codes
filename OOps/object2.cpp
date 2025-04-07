#include <iostream>
using namespace std;

class Room
{
	private :
		double length , breadth , height;   //class pram..
		
	public :
		void dataInput(double len , double br , double he) //local param od dataInput...
		{
			length = len;
			breadth = br;
			height = he;
		}
		
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
	//classname     objname
	
	Room  r1;
	
	
	r1.dataInput(42.56 , 28.76 , 5.87);
	
	cout<<"Area of room : "<< r1.calculateArea() <<endl;
	cout<<"Volume of room : "<< r1.calculateVolume() <<endl;
	cout<<endl;
	
	Room  r2;
	
	r2.dataInput(40.56 , 19.56 , 6.67);
	
	cout<<"Area of room2 : "<< r2.calculateArea() <<endl;
	cout<<"Volume of room2 : "<< r2.calculateVolume() <<endl;
	cout<<endl;
	
	Room r3;
	
	r3.dataInput(11.12 , 20.50 , 8.10);
	
	cout<<"Area of room3 : "<< r3.calculateArea() <<endl;
	cout<<"Volume of room3 : "<< r3.calculateVolume() <<endl;
	return 0;
}
