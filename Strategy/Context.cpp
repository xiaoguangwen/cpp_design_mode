#include <iostream>
#include "Context.h"
#include "Strategy.h"

Context::Context(Strategy *pStrategy)
{
    _m_Strategy = pStrategy;
}

Context::~Context()
{
    if (NULL != _m_Strategy) {
        delete _m_Strategy;
        _m_Strategy = NULL;
    }
}

void Context::Operate(void)
{
    if (_m_Strategy != NULL)
    {
        _m_Strategy->Operate();
    }

    return;
}
