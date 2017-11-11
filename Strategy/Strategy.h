#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <iostream>
using std::cout;
using std::endl;

class Strategy {
    public: 
        Strategy() {}
        virtual ~Strategy() {}
        virtual void Operate(void) { cout << "Strategy Orignal" << endl;}
};

class RealStrategy_1 : public Strategy {
    public:
        RealStrategy_1() {}
        ~RealStrategy_1() {}
       void Operate(void) { cout << "Srategy 1" << endl; }
};

class RealStrategy_2 : public Strategy {
    public:
        RealStrategy_2() {}
        ~RealStrategy_2() {}
        void Operate(void) { cout << "Strategy 2" << endl; } 
};

#endif
