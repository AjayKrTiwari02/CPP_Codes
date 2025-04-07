#include<iostream>

using namespace std;

class Room     	//always define class name in upper case...
{
public:
	double len,brd,hg;  // variable (length,breadth,height)
	
	double calculate_area()  //function declaration...
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
     //<class name> <object name> 	
		Room rm;
		rm.hg=19.76;
		rm.len=33.33; //variable initialization with the help of object..
		rm.brd=28.62;
		
		cout<<" area of the room:"<<rm.calculate_area()<<endl;
		cout<<" area of the room:"<<rm.calculate_volume()<<endl;//function calling through object..
		
		return 0;
		
}
 
