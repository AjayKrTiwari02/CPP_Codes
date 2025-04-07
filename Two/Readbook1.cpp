#include <iostream>

using namespace std;

class myclass
{
 void increment()
 {
 static int i=5;
 cout<<i<<endl;
 i++;
 }
 public:
 void display()
 {
 cout<<"calling increment for first time"<<endl; 
 increment();
 cout<<"calling increment for second time"<<endl; 
 increment();
 }
};
int main()
{
 myclass m1;
 m1.display();
 return 0;
}
