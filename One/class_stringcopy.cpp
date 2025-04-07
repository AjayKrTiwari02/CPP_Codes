#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char name[] = "Amit Das";
	char name2[15];
	//name2 = name; //generates an error as invalid array assingment...
	
	strcpy(name2 , name);
	
	cout<<name<<endl;
	cout<<name2<<endl;
	
	return 0;
}
