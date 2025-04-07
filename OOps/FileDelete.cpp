#include <iostream>

using namespace std;

int main() 
{
	
  char filename[] ="C:\\FileHandling\\ABC2.txt";
  

  // remove the file 
  int result = remove(filename); // true =0 , false =-1

  cout << result<<endl;   ///this is not important
  
  if(result==0)
  {
  	cout<<"File Deleted Successfully..";
  }
  else
  {
  	cout<<"File not Found..";
  }

  return 0;
}
