#include <iostream>
using namespace std;

class Sample
{
	public:
	
	Sample()
	{
		cout<<"I'm constructor ,I''m Called With object"<<endl;
		
	}
	void call()
	{
		cout<<"I'm Function You have to call me with the help of object"<<endl;
	}
		
};


int main()
{	
// classname  obj;

	Sample s;
	
	s.call();

}
