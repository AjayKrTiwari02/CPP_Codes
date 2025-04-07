#include <iostream>
using namespace std;

class Student
{
	public:
		double marks1 , marks2;	
		
};

//function that return object of student.

int student_info()
{
	Student s1;
	
	s1.marks1 = 87.98;
	s1.marks2 = 79.08;
	
	cout<<"Marks 1 : "<<s1.marks1<<endl;
	cout<<"Marks 2 : "<<s1.marks2<<endl;
	
	return s1;
}

int main()
{
	
int	st = student_info(); //call function;
	cout<<s1;
	
	return 0;
}
