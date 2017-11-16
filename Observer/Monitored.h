#ifndef _MONITORED_H_
#define _MONITORED_H_

#include <iostream>
#include <list>

#include "Observer.h"

using std::cout;
using std::endl;
using std::string;
using std::list;

class Monitored {
    public:
    	Monitored() {}
        virtual ~Monitored() {}
        virtual void AddObserver(Observer *p_observer) = 0 ;
        virtual void DeleteObserver(Observer *p_observer) = 0;
        virtual void NotifyObserver(string context) = 0;
};

class RealMonitored : public Monitored {
    public:
        RealMonitored(string name);
        ~RealMonitored();
        void AddObserver(Observer *p_observer);
        void DeleteObserver(Observer *p_observer);
        void NotifyObserver(string context);

    private:
        string m_name;
  	    list<Observer *> m_ObserverList;
        typedef list<Observer *>::iterator ObserverIter;
};

#endif
