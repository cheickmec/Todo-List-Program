
#include "include/Task.h"
#include <sstream>

void print_usage();
std::string command;
std::string filename = "todo.txt";
std::vector<std::string> arglist;
int main(int argc, char** argv)
{

    if(argc < 2)
    {

        return 0;
    }
    for(int i = 0; i < argc ; i++)
    {

        arglist.push_back(std::string(argv[i]));
    }

    //retrieve filename if possible
    if(arglist[1]=="-f")
    {
        if(argc == 2) //if only -f was provided
        {

            return 0;
        }

        filename = arglist[2];
    }
    Todo theList;
    theList.parse(filename);
    //if command list: (todo list) or (todo -f filename list)
    if(argc > 1 && argc < 5)
    {
        if(arglist[1]=="list" && argc >2) //if todo list ...
        {
       
	    print_usage();
            return 0;
        }
        else if(argc == 2)
        {
            if(arglist[1]!="list") // if todo <not-list>
            {
                print_usage();
                return 0;
            }
            else //if todo list
            {
                theList.display();

                return 0;
            }
        }
        else if(argc == 4)//if 4 arguments: todo -f filename list
        {
            if(arglist[3]=="list") //if (todo -f filename list)
            {
            theList.display();
            return 0;
            }
        }
    }
    //if add or do command
    if(argc >=3) //if (todo ... ...)
    {
        if(arglist[1]=="add") //if todo add "..."
        {
            unsigned int next_entry = theList.numb_element() + 1;
            std::stringstream num_buf;
            num_buf << next_entry;
            std::string str = std::string(num_buf.str());
            str+=":[ ] ";
            for(unsigned int i = 2 ; i < arglist.size(); i++)
            {
                str += arglist[i]+" ";
            }
            theList.addToList(Task(str));
            theList.rewriteFile(filename);

            return 0;
        }
        else if(arglist[1]=="do") //if todo do "..."
            {
                if(argc == 3 && isJustaNumber(arglist[2]))
                {
                    std::string number = arglist[2].substr(0,getpos(arglist[2]));
                    for(unsigned int i = 0; i < theList.size(); i++)
                    {
                        if (doMatch(number,theList[i].getTask().substr(0,getpos(theList[i].getTask()))))
                        {
                            std::string oldString = theList[i].getTask();

                            std::string newString = oldString.substr(oldString.find_first_of(" ")+3);

                            std::string temp = number+":[X] "+newString;
                            theList[i] = temp;

                            theList.rewriteFile(filename);
                            return 0;
                        }
                    }
                }
                std::string tobechecked;
                for(unsigned int i = 2; i < arglist.size(); i++)
                {
                    tobechecked+=arglist[i]+" ";
                }
                if(!theList.check(tobechecked))
                {
                    std::cout <<"Sorry! This task does not exist in your todo list"<<std::endl;
                    return 0;
                }
                theList.rewriteFile(filename);
                return 0;

            }
        else if(argc >= 5 && arglist[3]=="add")// if todo -f filename add "..."
        {
            unsigned int next_entry = theList.numb_element() + 1;
            std::stringstream num_buf;
            num_buf << next_entry;
            std::string str = std::string(num_buf.str());
            str+=":[ ] ";
            for(unsigned int i = 4 ; i < arglist.size(); i++)
            {
                str += arglist[i]+" ";
            }
            theList.addToList(Task(str));
            theList.rewriteFile(filename);

            return 0;
        }
        else if(argc >= 5 && arglist[3]=="do")// if todo -f filename do "..."
            {
            if(argc == 5 && isJustaNumber(arglist[4]))
            {
                std::string number = arglist[4].substr(0,getpos(arglist[4]));
                    for(unsigned int i = 0; i < theList.size(); i++)
                    {
                        if (doMatch(number,theList[i].getTask().substr(0,getpos(theList[i].getTask()))))
                        {
                            std::string oldString = theList[i].getTask();
                            std::string newString = oldString.substr(oldString.find_first_of(" ")+3);
                            std::string temp = number+":[X] "+newString;
                            theList[i] = temp;
                            theList.rewriteFile(filename);
                            return 0;
                        }
                    }
            }
           	std::string tobechecked;
                for(unsigned int i = 4; i < arglist.size(); i++)
                {
                    tobechecked+=arglist[i]+" ";
                }
                if(!theList.check(tobechecked))
                {
                    std::cout <<"Sorry! This task does not exist in your todo list"<<std::endl;
                    return 0;
                }
                theList.rewriteFile(filename);

                return 0;
            }
    }
    
    print_usage();
	return 0;
}

void print_usage()
{
    std::cerr<<"USAGE: todo [-f] command [text for commands (add) or (do)]"<<std::endl;
}
