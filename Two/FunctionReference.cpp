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
	//swap(x , y);		// This will not swap correctly
	
	//swapPointer(&x , &y);  //this will swap correctly.
	
	
	swapReference(x , y);   //this will swap correctly.
	
	cout<<"After swap : X =  "<<x <<" , Y = "<<y<<endl;
	
	return 0;
}

