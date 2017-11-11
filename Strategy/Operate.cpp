#include <iostream>
#include "Strategy.h"
#include "Context.h"

using std::cout;
using std::endl;

int main ()
{
    Context *pContext = NULL;
    //Strategy *pStrategy = new Strategy;
   
    pContext = new Context(new Strategy());
    pContext->Operate();
    delete pContext;

    pContext = new Context(new RealStrategy_1());
    pContext->Operate(); 
    delete pContext;
  
    pContext = new Context(new RealStrategy_2());
    pContext->Operate();
    delete pContext;
    
    return 0;
}

