#include <iostream>
using namespace std;

class Student
{
	public:
		double marks;
		
		Student(double m)
		{
			marks = m;
		}	
		
};

//function that has object as parameter

int calculation(Student s1 , Student s2)
{
	double avg = (s1.marks + s2.marks) / 2;
	
	return avg;
}

int main()
{
	Student st1(87.76);
	Student st2(76.56);
	
	cout<<"Average marks : "<<calculation(st1 , st2)<<endl;
	return 0;
}
