#include<stdio.h>

int main()
{
	int i ;
	
	for(i=0;i<=100;i++)
	{
		if(i%2==0)     /// if want to print odd then use (i%2!=0)
		{
			printf(" %d \n\n",i);
		}
		else
		printf("  \n\n");
	}
	
	return 0;
}
