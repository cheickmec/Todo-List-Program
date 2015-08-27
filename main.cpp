#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char** argv)
{
	cout << "The number of argments is"<<argc<<endl;
	for(int i = 0; i < argc; i++){
cout<<"Argument number "<<i<<" is :"<<argv[i]<<endl;
} 
	if(argc >= 3) //if no file name was 
	{
		char* fileName = argv[1]; 
		ofstream inFile(fileName);	//open input file
		char* task = argv[2];	//task description handler
		for(int i =2; i<argc;i++){
			inFile << task; //output task desription to file
			inFile<<" ";	//put space
			task++;	//move to next string
		}
	
	inFile.close();	//close input file
	}
	return 0;
}
