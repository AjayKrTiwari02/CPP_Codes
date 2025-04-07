#include <iostream>
#include<string>

using namespace std;

class Parcel
{
	private:
		
	int weight;
		
	protected:
		
	int	shipping_cost;	
	
	public:
	
	Parcel(int weight)
	{
		this->weight = weight;
		
	}
	virtual int call_shipping()
	{
		shipping_cost=weight*10;
		return shipping_cost;
	}

};

class Box : public Parcel
{
	private:
		
		int height;int width;int depth;
		
		int volume;
		
		
	public:	

	Box( int height,int width,int depth,int weight):Parcel(weight)
	{
		this->height = height;
		this->width = width;
		this->depth = depth;	
	}	
	int call_shipping()
	{
		volume=height*width*depth;
		
		if(volume>3)
		{
			shipping_cost=Parcel::call_shipping() + 30;			
			return shipping_cost;			
		}
	}
	void display()
	{
		cout<<"Total shipping cost is:"<<shipping_cost<<endl;
	}	
};

int main()
{
	Box b(23,13,14,50);
	b.call_shipping();
	b.display();	
	cout<<endl;
		
	return 0;
}









