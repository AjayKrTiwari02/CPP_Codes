#include<iostream>    
 
 using namespace std;
 
int main()
{ 
 
	int a[10][10],b[10][10],mult[10][10],r,c,i,j,k;    
 
	cout<<"enter the number of row="<<endl;    
	cin>>r;    
	cout<<"enter the number of column="<<endl;    
	cin>>c;    
	cout<<"enter the first matrix element=\n"<<endl;    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			cin>>a[i][j];    
		}    
	}	    
	cout<<"enter the second matrix element=\n"<<endl;    
	for(i=0;i<r;i++)    	
	{    
		for(j=0;j<c;j++)    
			{    
			cin>>b[i][j];    
			}    
	}    
    
	cout<<"multiplication of the matrix=\n"<<endl;    
	for(i=0;i<r;i++)    
	{	    
		for(j=0;j<c;j++)    
		{    
			mult[i][j]=0; 
			   
			for(k=0;k<c;k++)    
			{    
			mult[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}    
//for printing result    
	for(i=0;i<r;i++)    
		{    
		for(j=0;j<c;j++)    
			{    
			cout<<"  "<<mult[i][j];    
			}    
		cout<<endl<<endl;    
		}    
	return 0;  
}  



