#include<iostream> 
using namespace std; 

bool isMagic(int n) 
{ 
	int sum = 0; 
	
 
	while (n > 0 || sum > 9) 
	{ 
		if (n == 0) 
		{ 
			n = sum; 
			sum = 0; 
		} 
		sum += n % 10; 
		n /= 10; 
	} 
	
	// Return true if sum becomes 1. 
	return (sum == 1); 
} 

// Driver code 
int main() 
{ 

	cout<<"Enter the  Number You want to check:"<<endl;
	int n ;
	cin>>n; 
	
	
	if (isMagic(n)) 
		cout << "Magic Number"; 
	else
		cout << "Not a magic Number"; 
	return 0; 
} 

