#include<stdio.h>


int main()
{
	int num;
	char ln;
	FILE *fp;
	
	if((fp=fopen("C:\\FileHandling\\niit.txt","r"))==NULL);
	{
	printf("Error occured");
	exit(1);
	}

	fscanf(fp,"%d",&num);

	printf("%d",num);
	
	fclose(fp);
	
	return 0;
}
