#include <iostream>
#include <fstream>
#include<string>
using namespace std;
 
int main()
{
    string line;
    
    //For writing text file
    //Creating ofstream & ifstream class object
    
    ifstream ini_file ("C:\\FileHandling\\ABC.txt"); 
    ofstream out_file ("C:\\FileHandling\\ABC2.txt");
 
    if(ini_file && out_file)
	{
 
        while(getline(ini_file,line))
		{
            out_file << line << "\n";
        }
 
        cout << "Copy Finished \n";
 
    } 
	else 
	{
        //Something went wrong
        cout<<"Cannot read File";
    }
 
    //Closing file
    ini_file.close();
    out_file.close();
 
    return 0;
}
