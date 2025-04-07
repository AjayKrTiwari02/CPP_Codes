#include <iostream>
using namespace std;
int main()
{
	float f = 3.5;
	char a ='b';
	int c=125;

	// using cast operator

	
	cout<<"Type casted value is:"<< static_cast<int>(f)<<endl;
	cout<<"Type casted value is:"<< static_cast<int>(a)<<endl;
	cout<<"Type casted value is:"<< static_cast<char>(c)<<endl;

	return 0;
}

