#include<iostream>

using namespace std;

int main()
{
	int first=0, second=1, i, n, sum=0;
	
	cout<<"Enter the number of terms: "<<endl;
	cin>>n;					//7
								
		cout<<"Fibonacci Series:"<<endl;
		for(i=0 ; i<n ; i++)
		{
			if(i <= 1)
			{
			sum=i;   //0 1
			}
							  //to print 0 and 1
		else
		{
		sum=first + second;//sum=1,2,3 ,5 8
		first=second;     //first=1,1,2 3 5
		second=sum;	     //second=1	2 3	5 8			
		}
		cout<<sum<<" ";//0 1 1 2 3  5  8
		}
		
	return 0;
	}





