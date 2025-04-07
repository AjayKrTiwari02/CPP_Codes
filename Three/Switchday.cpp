#include<iostream>
 
 
 using namespace std;
 
 int main() 
 {
 	int Day;
 
 	
 	cout<<"Enter  The day:";
 	cin>>Day;
 

 	
 	switch(Day)
 	{
 		case 1:
 		{
 			
 			cout<<"The day is: SUNDAY";
 			break;
		 }
		 case 2:
 		{
 			
 			cout<<"The day is: MONDAY";
 			break;
		 }
		 case 3:
 		{
 		
 			cout<<"The day is: TUESDAY";
 			break;
		 }
		 case 4:
		 	{
 		
 			cout<<"The day is: WEDNESDAY";
 			break;
		 	}
		case 5:
		 	{
 		
 			cout<<"The day is: THURSDAY";
 			break;
		 	}	
		  case 6:
		 	{
 		
 			cout<<"The day is: FRIDAY";
 			break;
		 	}
		case 7:
		 	{
 			cout<<"The day is: SATURDAY";
 			break;	
		   }
		 	 default:
		 	{
 			cout<<" invalid input";
		    }
 		
	 } 
	 return 0;	
 }
