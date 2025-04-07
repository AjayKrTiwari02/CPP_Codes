#include <iostream>
using namespace std;

class Room
{
	private :
		double length , breadth , height;
		
	public :
		void dataInput(double len , double br , double he)
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
	
	return 0;
}
