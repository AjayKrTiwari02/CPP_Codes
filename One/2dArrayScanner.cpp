#include <iostream>

using namespace std;
int main()
{
	int a[3][3];
	
	int i,j;
	
	cout<<"Enter Array elements: "<<endl<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the value at index a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
		 } 
	}
	cout<<endl<<"The following mattix is:\n"<<endl;
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"  ";
		 } 
		cout<<endl<<endl;
	}	
	return 0;
}




