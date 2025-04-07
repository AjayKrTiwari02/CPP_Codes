#include<iostream>

using namespace std;
int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	
	if(age>0 && age<=13)
-		{
			cout<<"You are a child"<<endl;
		}
	else if(age>13 && age<=18)
		{
			cout<<"You are a tenager"<<endl;	
		}
	else if(age>18 && age<=45)
		{
			cout<<"You are a young adult"<<endl;	
		}
	else if(age>45 && age<=60)
		{
			cout<<"You are  old adult"<<endl;	
		}	
	else if(age>60)
		{
			cout<<"Senior Citizen"<<endl;	
		}
		else
		{
			cout<<"Enter a valid age";
		}
	return 0;	
}





