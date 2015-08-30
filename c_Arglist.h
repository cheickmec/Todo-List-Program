#ifndef ARGLIST_H
#define ARGLIST_H
#include <string>
#include <iostream>
#include <cmath>
#include <cstring>
//#define __LINE__ __LINE__<<" in file "<<__FILE__

enum typeOfcommand{
	to_list = 0,
	to_add = 1,
	to_do = 2,
	undefined = 3
};
class c_Task
{
private:
	std::string m_description;
	bool m_done;
protected:
public:
	c_Task();
	c_Task(std::string str);
	void setDescription(std::string str);
	std::string getDescription() const;
	void check();
	void uncheck();
	bool isDone();
	~c_Task();
};
class c_Arglist{

private:
	//if switch is true, next argument is text file name
	//else, default filename is used
	bool m_switch;
	//default filename is "todo.txt"
	std::string m_filename;
	//commandType is undefined by default
	typeOfcommand m_commandType;
	//text is nullpointer by default
	std::string m_text;

public:
	//Constructor
	c_Arglist();
	//Returns type of the command
	typeOfcommand getCommand() const;
	//sets command type
	void setCommand(typeOfcommand aCommand);
	//returns filename
	std::string getFilename() const;
	//sets filename
	void setFilename(std::string name);
	//returns text
	std::string getText() const;
	//sets text value
	void setText(std::string str);
	//returns true if -f switch is set
	bool isOn()const;
	//sets -f switch on
	void turnSwitchOn();
	//Destructor
	~c_Arglist();
protected:

};
void print_USAGE();
#endif // ARGLIST_H
