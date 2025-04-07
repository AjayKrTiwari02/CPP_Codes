
#include<iostream>
using namespace std;
 
 class Mammals
 {
 	public:
 		void statement()
 		{
 			cout<<"I am mammal   \n";	
		}
 	
 	
 };
 
 class MarineAnimals
 {
 	public:
  		void statement()
 		{
 			cout<<"I am a marine animal  \n" ;	
		}	
 	
 };
 
 class  BlueWhale: public Mammals  , public MarineAnimals
 {

 	public:
 		void statement()
 		{
 			cout<<"I belong to both the categories: Mammals as well as Marine Animals\n";
 		}
 };
 
 int main()
 {
 	Mammals mal;
 	mal.statement();
 	MarineAnimals ma;
 	ma.statement();
 	BlueWhale bw;
 	bw.statement();
 	bw.Mammals::statement();
 	bw.MarineAnimals::statement();
 	
 	return 0;
 }
