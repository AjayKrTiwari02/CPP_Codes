//By user
#include <iostream>
#include <exception>

using namespace std;

struct MyException : public exception 
{
   const char * what () const throw () 
   {
      return "Age Exception\'You are under age \'";
   }
};
 
int main()
 {
 	int age ;
   try 
   {
   	  cout<<"Enter you age "<<endl;
   	  cin>>age;
   	  if(age>=18)
   	  {
   	  	cout<<"You are elligible for voting"<<endl;
		 }
	 else
      throw MyException();
   } 
   catch(MyException & e)
    {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } 

   return 0;
}


