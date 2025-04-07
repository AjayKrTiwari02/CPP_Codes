#include <iostream>
#include<fstream>

using namespace std;

void writeData()
{
	ofstream wrt("C:\\FileHandling\\Cplus.c");
	
	if(!wrt)
	{
		cout<<"Not able to open the file..\n";
	}
	else
	{
		wrt<<"# include<stdio.h>\n"<<endl;
		wrt<<"int main()\n{"<<endl;
		wrt<<"\nprintf(\""<<"I am c File\");\n"<<endl;
		wrt<<"\nreturn 0; \n }"<<endl;
		
	}
	wrt.close();
	cout<<" C file is prepared....!"<<endl;
}
int main()
{
	writeData();

	
	return 0;
}
