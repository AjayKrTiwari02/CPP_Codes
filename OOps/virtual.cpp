#include<iostream>

using namespace std;

class Account
{
	
	public:
	

	
	virtual int deposit(int ammount,int balance,int dep)
	{
		dep=balance+amount;
		return dep;
	}
	virtual int withdrawl(int withdrawlamount,int balane, int rem)
	{
		rem=balance-withdrawlamount;
		return rem;
	}
		
};
class Saving:public Account
{
	 int deposit()
	{
	total deposit=ammount+balance;
	}
	 int withdrawl()
	{
		balance=deposit-withdrwal;
	}
	
	 void display1()
	 {
	 	cout<<"The  total balance"<<balance<<endl;
	 }
	
};

int main()
{
	Saving S;
	s.deposit();
	s.withdrawl();
	
	return 0;
}















