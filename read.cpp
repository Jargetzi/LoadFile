#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	cout<< "foo\n";
	ifstream myfile;
	string line;
	myfile.open ("test.txt");
	if (myfile.is_open())
	 {
    while ( getline(myfile,line) )
    {
		line.length();
		string str = line.substr(5,line.length());
		cout <<str <<endl;
		cout << line << endl;
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 
	myfile.close();
}