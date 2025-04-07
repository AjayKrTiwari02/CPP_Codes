#include<iostream>
using namespace std;

class staticExample
{
 int data;
 static int staticVar; // Static variable declared
 public:
 static void display() 
 {
 
 cout<<"staticVar= "<< staticVar; 
// cout<<"data= "<<data; //Error! Static functions 
 //cannot access non-/static variables. 
 }
};
int staticExample :: staticVar=0; //Static variable initialized to 0
int main()
{
staticExample::display(); //Without creating an object of a class, 
 //the static function can be accessed
}
