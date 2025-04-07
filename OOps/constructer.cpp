#include <iostream>
using namespace std;

class Wall
{
	private :
		double length;
		double height;
		
	public:
		Wall(double len , double hg) //parameterised constructor
		{
			length = len;
			height = hg;	
		}	
		
		double calculation()
		{
			return length * height;
		}
	
	
};

int main()
{
	Wall w1(10.43 , 7.89);
	Wall w2(11.76 , 9.45);
	Wall w3(12.76 , 8.45);
	Wall w4(19.76 , 3.45);
	
	
	cout<<"Area of wall 1 : "<<w1.calculation()<<endl;
	cout<<"Area of wall 2 : "<<w2.calculation()<<endl;
	cout<<"Area of wall 3 : "<<w2.calculation()<<endl;
	cout<<"Area of wall 4 : "<<w2.calculation()<<endl;
	return 0;
}
