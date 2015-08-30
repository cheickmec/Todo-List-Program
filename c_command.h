#ifndef COMMAND_H
#define COMMAND_H
#include <fstream>
#include "c_Arglist.h"
#include <vector>

///-------------------------COMMAND------------------------------
class c_Command
{
private:

	std::fstream m_File;
	bool isEmpty();
	bool isFormat(std::string str);
public:
	c_Command();
	c_Command(c_Arglist args);
	virtual void process() = 0;
	void set_arglist(c_Arglist aList);
	virtual ~c_Command();
protected:
	std::vector <c_Task> m_TaskList;
	void parseFile();
	void updateFile();
	void displayList();
	void checkGivenTask();
	c_Arglist m_arglist;
};
///-------------------------LIST (COMMAND)------------------------
class  c_List : public c_Command
{
private:
protected:
public:
	c_List(c_Arglist args);
	void process();
	virtual ~c_List();

};
///---------------------ADD (COMMAND)-------------------------
class c_Add : public c_Command
{
private:
protected:
public:
	c_Add(c_Arglist args);
	void process();
	~c_Add();
};
///------------------------DO (COMMAND)-----------------------
class c_Do : public c_Command
{
private:
protected:
public:
	c_Do(c_Arglist args);
	void process();
	~c_Do();
};
///========================UTILIES========================
//initializes argument list
void initArguments(int argc, char* argv[], c_Arglist& args);
//Determines which command to be used
void Processor(c_Command* com, const c_Arglist& args);
//returns true if x is a digit
bool isDigit(const char x);
//returns position of last digit in str
unsigned int getpos(std::string str);
//returns true if strings match
bool doMatch(const char* st1, const char* st2);
//returns value of leading positive integer
//if there are no leading integer, returns -1
int toInt(std::string x);
#endif // COMMAND_H
