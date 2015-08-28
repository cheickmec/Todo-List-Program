#ifndef TASK_H
#define TASK_H
#include<string>
#include<vector>
#include<fstream>
#include <iostream>

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
        void addToList(Task t);
        void parse(std::string filename);
        bool isEmpty();
    private:
        std::vector<Task> m_list; //holds a list of all tasks
};
//Returns true if str has proper format
bool isFormat(std::string str);
bool isNumber(const char n);
void process(std::string command, std::string filename, unsigned int argnumb);
void process_2(std::string command, std::string filename, unsigned int argnumb);
void process_3(std::string command, std::string filename, unsigned int argnumb);
void process_4(std::string command, std::string filename, unsigned int argnumb);
void process_5(std::string command, std::string filename, unsigned int argnumb);
#endif // TASK_H

