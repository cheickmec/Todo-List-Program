#ifndef PROG_H
#define PROG_H

#include "c_command.h"

class Program
{
    private:
        c_Arglist m_arguments;
        c_Command* m_command;

    public:
        Program();
        Program(int argc, char** argv);

};

#endif
