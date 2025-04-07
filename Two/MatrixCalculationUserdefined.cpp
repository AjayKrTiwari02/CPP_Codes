#include <iostream>
 
using namespace std;
 
int main()
{
   int a, b, i, j, first[10][10], second[10][10], sum[10][10];
   char opt;
 
   cout<<"Enter the number of rows and columns of matrix"<<endl;
   
   cin>> a>> b;   //3,3
   
   cout<<"Enter the elements of first matrix"<<endl;
 
   for (i = 0; i < a; i++)
   {
   	    for (j = 0; j < b; j++)
   	    {
         cin>>first[i][j];
     	}
   }
  
  cout<<"Enter the elements of second matrix"<<endl;
  
   for (i = 0;  i< a; i++)
   {
      for (j = 0 ; j < b; j++)
      {
         cin>>second[i][j];
		}
		
	}
	cout<<"Enter your choice:"<<endl;
	cin>>opt;
switch(opt)
{
	case'+':
		{
   printf("Sum of entered matrices:-\n");
   
   for (i = 0; i < a; i++) 
   {
      for (j = 0 ; j < b; j++)
	   {
         sum[i][j] = first[i][j] + second[i][j];// use "-" sign for subtraction..
         
         cout<< sum[i][j]<<" ";
      }
      cout<<endl;
   }
   break;
}
	case'-':
		{
   printf("Sub of entered matrices:-\n");
   
   for (i = 0; i < a; i++) 
   {
      for (j = 0 ; j < b; j++)
	   {
         sum[i][j] = first[i][j] - second[i][j];// use "-" sign for subtraction..
         
         cout<< sum[i][j]<<" ";
      }
      cout<<endl;
   }
   break;
   
}
default:
	cout<<"Invalid operator..!!";
   
	}
   return 0;
}




