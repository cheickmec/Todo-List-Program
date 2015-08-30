#include "c_command.h"

///-------------------------Constructor---------------------------------------
c_Command::c_Command()
{
	
}
///------------------------converter constructor------------------------------
c_Command::c_Command(c_Arglist args)
{
	set_arglist(args);
}
///-------------------------set argument list --------------------------------
void c_Command::set_arglist(c_Arglist aList)
{
	this->m_arglist = aList;
}
///-------------------------Destructor-----------------------------------------
c_Command::~c_Command()
{
	m_arglist.~c_Arglist();
}
///----------------------parse file--------------------------------------------
void c_Command::parseFile()
{
	m_File.open(m_arglist.getFilename().c_str());
	std::string astr;
	unsigned int i = 0;
	while (std::getline(m_File, astr))
	{
		i++;
		if ((astr.c_str())[0]) //if astr is not an empty line
		{
			if (!isFormat(astr)){
				std::cerr << "Task at line " << i << " has wrong format so it was ignored" << std::endl;
				continue;
			}
		}
	}
	if (isEmpty()) std::cout << "Opened new file " << m_arglist.getFilename() << std::endl;
	m_File.close();
}
///--------------------------update file--------------------------------------
///@@@@@@@@@@@@@@@ updates file with up-to-date list @@@@@@@@@@@@@@@@@@@@@@@@@
///---------------------------------------------------------------------------
void c_Command::updateFile()
{
	m_File.open(m_arglist.getFilename().c_str(), std::fstream::out);
	for (unsigned int i = 0; i < m_TaskList.size(); i++)
	{

		if (m_TaskList[i].isDone())
		{
			
			m_File << (i + 1) << ":[X] " << m_TaskList[i].getDescription() << std::endl;
			continue;
		}
		m_File << (i + 1) << ":[ ] " << m_TaskList[i].getDescription() << std::endl;
	}
}
///-------------------------display list--------------------------------------
///@@@@@@@@@@@@@@ displays list to terminal @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
///---------------------------------------------------------------------------
void c_Command::displayList()
{
	for (unsigned int i = 0; i < m_TaskList.size(); i++)
	{
		
		if (m_TaskList[i].isDone())
		{
			std::cout << (i + 1) << ":[X] " << m_TaskList[i].getDescription() << std::endl;
			continue;
		}
		std::cout << (i + 1) << ":[ ] " << m_TaskList[i].getDescription() << std::endl;
	}
}
///-------------------------is empty------------------------------------------
///@@@@@@@@@@@@@@@ returns task list is empty @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
///---------------------------------------------------------------------------
bool c_Command::isEmpty()
{
	if (m_TaskList.size() == 0) return true;
	return false;
}
///-------------------------is format----------------------------------------
///@@@@@@@@@@@@@@@ returns true if string has correct format @@@@@@@@@@@@@@@@
///--------------------------------------------------------------------------
bool c_Command::isFormat(std::string str)
{
	unsigned int i = 0;
	const char* temp = str.c_str();

	if (isDigit(temp[0]))
	{
		c_Task xtask;
		do { i++; } while (isDigit(temp[i]));
		if (doMatch(str.substr(i, 5).c_str(),":[ ] "))
		{
			str = str.substr(str.find_first_of(" ")+2); //get section of str starting with a space
			xtask = str.substr(str.find_first_not_of(" ")); //get section starting without a space
			xtask.uncheck();
			m_TaskList.push_back(xtask);
			return true;
		}
		else if (doMatch(str.substr(i, 5).c_str(), ":[X] "))
		{
			str = str.substr(str.find_first_of(" ")); //get section of str starting with a space
			xtask = str.substr(str.find_first_not_of(" ")); //get section starting without a space
			xtask.check();
			m_TaskList.push_back(xtask);
			return true;
		}
	}
	return false;
}
///-------------------------- check task at position -------------------------
///@@@@@@@@@@@@@@@ checks the task at position pos if existant @@@@@@@@@@@@@@@
///---------------------------------------------------------------------------
void c_Command::checkGivenTask()
{
	int pos = toInt(m_arglist.getText());
	if ( pos > m_TaskList.size())
	{
		std::cout << "Sorry! There are no task at position " << pos;
		return;
	}
	m_TaskList[pos - 1].check();
}
///===========================================================================
///============================  LIST  =======================================
///===========================================================================
c_List::c_List(c_Arglist args)
{
	m_arglist = args;
}
void c_List::process()
{
	if (m_arglist.getText().size() != 0)
	{
		print_USAGE();
		return;
	}
	parseFile();
	displayList();
}
c_List::~c_List()
{//Destructor
}
///==========================================================================
///===============================  ADD  ====================================
///==========================================================================
c_Add::c_Add(c_Arglist args)
{
	m_arglist = args;
}
void c_Add::process()
{
	parseFile();
	c_Task xtask = m_arglist.getText();
	xtask.uncheck();
	m_TaskList.push_back(xtask);
	updateFile();
}
c_Add::~c_Add()
{//Destructor
}
///==========================================================================
///============================  DO  ========================================
///==========================================================================
c_Do::c_Do(c_Arglist args)
{
	m_arglist = args;
}
void c_Do::process()
{
	parseFile();
	checkGivenTask();
	updateFile();

}
c_Do::~c_Do()
{
	//Destructor
}
///++++++++++++++++++++++++++++UTILITIES+++++++++++++++++++++++++++++++++++///
///============================ARGUMENT INITIALIZER========================///
void initArguments(int argc, char* argv[], c_Arglist& args)
{
	
	bool checked_filename = false;
	bool checked_command = false;
	int i = 1;
	while (i < argc)
	{

		if (!checked_filename)
		{
			if (doMatch(argv[i],"-f") && (i + 1)<argc)
			{
				args.setFilename(argv[i + 1]);
				i += 2;
				checked_filename = true;
				continue;
			}//end nested if
			else
			{
				checked_filename = true;
			}
		}//end check filename
		if (!checked_command)
		{
			if (doMatch(argv[i], "list"))
			{
				args.setCommand(to_list);
				i++;
				checked_command = true;
				continue;
			}//end nested if

			else if (doMatch(argv[i], "do"))
			{
				if (argc != i + 2)
				{
					std::cerr << "[do] can take only one number as argument" << std::endl;
					break;
				}
				args.setCommand(to_do);
				i++;
				checked_command = true;
				continue;
			}//end else if

			else if (doMatch(argv[i],"add"))
			{
				if(argc < i+2)
				{
					std::cerr << "[add] must be followed by at least one character" <<std::endl;
					break;				
				}
				args.setCommand(to_add);
				i++;
				checked_command = true;
				continue;
			}
			else //no command was provided
			{//break out of while loop. no need for further check
				break;
			}
		}//end if check command
		std::string temp;
		for (i; i < argc; i++)
		{
			if (i + 1 == argc) //if last word
			{

				//no space added
				temp += std::string(argv[i]);
				continue;
			}

			//else add word then space character
			temp += std::string(argv[i]) + " ";
		}//end for-loop
		args.setText(temp);
	}//end while
}
///===================ARGUMENT PROCESSOR================================
void Processor(c_Command* com, const c_Arglist& args)
{

	switch (args.getCommand())
	{
	case to_list:
		com = new c_List(args);
		com->process();

		break;
	case to_do:
		com = new c_Do(args);
		com->process();
		break;
	case to_add:
		com = new c_Add(args);
		com->process();
		break;
	default:
		print_USAGE();
		return;
		break;
	}
}
///=========================IS DIGIT===================================
///@@@@@@@@@@@@@@@@@ returns true if x is a digit @@@@@@@@@@@@@@@@@@@@@
///====================================================================
bool isDigit(const char x){
	if (x <'0' || x>'9'){
		return false;
	}
	return true;
}
///========================GET LAST DIGIT POSITION=====================
///@@@@@@@@@@@@@@ returns position of last digit of str @@@@@@@@@@@@@@@
///====================================================================
unsigned int getpos(std::string str){
	unsigned int i = 0;
	
	while (isDigit(str[i])){
		i++;
	}
	return i;
}
///=====================MATCH STRING==================================
///@@@@@@@@@@@@@ returns true if strings match @@@@@@@@@@@@@@@@@@@@@@@
///===================================================================
bool doMatch(const char* st1, const char* st2)
{

	if (sizeof(st1) != sizeof(st2))
	{
		return false;// if different sizes return false
	}
	if (strcmp(st1, st2) != 0)
	{
		return false;
	}
	return true;
}
///===================== GET INTEGER =================================
///@@@@@@@@@@@@@ returns leading positive interger of x @@@@@@@@@@@@@@
///===================================================================
int toInt(std::string x){
	if (x[0] < '0' || x[0] > '9'){
		return -1;
	}
	int i = 0;
	int n = 0;
	while (x[i] >= '0' && x[i] <= '9'){
		x[i] = (char)(x[i] - 48);
		i++;
	}
	int j = 0;
	while (i--){
		n += x[j] * pow(10, i);
		j++;
	}
	return n;
}
