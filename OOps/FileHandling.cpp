#include <iostream>
#include<fstream>
#include<string>


using namespace std;

void writeData()
{
	ofstream wrt("C:\\FileHandling\\ABC.txt");
	
	if(!wrt)
	{
		cout<<"Not able to open the file..\n";
	}
	else
	{
//		wrt<<"Hello my name is Aptech Jadavpur.\nI am an Educational Institute.";
		
//		wrt<<"Aptech Limited is an Indian multinational skills and talent development corporation headquartered in Gurgaon, India. ";
		
//		char abc[] = "I love my India,Jai hind ";
//		wrt.write(abc , 10);
//		cout<<"Data written successfully...";
		
	}
	wrt.close();
	cout<<"File is Written succefully"<<endl;
}

void appendData()
{
	ofstream wrt("C:\\FileHandling\\ABC1.txt" , ios::app);
	
	if(!wrt)
	{
		cout<<"Not able to open the file..\n";
	}
	else
	{	
		wrt<<"\n Interested student can join Aptech with Many Exciting courses ";
		
	}
		cout<<"Data append successfully...";
	wrt.close();
	
}

void readData()
{
	ifstream rd("C:\\FileHandling\\ABC.txt");
	
	string data;
	
	
//	rd>>data;  //reads only the first word...
//	cout<<data;
//	cout<<endl;
	
	
	
//	getline(rd , data); // reads only the first line
//	cout<<data;
//	cout<<endl;
	
	
	
//	while(rd)
//	{
//		cout<<data;
//		cout<<endl;
//		getline(rd , data);
//	}
	
//	char text[500];
//	
//	rd.read(text , 20);
//	cout<<text<<endl;
}

void readWriteData()
{
	fstream fst;
	
	fst.open("C:\\FileHandling\\ABC2.txt" , ios::in | ios::out);
	
	fst<<"Hello everyone. \nMy name is Aptech Kolkata.\n Lives in Kolkata , West Bengal.";

//-------------------------------read
	
	fst.seekg(0 , ios::beg);
	
	string data;
	
	while(!fst.eof())
	{
		getline(fst , data);
		cout<<data<<endl;
	}
	
	fst.close();	
	
}



int main()
{
//	writeData();
//	appendData();
//	readData();
//	readWriteData();
	
	return 0;
}
