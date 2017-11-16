#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Observer {
    public:
        Observer(string name): m_name(name) {}
        virtual ~Observer() {};
        virtual void Update(string context) = 0;
        const string & GetName() { return m_name;}
    
    private:
        string m_name;
};

class A_Observer : public Observer {
    public:
	A_Observer(string name);
        ~A_Observer();
        void Update(string context);
    
    private:
       //string m_name;
       void A_Get();
};

class B_Observer : public Observer {
    public:   
	B_Observer(string name);
        ~B_Observer();
        void Update(string context);
    
    private:
       //string m_name;
       void B_Get();
};

#endif
