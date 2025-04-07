//hybrid inheritance
#include <iostream>  

using namespace std;  

class Animals // indicates class A 
{  
	public:  

	Animals()  
	 {  

	cout<< "This is an animal\n";  

    }  

};  

class Mammals: public Animals // indicates class B derived from class A

{  

	public:  

	Mammals()  
    {  

	cout<< "This is a mammal\n";  

    }  

};  

class Herbivores  // indicates class C
{  

	public:  

	Herbivores()  
    	{  

		cout<< "This is a herbivore\n";  

    	}  

};  

class Cow: public Mammals, public Herbivores
 // indicates class D derived from class B and class C
{  
public:  

Cow()  
    {  

	cout<< "A cow is a herbivore mammal\n";  

    }    

};  
class Horse: public Mammals, public Herbivores

 // indicates class D derived from class B and class C
{  
public:  

Horse()  
    {  

	cout<< "A Horse is a herbivore mammal\n";  

    }    

}; 
	int main() 
	{  

    Cow c;  
    
    cout<<endl<<"-------------------------"<<endl;
    
    Horse h;

    return 0;  

	}  
