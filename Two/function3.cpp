#include <iostream>
using namespace std;

double volume(double r, int h)
{
	return(3.14 * r*r*h);
	
}

int volume(int a=1)   //default a=5
{
	return (a*a*a);
	
}

int volume(int l , int b , int h)
{
	return (l*b*h);
	
}

int main()
{	
	cout<<"The volume of cylinder : "<<volume(3.6 , 6)<<endl;
	cout<<"The volume of cube : "<<volume(7)<<endl;//no value -->default
	cout<<"The volume of rectangle : "<<volume(4 , 6 , 9)<<endl;
	return 0;
}
