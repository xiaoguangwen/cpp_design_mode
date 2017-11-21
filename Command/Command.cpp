#include <iostream>
#include "Command.h"

Command::Command()
{
    _p_execute_1 = new RealExecute_1;    
    _p_execute_2 = new RealExecute_2;
}

Command::~Command()
{
    delete _p_execute_1;
    delete _p_execute_2;
}

void CommandRealExecute_1::Execute()
{
    this->Command::_p_execute_1->do_something_step_1();    
    this->Command::_p_execute_1->do_something_step_2();
}

void CommandRealExecute_2::Execute()
{
    (*this).Command::_p_execute_2->do_something_step_1();
    (*this).Command::_p_execute_2->do_something_step_2();
}

