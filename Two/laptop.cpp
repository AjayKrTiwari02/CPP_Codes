#include<iostream>

using namespace std;

int main()
{
	int con,con1,con2,con3;
	cout<<"Enter 1 for YES and 2 for NO :"<<endl;
	cout<<"Do you have Hp laptop :"<<endl;
	cin>>con;
	
	if(con==1)
	{
		cout<<"Do you have pavillion series :"<<endl;
		cin>>con1;
		if(con1==1)
		{
			cout<<"Do you have ryzen 5 series :"<<endl;
			cin>>con2;
			if(con2==1)
			{
				cout<<"Do you have 1 TB ram :"<<endl;
				cin>>con3;
				if(con3==1)
				{
					cout<<"I'll buy it'"<<endl;
				}
				else
				{ 
				cout<<"No Ram available"<<endl;
				}
			}
			else
			{
			cout<<"Ryzen not available"<<endl;
			}
		}
		else
		{
		cout<<"Pavillion series not available"<<endl;
		}		
	}
	else
	{
	cout<<"HP not available"<<endl;
	}
	
	return 0;
  }

