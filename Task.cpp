#include "include/Task.h"

///The Task Class Definitions/////////////////////////////////////
Task::Task()                                                    //
{                                                               //
    //ctor                                                      //
}                                                               //
///***************************************************************
Task::Task(std::string tsk):m_description(tsk){}                //
///***************************************************************
Task::~Task()                                                   //
{                                                               //
    //dtor                                                      //
}                                                               //
///***************************************************************
std::string Task::getTask()                                     //
{                                                               //
    return m_description;                                       //
}                                                               //
///***************************************************************
///The Todo CLass Definitions/////////////////////////////////////
//Constructor                                                   //
Todo::Todo(){}                                                  //
///***************************************************************
//adds t to task list                                           //
void Todo::addToList(Task t)                                    //
{                                                               //
    m_list.push_back(t);                                        //
}                                                               //
///***************************************************************
//Traverse filename and collect all tasks
void Todo::parse(std::string filename)
{
    std::fstream aFile;
    aFile.open(filename.c_str(), std::fstream::in);
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
        }
    }
    if(isEmpty()) std::cout <<"Opened new file "<<filename<<std::endl;
    aFile.close();
}
///***************************************************************
bool isDigit(const char x){
 if(x <'0' || x>'9'){
    return false;
 }
 return true;
}
///***************************************************************
unsigned int getpos(std::string str){
    unsigned int i = 0;
    while(isDigit(str[i])){
        i++;
    }
    return i;
}
///***************************************************************
void Todo::rewriteFile(std::string filename)
{
    std::fstream aFile;
    aFile.open(filename.c_str(),std::fstream::out);
    for(unsigned int i = 0; i < m_list.size() ; i++)
    {
        aFile << m_list[i].getTask()<<"\n";
    }
    aFile.close();
}
///**************************************************************
bool Todo::check(std::string str)
{
    std::string st1,st2;
    for(int i = 0; i < m_list.size(); i++)
    {   st1 = m_list[i].getTask().substr(5);
        st2 = m_list[i].getTask().substr(6);
        if(doMatch(st1,str) || doMatch(st2,str)) //if current task matches str
        {
            int pos = m_list[i].getTask().find_first_of(str[0]);
            std::string temp = m_list[i].getTask().substr(0,m_list[i].getTask().find_first_of("[")+1);
            temp+=("X] "+str);
            m_list[i]=temp;

            return true;
        }
    }
    return false;
}
///**************************************************************
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
///***************************************************************
bool Todo::isEmpty()
{
    if(m_list.size()==0) return true;
    return false;
}
///***************************************************************
bool isNumber(const char n)
{
    //unsigned int x = (int) n;
    if(n < 48 || n >57) return false;
    return true;
}
///***************************************************************
void Todo::display()
{
    if(isEmpty()) std::cout<<"To-Do list is empty"<<std::endl;
    for(int i = 0; i < m_list.size(); i++)
    std::cout <<m_list[i].getTask()<<std::endl;
}
///***************************************************************
unsigned int Todo::numb_element()
{
    return m_list.size();
}
///***************************************************************
bool doMatch(std::string st1, std::string st2)
{
    //std::cout<<std::endl<<"****************COMPARISON*****************"<<std::endl;
    //std::cout <<"comparing "<<st1<<" and "<<st2<<std::endl;
    if(st1.size() != st2.size())
    {
        return false;// if different sizes return false
    }
    const char *s1(st1.c_str()), *s2(st2.c_str());
    if(strcmp(s1,s2)!=0)
    {
        return false;
    }
    /*for(unsigned int i = 0; i < sizeof(s1); i++)
    {
        if(s1[i]!=s2[i])
        {
            std::cout<<(int)s1[i]<<" and "<<(int)s2[i]<<" dont match!"<<std::endl;
            return false; //if characters don't match return false
        }
    }*/
    //std::cout<<st1<<" and "<<st2<<" MATCH"<<std::endl;
    return true;
}
///***************************************************************
bool isJustaNumber(std::string str)
{
    if(str.size()==str.substr(0,getpos(str)).size())
    {
        return true;
    }
        return false;
}
