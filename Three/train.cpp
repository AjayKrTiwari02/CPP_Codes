#include<iostream>
#include<string>

using namespace std;

class Train
{
public:
string Tname;//="Rajdhani Express";	
int	Train_number;
string	Source;
string	Destination;
int	day,month,year;
int	 Capacity=2200;


	void JourneyDetails()
	{
		cout<<"Enter Source:"<<endl;
		 getline (cin, Source);
		cout<<"Enter Destination:"<<endl;
		 getline (cin, Destination);
		cout<<"Enter date:(date:month:year):"<<endl;
		cin>>day>>month>>year;
	}
	void TrainDetails()
	{ cout<<"Enter the Train name:"<<endl;
		cin>>Tname;
		cout<<"Enter train number"<<endl;
		cin>>Train_number;
	}
	

	void display()
	{
	cout<<""<<endl;
	cout<<"______________Your Details is as follows:________________"<<endl;
		cout<<"Train name:"<<Tname<<endl;
		cout<<"Train number:"<<Train_number<<endl;
		cout<<"Source:"<<Source<<endl;
		cout<<"Destination:"<<Destination<<endl;
		cout<<"Date of journey:"<<day<<":"<<month<<":"<<year<<endl;
		cout<<"Train capacity:"<<Capacity<<endl;
			
	}
		
};
int main()
{
	Train t;
	
	t.JourneyDetails();
	t.TrainDetails();
	t.display();
	
	return 0;
}
