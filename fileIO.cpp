//fileIO.cpp
#include <fstream>
#include <iostream>
#include <string>

int main(){
	//opening a file for output
	std::ifStream inFile;
        std::string currentLine;
	int intA, intB;
	std::string text;
	std::string strA, strB;
	std::stringstream ss;

	inFile.open("data.csv");

        while (getline(infile, currentLine)){
           ss.clear();
	   ss.str("");
	   ss.str(currentLine);

	   getline(ss, strA, ',');
	   getline(ss, strB, ',');
	   getline(ss, text);

	   ss.clear();
	   ss.str("");
	   ss << strA << " " << strB;
	   ss >> intA << intB;

	   int sum = intA + intB;

	
}
