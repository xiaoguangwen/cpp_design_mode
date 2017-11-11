#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <iostream>
#include "Strategy.h"
using std::cout;
using std::endl;

class Context {
    public:
	Context(Strategy *pStrategy);
        ~Context();
        void Operate(void);
    
    private:    
       Strategy *_m_Strategy;
};

#endif
