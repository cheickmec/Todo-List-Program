#include "Prog.h"


Program::Program()
{
    m_command = NULL;
}


Program::Program(int argc, char** argv)
{
    if (argc == 1) //Check for Minimum requirement
	{
		print_USAGE();
		return;
	}
    initArguments(argc, argv, m_arguments);
    m_command = NULL;
    Processor(m_command, m_arguments);
}
///====================================================///
///=====================USAGE MESSAGE==================///
///====================================================///
void print_USAGE()
{	
	std::cerr << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cerr << "|                                                                 |" << std::endl;
	std::cerr << "| USAGE: todo [-f filename] command [(text) or Positive integer]  |" << std::endl;
	std::cerr << "|                                                                 |" << std::endl;
	std::cerr << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
}	
