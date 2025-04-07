#include <iostream>  
#include<cmath>
using namespace std;  

int main()  
	{  
	int n,r,Sum=0,Temp,Times=0;   //temp --> for holding the value 
	    
	cout<<"Enter the Number=  ";    
	cin>>n;  //153  
	Temp=n;  //temp=n=153  
  while (Temp != 0) 
   {
      Times = Times + 1;//3
      Temp = Temp / 10; 
   }
   
  Temp = n;
  while( Temp > 0)
   {
     r = Temp %10;  
     Sum = Sum+ pow(r, Times);//27,152,153
     
//    	Sum=Sum+r; ///sum of the digits

     Temp = Temp /10;
   }   
	if(n==Sum)    
	cout<<"Armstrong Number."<<endl;    
	else    
	cout<<"Not Armstrong Number."<<Sum<<endl;
	   
return 0;  
} 
