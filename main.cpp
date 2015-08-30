
#include "c_command.h"
///******************************************************

int main(int argc, char** argv)
{
	if (argc == 1) //Check for Minimum requirement
	{
		print_USAGE();
		return 0;
	}
	c_Arglist arguments; //empty argument list container

	initArguments(argc, argv, arguments); //initialize arguments

	c_Command* theCommand = NULL;              //empty command

	Processor(theCommand, arguments);

	return 0;
}


///====================================================///
///=====================USAGE MESSAGE==================///
///====================================================///
void print_USAGE()
{
	std::cerr << "USAGE: todo [-f filename] command [text]" << std::endl;
}
