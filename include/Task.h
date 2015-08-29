#ifndef TASK_H
#define TASK_H
#include<string>
#include<vector>
#include<fstream>
#include <iostream>
#include <cstring>

class Task
{
    public:
        Task();
        Task(std::string tsk);
        virtual ~Task();
        std::string getTask();
    private:
        std::string m_description;
};

class Todo
{
    public:
        Todo();
        unsigned int size(){return m_list.size();}
        Task& operator[](unsigned int pos){return m_list[pos];}
        unsigned int numb_element();
        void addToList(Task t);
        void parse(std::string filename);
        bool isEmpty();
        void display();
        void rewriteFile(std::string filename);
        bool check(std::string str);
    private:
        std::vector<Task> m_list; //holds a list of all tasks
};
bool isFormat(std::string str);
bool isNumber(const char n);
bool isNumber(std::string str);
bool doMatch(std::string st1, std::string st2);
bool isDigit(const char x);
unsigned int getpos(std::string str);
bool isJustaNumber(std::string str);
#endif // TASK_H

