//fileIO.cpp
#include <fstream>
#include <iostream>
#include <string>

int main(){
	//opening a file for output
	std::ofStream outfile;
	outFile.open("example.dat");
	if(outFile.is_open()){
		outFile << "eggs" << std::endl;
		outFile << "milk" << std::endl;
		outFile << "bread" << std::endl;
		outFile.close()
	}else{
		std::cout << "unable to open file" << std::endl;
	}//end if
	
	//appending to a file
	//std::ofStream
	std::ofStream appFile;
	appFile.open("example.dat", std::ios::app);
	appFile << "chips" << std::endl;
	appFile.close();
	
	//reading from a file
	std::ifstream
}
