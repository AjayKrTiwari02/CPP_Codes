#include<iostream>

using namespace std;

int main()
{
	
//	int  i;
		
	for(int i=40;i>=5;--i)  // fastest and easiest loop among all
	{
		cout<<i;
		
		if(i>5)
		cout<<" ,";    // Entry contor loop..
	}
	cout<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
	for(int i=0;i<=30;++i)  // i--(i=i-1)/i++(i=i+1)/++i
	{
		cout<<i;
		
		if(i<30)
		cout<<" ,";
	}
	
	return 0;
}



