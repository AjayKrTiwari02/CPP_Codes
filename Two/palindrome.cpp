#include<iostream>  

using namespace std;
int main()    
{    
	int n,r,temp; 
	int sum=0;   
	cout<<"enter the number="<<endl; 
	   
	cin>>n; //n=121
	   
	temp=n;//temp=n=121
	    
	while(n>0)    
	{    
		r=n%10;    //1 2 1
		sum=(sum*10)+r;   //sum= 121
		n=n/10;  //12, 1 ,0
	}    
	if(temp==sum)    
	cout<<"palindrome number "<<endl;    
	else    
	cout<<"not palindrome : "<<sum;   //reverse of a number
	return 0;  
}   




