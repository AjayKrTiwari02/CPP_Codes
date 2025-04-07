// parameters to templates in C++
#include <iostream>
using namespace std;

template <class T, int max>  //max=1000   //256

int arrMin(T arr[], int n)   //(int arr1[10,20,15,12],4)  //(arr2[1,2,3],3)
{
	int m = max;    ///m=1000
	
	for (int i = 0; i < n; i++)
		if (arr[i] < m)
			m = arr[i]; //10

	return m; //10 , 1
}

int main()
{
	int arr1[] = { 10, 20, 15, 12 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]); //4

	char arr2[] = { 1, 2, 3 };
	int n2 = sizeof(arr2) / sizeof(arr2[0]);//3

	// Second template parameter to arrMin must be a
	// constant
	cout << arrMin<int, 10000>(arr1, n1) << endl;
	cout << arrMin<char, 256>(arr2, n2);
	return 0;
}

