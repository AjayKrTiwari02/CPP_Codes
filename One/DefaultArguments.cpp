#include <iostream>
using namespace std;

float moneyRecived(  int currentmoney  , float factor=1.04 )
{
	return   currentmoney * factor;
	
}

int main()
{	
	
	int money = 10000;
	cout<<moneyRecived(money)<<endl;
	cout<<moneyRecived(money ,1.1)<<endl;
	return 0;
}

