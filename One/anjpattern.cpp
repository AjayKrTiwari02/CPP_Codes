#include<iostream>
using namespace std; 
int main() 
{
int i,j;
    /*for(i=0;i<5;i++) 
    {   
	for(j=0;j<5;j++) 
        { 
		 if(i==0||i==4) 
           { 
		   cout<<"*"; 
           }  
           else 
           {
		   cout<<"#";
		   }
		   
		}
		cout<<endl;	
	} */
	for(i=0;i<5;i++) 
	{  
	   for (j=0;j<i;j++)  
	   { if(i>=j) 
	      { //cout<<"*";
	      
		   }  
		   else 
		   {// cout<<" ";
			} 
	   
	   } 
	   cout<<endl;
	} 
	for(i=0;i<5;i++) 
	{  for(j=0;j<i;j++) 
	    { 
	    	if(i%2==0)
	    	{
	    	//	cout<<"#";
			}
			else
			{
			//	cout<<"*";
			}
	    	
		} 
		cout<<endl;
	}  
	for(i=0;i<17;i++) 
	{
		for(j=0;j<17;j++)
		{  if(i==j||i+j==16||i==8||j==8)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
		
			
		}
		cout<<endl;
	}
	return 0;
}
