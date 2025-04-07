#include <iostream>
using namespace std;


void swap(int a , int b)  
{
	int temp = a; 
	a=b;        
	b=temp;    
}

void swapPointer(int* a , int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}


void swapReference(int &a , int &b)
{
	int temp = a;    
	a = b;
	b = temp;
}

int main()
{	
	int x = 4 , y = 5;

	cout<<"Before swap : X =  "<<x <<" , Y = "<<y<<endl;
//	swap(x , y);		// This will not swap correctly//1
	
//	swapPointer(&x , &y);  //this will swap correctly.//2
	

//	swapReference(x , y);   //this will swap correctly.//3.
	
	cout<<"After swap : X =  "<<x <<" , Y = "<<y<<endl;
	
	return 0;
}

