#include<stdio.h>
 
 int main() 
 {
 	int Day;
 
 	
 	printf("Enter the roll number:\n");
 	scanf ("%d",&Day);
 
	printf("The student name is:\n");
 	
 	switch(Day)
 	{
 		case 1:
 		{
 			
 			printf(" RAJ BOSS");
 			break;
		 }
		 case 2:
 		{
 			
 			printf(" SUMIT DEY");
 			break;
		 }
		 case 3:
 		{
 		
 			printf(" TIASA BHOWMIC");
 			break;
		 }
		 case 4:
		 	{
 		
 			printf(" RAM CHOWDHURY");
 			break;
		 }
		 	 case 5:
		 	{
 		
 			printf(" VIKAS SINGH");
 			break;
		 }	
		  case 6:
		 	{
 		
 			printf(" BISNU YADAV");
 			break;
		 }
		 	 case 7:
		 	{
 		
 			printf(" SUMAN MUKHARJI");
 			break;
		 }
		 	 default:
		 	{
 		
 			printf(" Invalid input");
 			break;
 		}
	 }

 	
 }
