#include<iostream>

using namespace std;


class Fruit
{
	public:
	static int Total,apple;
	static int mango;

	int display()
{
		Total=apple+mango;
		return Total;
}

};
class Apple:public Fruit
{
	public:
		void setApple(int app)
		{
			this ->apple=app;
		}
		
	void appleDisplay()
	{
		cout<<"Total number of apples are:"<<apple<<endl;
		
	}
};

class Mango:public Fruit
{
	public:
	void setMango(int man)
	{
		this ->mango=man;
	}
	void mangoDisplay()
	{
	cout<<"Total number of Mangoes are:"<<mango<<endl;
	}

};




int main()
{
	Apple a;
	Mango m;
	a.setApple(20);
	m.setMango(22);
	a.appleDisplay();
	m.mangoDisplay();
	cout<<"Total number of Fruits are:"<<m.display();
	
	return 0;
}
