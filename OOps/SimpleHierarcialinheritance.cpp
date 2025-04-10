//hierarchical inheritance
#include <iostream>
using namespace std;


class Animal	// base class
 {
   public:
    void info() 
	{
        cout << "I am an animal." << endl;
    }
};


class Dog : public Animal // derived class 1
{			
   public:
    void bark() 
	{
        cout << "I am a Dog. Woof woof." << endl;
    }
};


class Cat : public Animal  // derived class 2
{
   public:
    void meow() 
	{
        cout << "I am a Cat. Meow." << endl;
    }
};

int main() {
    
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();  
    dog1.bark();

    
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info(); 
    cat1.meow();

    return 0;
}





