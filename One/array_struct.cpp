#include<iostream>
using namespace std;

struct Student_details
{
	char Student_Name[30];
	int Roll_No;
	int score;
}; 
int main() 
{

Student_details stud_records[] = {
 {"Sachin",1,100},
 {"Jim",2,89},
 {"Bryan",3,95},
 {"Steven",4,93}
}; 
cout<<stud_records[0].Student_Name<<endl; 
cout<<stud_records[0].Roll_No<<endl; 
cout<<stud_records[0].score<<endl;
cout<<"\n\n-------------------------------\n"<<endl;
cout<<stud_records[1].Student_Name<<endl; 
cout<<stud_records[1].Roll_No<<endl;
cout<<stud_records[1].score<<endl;
cout<<"\n\n-------------------------------\n"<<endl;
cout<<stud_records[2].Student_Name<<endl; 
cout<<stud_records[2].Roll_No<<endl;
cout<<stud_records[2].score<<endl;
cout<<"\n\n-------------------------------\n"<<endl;
cout<<stud_records[3].Student_Name<<endl; 
cout<<stud_records[3].Roll_No<<endl;
cout<<stud_records[3].score<<endl; 

return 0;
}


