#include<iostream>

using namespace std;

int main()
{
	int age ,height,weight;
	
	cout<<"Enter your age:"<<endl;
	cin>>age;
	cout<<"Enter your height:"<<endl;
	cin>>height;
	cout<<"Enter your weight:"<<endl;
	cin>>weight;
	
	if(age<=27&&age>=18)
	{
		
		if(weight<80&&weight>60)
		{
			if(height>=170)
			{
				
				cout<<"You are eligible";
			}
			else
			{
			cout<<"Height is not Upto the mark";
			}
		}
		else
		{
		cout<<"Weight Default";
		}		
	}
	else
	{
	cout<<"Age Default..!";
	}
	
	return 0;
}
