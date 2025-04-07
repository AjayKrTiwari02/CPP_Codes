#include <iostream>

using namespace std;

int main()
{
	int i,j;
	int a[4][3]={{2,3,4},{4,5,6},{8,9,3},{5,7,9}};
	
	
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) //00,01, 10,11
		{
			cout<<"arr["<<i<<"] ["<<j<<"] =  "<<a[i][j]<<endl;///for printing positions
		 } 
	}
	cout<<"\n-----------2d-Array---------\n"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) //00 01
		{ 
			cout<<a[i][j]<<"   ";// for printing matrix...
		 } 
		cout<<endl<<endl;
	}
		
	return 0;
}








