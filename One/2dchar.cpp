#include <iostream>

using namespace std;

int main()
{
	int i,j;
	char a[2][2]={{'A','B'},{'C','D'}};
	string b[2][2]={{"hello","frinds"},{"chay","pillo"}};

		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++) 
		{
			cout<<"arr["<<i<<"] ["<<j<<"] =  "<<a[i][j]<<endl;///for printing positions
		 } 
		 	 	 	cout<<endl;
	}
	cout<<"\n\n---------Char matrix---------\n"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++) //00 01
		{ 
			cout<<a[i][j]<<"   ";// for printing matrix...
		 } 
		cout<<endl<<endl;
	}
	cout<<"\n\n---------String matrix---------\n"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++) //00 01
		{ 
			cout<<b[i][j]<<"   ";// for printing matrix...
		 } 
		cout<<endl<<endl;
	}
	
		
	return 0;
}
