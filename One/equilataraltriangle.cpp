#include <iostream>

using namespace std;
int main()
{
   int i, space, rows, k = 0;

   cout<<"Enter the number of rows:";

   cin>>rows;//5

   for (i = 1; i <= rows; ++i,k=0) //k=0 is for while loop
   {
      for (space = 1; space <= rows - i; ++space) //row=4
	  {
         cout<<"  ";
      }
//     while (k < 2 * i - 1) //1,3,5,7,9
//	  {
//         cout<<" * ";
//         ++k;
//      }
//     cout<<endl;
      ////or
    for (k=0;k < 2 * i - 1;k++) //1,3,5,7,9
	  {
         cout<<"* ";

      }
     cout<<endl;
   }
   return 0;
}
