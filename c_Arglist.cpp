#include "c_Arglist.h"

c_Arglist::c_Arglist()
{
	m_switch = false;
	m_filename = "todo.txt";
	m_commandType = undefined;
	m_text = "";
}

typeOfcommand c_Arglist::getCommand() const
{
	return m_commandType;
}

void c_Arglist::setCommand(typeOfcommand aCommand)
{
	m_commandType = aCommand;
}

std::string c_Arglist::getFilename() const
{
	return m_filename;
}

void c_Arglist::setFilename(std::string name)
{
	m_filename = name;
}

std::string c_Arglist::getText() const
{
	return m_text;
}

void c_Arglist::setText(std::string str)
{
	m_text = str;
}

bool c_Arglist::isOn()const
{
	return m_switch;
}

void c_Arglist::turnSwitchOn()
{
	m_switch = true;
}

c_Arglist::~c_Arglist()
{

}
///===============================TASK CLASS==============================
///-------------------------------default constructor---------------------
c_Task::c_Task()
{
	m_done = false;
}
//Converter constructor
c_Task::c_Task(std::string str)
{
	m_description = str;
}
//sets task description with str
void c_Task::setDescription(std::string str)
{
	m_description = str;
}
//returns task description
std::string c_Task::getDescription() const
{
	return m_description;
}
//set task as done
void c_Task::check()
{
	m_done = true;
}
void c_Task::uncheck()
{
	m_done = false;
}
bool c_Task::isDone()
{
	return m_done;
}
c_Task::~c_Task()
{
	//destructor
}
