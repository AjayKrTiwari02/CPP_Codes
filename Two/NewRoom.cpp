#include<iostream>

using namespace std;

class Room
{
	public:	
		double len,brd,hg;
		
		double calculate_Area()
		{
			return len*brd;	
				
		}
		double calculate_volume()
		{
			
			return len*brd*hg;
		}
};

int main()
{
// classname objectname
		Room rm;
		
		rm.len=20.35;
		rm.brd=15.60;
		rm.hg=30.56;
		
			
			cout<< "Volume of Room:"<<rm.calculate_volume()<<endl;
			cout<< "Volume of Room:"<<rm.calculate_Area()<<endl;
			
			
			
			return 0;
	
}
