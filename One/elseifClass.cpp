#include<iostream>

using namespace std;

int main()
{
	int roll;
	cout<<"Enter The Roll Number"<<endl;
	cin>>roll;


	if(roll>0 && roll<=50)
	{
		cout<<"Class :101"<<endl;
	}
	else if(roll>50 && roll<=100)
	{
		cout<<"class :102"<<endl;
	}
	else if(roll>100 && roll<=150)
	{
		cout<<"class :103"<<endl;
	}
	else if(roll>150 && roll<=200)
	{
		cout<<"class :104"<<endl;
	}
	else
	{
		cout<<"Inavlid input"<<endl;
	}

    return 0;
}
