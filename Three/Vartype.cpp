#include<iostream>
 using namespace std;
 
 int gl=67; //global variable
 
 int main()
 {
 	int a=45;  //4bytes
 	float b=56.78;//4 bytes
 	char c='A'; //1 byte
 	long d=23; //8 byte
 	short e=3; //2 bytes
 	double f=23334.43;//8 bytes
 	bool g=true;//2 bytes
 	char h[6]="Sneha";//6bytes
 	
 	if(1==1)
 	{
 		int local=56;//local
 		
 		cout<<local<<endl;
 		cout<<gl<<endl;
	 }
 	
 	cout<<a<<endl;
 	cout<<b<<endl;
 	cout<<c<<endl;
 	cout<<d<<endl;
 	cout<<f<<endl;
 	cout<<g<<endl;
 	cout<<h<<endl;
 	cout<<e<<endl;
 	cout<<gl<<endl;
 	//cout<<local<<endl;
 	
 	return 0;
 }
