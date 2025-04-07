
#include <iostream>
using namespace std;

int main()
{
		
int arr1[] = { 10, 20, 15, 12 };

cout<<sizeof(arr1)<<endl;                //==16
cout<<sizeof(arr1[0])<<endl;             //=4

int n1 = sizeof(arr1) / sizeof(arr1[0]); //==4

cout<<"Division Output :"<<n1<<endl;
//2nd
	char arr2[] = { 1, 2, 3 };
	cout<<sizeof(arr2)<<endl;
	cout<<sizeof(arr2[0])<<endl;
	
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	
	cout<<n2;

return 0;

}
