#include <iostream>
 
using namespace std;
 
int main()
{
   int r, c, i, j, first[10][10], second[10][10], sum[10][10];
   
 
   cout<<"Enter the number of rows and columns of matrix"<<endl;
   
   cin>> r>> c;   
   
   
   cout<<"Enter the elements of first matrix"<<endl;
 
   for (i = 0; i < r; i++)
   {
   	    for (j = 0; j < c; j++)
   	    {
         cin>>first[i][j];
     	}
   }
  
  cout<<"Enter the elements of second matrix"<<endl;
  
   for (i = 0;  i< r; i++)
   {
      for (j = 0 ; j < c; j++)
      {
         cin>>second[i][j];
		}
		
	}
   cout<<"Sum of entered matrices:-\n";

   
   for (i = 0; i < r; i++) 
   {
      for (j = 0 ; j < c; j++)
	   {
         sum[i][j] = first[i][j] + second[i][j];// use "-" sign for subtraction..
         
         cout<< sum[i][j]<<"  ";
      }
      cout<<endl<<endl;
   } 
   return 0;
}




