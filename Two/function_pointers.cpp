#include <iostream>
using namespace std;


void swap(int a , int b)  //1 //5. swapping performed..
{
	int temp = a; //a=10,b=20,temp=a=10
	a=b;        //a=20
	b=temp;    //b=10
}

void swapPointer(int* a , int* b) //4 a,b assigned
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}


void swapReference(int &a , int &b)//2. &a=x=4,&b=y=5
{
	int temp = a;    ///call by pointers
	a = b;
	b = temp;
}

int main()
{	
	int x = 4 , y = 5;

	cout<<"Before swap : X =  "<<x <<" , Y = "<<y<<endl;
//	swap(x , y);		// This will not swap correctly//1
	
//	swapPointer(&x , &y);  //this will swap correctly.//2
	
	
	swapReference(x , y);   //this will swap correctly.//3.
	
	cout<<"After swap : X =  "<<x <<" , Y = "<<y<<endl;
	
	return 0;
}
