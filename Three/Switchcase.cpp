#include<iostream> 
 
 using namespace std;
 
int main()
{
	int a,b,c;
	
	char ch;
	
	cout <<"Enter Two Numbers:"<<endl;
	
	 cin>>a>>b;
	 
	 //cin>>b;
	 cout<<"Enter Your Choice  :+,-,*,/,%"<<endl;
	 cin>>ch;
	 
	 switch(ch)
	 	{	 
	 	case '+':c=a+b;
	 		cout<<c<<endl;
	 		break;
	 	
	 	case '-':c=a-b;
	 		cout<<c<<endl;
	 		break;
		case '/':c=a/b;
	 		cout<<c<<endl;
	 		break;
		case '*':	c=a*b;
	 		cout<<c<<endl;
	 		break;	
	 	case '%':c=a%b;
	 		cout<<c<<endl;
	 		break;
	 		default: cout<<"Invalid Choice";
        }
	
		return 0;	
}





