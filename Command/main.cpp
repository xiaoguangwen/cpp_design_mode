#include <iostream>
#include "Execute.h"
#include "Command.h"

using std::cout;
using std::endl;

void OldAction()
{
    cout << "----Old Acation----" << endl;

    RealExecute_1 *p_execute_1 = NULL;
    RealExecute_2 *p_execute_2 = NULL;

    p_execute_1 = new RealExecute_1;
    p_execute_2 = new RealExecute_2;
    
    p_execute_1->do_something_step_1();
    p_execute_1->do_something_step_2();    
    
    p_execute_2->do_something_step_1();
    p_execute_2->do_something_step_2();

    delete p_execute_1;
    delete p_execute_2;
}

void NewAction()
{
    cout << "----New Acation----" << endl;

    AcceptCommand ivoker;
    Command *p_command = new CommandRealExecute_1();
    ivoker.SetCommand(p_command);
    ivoker.Action();

    delete p_command;

    p_command = new CommandRealExecute_2();
    ivoker.SetCommand(p_command);
    ivoker.Action();

    delete p_command;
}

int main()
{
    OldAction();
    NewAction();
}

