//Encapsulation using getter & setter method...
#include<iostream>

using namespace std;

class Circle
{
	private:
		float area;
		
	public:
		void setArea(int radius)
		{
			area=3.14*radius*radius;  //Pai.R^2
			
		}
		
		int getArea()
		{
			return area;
		}
	
};

int main()
{
	Circle obj;
	obj.setArea(6);
	cout<<"The area of the Circle is:"<<obj.getArea()<<endl;
	return 0;	
}




