#include <iostream>
#include <string>
#include <fstream> //library that lets you work with files
using namespace std;



int main() {
	string myFileText;
	//to create and open a textfile you can just write
	fstream MyFile("filesname.txt");
	
	//Write to the file, use the insertion operator <<
	MyFile << "Files can be tricky, but it is fun enough!";

	//use a while looop with getline() to read a file line byline
	while (getline (MyFile, myFileText)) {
		cout << myFileText;
	}
	cout << myFileText;
	//Close the file
	MyFile.close();
	
	return 0;
}
