//Outputting to a file
#include <iostream>
#include <fstream>	//file-stream. needed to use files

using namespace std;

int main()
{
	ofstream outputFile; //make ofstream variable type

	//open method top open the output file
	outputFile.open("demofile.txt");	

	cout << "Now writing data to the file. \n";

	outputFile << "Nintendo Switch";
	outputFile << "Playstation 4";
	outputFile << "Xbox One";
	outputFile << "PC";

	outputFile.close();
	
	cout << "DONE!";

	system("pause");
	return 0;
}
/*
fstrean
========
ifstream -- input file stream (optimized for input)

ofstream -- output file stream (optimized for output)

fstream -- file stream (less optimised but does input and output)
*/