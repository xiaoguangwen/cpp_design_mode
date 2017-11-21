#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <iostream>
#include "Execute.h"

using std::cout;
using std::endl;

class RealExecute_1;
class RealExecute_2;

class Command {
    public:
        Command();
        virtual ~Command();
        virtual void Execute() = 0;

    protected:
       RealExecute_1 *_p_execute_1;
       RealExecute_2 *_p_execute_2;
};

class CommandRealExecute_1 : public Command {
    public:
        CommandRealExecute_1() {};
        ~CommandRealExecute_1() {};
        void Execute();
};

class CommandRealExecute_2 : public Command {
    public:
        CommandRealExecute_2() {};
        ~CommandRealExecute_2() {};
        void Execute();
};

class AcceptCommand {
    public:
        AcceptCommand(){}
        ~AcceptCommand() {}
        void SetCommand(Command *command) { if (NULL != command) { _p_command = command;} }
        void Action() { if(NULL !=_p_command) { _p_command->Execute();} }
            
    private:
        Command *_p_command;        
};

#endif

