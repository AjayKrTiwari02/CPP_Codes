#include<iostream>

using namespace std;

class Wall
{
	public:	
		int length,height;
		
		Wall()
		{
			cout<<"Enter the length:"<<endl;
			cin>>length;
			cout<<"Enter the Height:"<<endl;
			cin>>height;
		int area=length*height;
		cout<<"Area of the wall :"<<area<<endl;
			
		}
		int dif()
		{
			int diff=length-height;
			return diff;
		}
        void output()
        {
        	cout<<"Value Calculated"<<endl;
		}
};

int main()
{
// classname objectname
	
		
	Wall w1;
	cout<<"Diff of length & height of 1st wall:"<<w1.dif()<<endl;
	Wall w2;
	cout<<"Diff of length & height of 2nd wall:"<<w2.dif()<<endl;
	w2.output();
	return 0;
	
}
