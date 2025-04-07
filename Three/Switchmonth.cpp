#include<iostream>
 
 
 using namespace std;
 
 int main() 
 {
 	int Month;
 
 	
 	cout<<"Enter  The Month:";
 	cin>>Month;
 

 	
 	switch(Month)
 	{
 		case 1:
 		{
 			
 			cout<<"The month is: January ";
 			break;
		 }
		 case 2:
 		{
 			
 			cout<<"The Month is: February";
 			break;
		 }
		 case 3:
 		{
 		
 			cout<<"The Month is: March";
 			break;
		 }
		 case 4:
		 	{
 		
 			cout<<"The Month is: April";
 			break;
		 	}
		 	 case 5:
		 	{
 		
 			cout<<"The Month is: May";
 			break;
		 	}	
		  case 6:
		 	{
 		
 			cout<<"The Month is: June";
 			break;
		 	}
		 	 case 7:
		 	{
 			cout<<"The month is: July";
 			break;	
		   }
		   	case 8:
		 	{
 			cout<<"The month is:August";
 			break;	
		   }
		    case 9:
		 	{
 			cout<<"The month is: September";
 			break;	
		   }
		    case 10:
		 	{
 			cout<<"The month is: October";
 			break;	
		   }
		 	 case 11:
		 	{
 			cout<<"The month is: November";
 			break;	
		   }
		    case 12:
		 	{
 			cout<<"The month is: December";
 			break;	
		   }
		 	 default:
		 	{
 			cout<<" invalid input";
		    }
 		
	 } 
	 return 0;	
 }
