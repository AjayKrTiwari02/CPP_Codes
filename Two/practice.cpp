# include<iostream>

using namespace std;

int main()
{
	for (int i=0;i<30;i++)
	{
		cout<<"[";
		for (int j=0;j<=i;j++)
		{
			cout<<j;
		}
		cout<<"]";
		cout<<endl;
	}	
	
	return 0;
}
