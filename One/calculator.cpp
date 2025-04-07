#include<iostream>
 
 
 using namespace std;
int main()
{
	int a,b,c;
	char ch;
	cout <<"Enter Two Numbers:"<<endl;
	 cin>>a;
	 cin>>b;
	 cout<<"Enter Your Choice : + _ / * "<<endl;
	 cin>>ch;
	 
	 switch(ch)
	 	{	 
	 	case '+':c=a+b;
	 		cout<<c;
	 		break;
	 	
	 	case '-':c=a-b;
	 		cout<<c;
	 		break;
		case '/':c=a/b;
	 		cout<<c;
	 		break;
		case '*':	c=a*b;
	 		cout<<c;
	 		break;	
	 		default: cout<<"Invalid Choice";
        }
	
		return 0;	
}





