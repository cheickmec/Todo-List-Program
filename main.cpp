
#include "include/Task.h"

void process(std::string command, std::string filename);
std::string command;
std::string filename = "todo.txt";
std::vector<std::string> arglist;
int main(int argc, char** argv)
{
    if(argc < 2)
    for(int i = 0; i < argc ; i++)
    {
        arglist.push_back(std::string(argv[i]));
    }
    
    Todo theList;
    theList.parse("todo1.txt");

	return 0;
}
void process (std::string command, std::string filename)
{

}
