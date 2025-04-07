#include<iostream>

using namespace std;

int main()
{
    int a[20];    // while scanning declearation of number of blocks is very importat
    int r;
    
    cout<<"Enter the number of terms:";
    cin>>r;
    
    int sum=0;
    
    double avg;
    
    cout<<"\nEnter the Array Values:"<<endl;
    for(int i=0;i<r;i++)
	{
		cin>>a[i];
	}
    
	for(int i=0;i<r;i++)
	{
		sum+=a[i];
	}
	avg=(double)sum/(double)r;
	
	cout<<"The Avg. is:"<<avg;
	
	return 0;
}
