#include <iostream>

using namespace std;
class List
{
public:
// Array of integers to hold values
	int arr[20];
// Number of elements in array
	int n;
// Function to accept array elements
	void read()
	{
		while (1)
		{	
			cout<<"\nEnter the number of elements in the array:";
			cin>>n;
			if (n>0 && n<= 20)
			break;
			else if(n>20)
			cout<<"\nArray can have maximum 20 elements.\n";
			else if (n < 0)
		cout<<"\nEnter positive number.\n";
		}
	// Display the header
	cout<<"\n";
	cout<< "-----------------------\n";
	cout<< "Enter array elements \n";
	cout<<"-----------------------\n";
// Get array elements
	for( int i = 0; i < n; i++ )
	{
		cout<<"<"<<i + 1<<"> ";   ///<1>20
		cin>>arr[i];
	}
}
//Bubble Sort function
void BubbleSort()
	{
		for (int i = 1; i < n ; i++) // For n - 1 passes
		{
// In Pass i, compare the first n - i elements
// with their next elements
			for (int j = 0; j < n - i; j++)
			{
				if (arr[j] > arr[j + 1]) // If the elements
// are not in the correct order
				{
// Swap the elements
					int temp;  			///arr[j]32 ,arr[j+1] 30
					temp = arr[j]; 		//temp =32
					arr[j] = arr[j + 1];//arr[j]=30
					arr[j + 1] = temp;//arr[j+1]=32
				}
			}
		}
}
// Function to display the contents of the array
void display()
{
		cout<<endl;
		cout<<"-----------------------\n";
		cout<<" Sorted array elements \n";
		cout<<"-----------------------\n";
		for( int j = 0; j < n; j++ )
		{
		cout<<arr[j]<<endl;
		}
	}
};
int main()
{
// Create an instance of the class
	List myList;
// Function call to accept array elements
	myList.read();
// Function call to sort the array
	myList.BubbleSort();
// Function call to display the sorted array
	myList.display();
return 0;
}
