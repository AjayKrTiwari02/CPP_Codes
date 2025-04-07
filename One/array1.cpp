#include<iostream>
using namespace std;

int main()
{

	int i , j , r1 , c1 ;
	
	cout<<"Enter the row size : ";
	cin>>r1;
	cout<<"Enter the column size : ";
	cin>>c1;
	
	int arr1[r1][c1];

	for(i=0 ; i<r1 ; i++)
	{
		for(j=0 ; j<c1 ; j++)
		{
			cout<<"Enter array value at index ["<<i<<"]["<<j<<"] : ";
			cin>>arr1[i][j];	
		}		
	}	
	
	cout<<"Display array value : \n";
	
	for( i=0 ; i<r1 ; i++)
	{
		for( j=0 ; j<c1 ; j++)
		{
			cout<< arr1[i][j]<<" ";
			
		}
		cout<<endl;
		
	}
	
	
	
	return 0;
}



