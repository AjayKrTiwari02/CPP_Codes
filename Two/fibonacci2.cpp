#include <iostream> 

using namespace std;
class loops 
{
int num1; 
int num2; 
public: 
void fibonacci() 
{
 num1=num2=1;
 cout << num1 << endl;
 while (num2 < 150)
 {
 cout << num2 << endl; 
 num2 += num1;
 num1 = num2 - num1; 
 if (num2 == 89) 
 break;
 }
}
}; 
int main()
{
 loops L1;
 L1.fibonacci();
 return 0;
}
