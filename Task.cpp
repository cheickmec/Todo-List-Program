#include "include/Task.h"

///The Task Class Definitions/////////////////////////////
Task::Task()                                            //
{                                                       //
    //ctor                                              //
}                                                       //
///*****************************************************//
Task::Task(std::string tsk):m_description(tsk){}        //
///*****************************************************//
Task::~Task()                                           //
{                                                       //
    //dtor                                              //
}                                                       //
///*****************************************************//
std::string Task::getTask()                             //
{                                                       //
    return m_description;                               //
}                                                       //
///*****************************************************//
///The Todo CLass Definitions/////////////////////////////
//Constructor                                           //
Todo::Todo(){}                                          //
///*****************************************************//
//adds t to task list                                   //
void Todo::addToList(Task t)                            //
{                                                       //
    m_list.push_back(t);                                //
}                                                       //
///*****************************************************//
//Traverse filename and collect all tasks
void Todo::parse(std::string filename)
{
    std::fstream aFile;
    aFile.open(filename.c_str(), std::fstream::out);
    std::string astr;
    unsigned i =0;
    while(!aFile.eof())
    {
        i++;
        std::getline(aFile,astr);
        if((astr.c_str())[0])
        {
            if(!isFormat(astr)){
                std::cerr<<"Task at line "<<i<<" has wrong format so it was ignored"<<std::endl;
                continue;
            }

            addToList(Task(astr));
            std::cout <<astr<<std::endl;
        }
    }
    if(isEmpty()) std::cout <<"Opened empty file"<<std::endl;
    aFile.close();
}
///**************************************
bool isFormat(std::string str)
{
    unsigned int i = 0;
    const char* temp = str.c_str();
    if(isNumber(temp[0]))
    {
        do {i++;}
        while(isNumber(temp[i]));
        if(str.substr(i,4)==":[ ]" || str.substr(i,4) == ":[X]")
        {
            return true;
        }
    }
    return false;
}
///**************************************
bool Todo::isEmpty()
{
    if(m_list.size()==0) return true;
    return false;
}
bool isNumber(const char n)
{
    //unsigned int x = (int) n;
    if(n < 48 || n >57) return false;
    return true;
}

void process(std::string command, std::string filename, unsigned int argnumb)
{

}
void process_2(std::string command, std::string filename, unsigned int argnumb)
{
}
void process_3(std::string command, std::string filename, unsigned int argnumb)
{
}
void process_4(std::string command, std::string filename, unsigned int argnumb)
{
}
void process_5(std::string command, std::string filename, unsigned int argnumb)
{
}

