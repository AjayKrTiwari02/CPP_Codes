// Abstraction
#include <iostream>
using namespace std;

class ImplementAbstraction
 {
private:
	int a, b;    // method to set values of private members...

public:
	
	
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	ImplementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}

