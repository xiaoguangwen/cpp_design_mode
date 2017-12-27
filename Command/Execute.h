#ifndef _EXECUTE_H_
#define _EXECUTE_H_

#include <iostream>

using std::cout;
using std::endl;

class Execute {
    public:
        Execute() {}
        virtual ~Execute() {};
        virtual void do_something_step_1() = 0;
        virtual void do_something_step_2() = 0;
};

class RealExecute_1 : public Execute {
    public:
        RealExecute_1() {}
        ~RealExecute_1() {}
        void do_something_step_1() { cout << "RealExecute_1 , do_something_step_1" << endl; }
        void do_something_step_2() { cout << "RealExecute_1 , do_something_step_2" << endl; }
};


class RealExecute_2 : public Execute {
    public:
        RealExecute_2() {}
        ~RealExecute_2() {}
        void do_something_step_1() { cout << "RealExecute_2 , do_something_step_1" << endl; }
        void do_something_step_2() { cout << "RealExecute_2 , do_something_step_2" << endl; }
};

#endif

