#include<ifstream>
#include <iostream>

int main(int argc, char** argv)
{
	if(argc >= 3) //if no file name was 
	{
		char* fileName = argv[1]; 
		std::ifstream inFile; //input file handler
		inFile.open(fileName);	//open input file
		char* task = argv[2];	//task description handler
		while(task){
			inFile << task; //output task desription to file
			task++;	//move to next string
		}
	
	inFile.close();	//close input file
	}
	return 0;
}
