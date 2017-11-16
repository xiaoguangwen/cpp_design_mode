#include <iostream>
#include "Monitored.h"
#include "Observer.h"

using std::endl;
using std::cout;
using std::string;

RealMonitored::RealMonitored(string name) : m_name(name) { }

RealMonitored::~RealMonitored() {

    ObserverIter iter = m_ObserverList.begin();
    ObserverIter iter_temp;    

    for(iter; iter != m_ObserverList.end();) {
        iter_temp = iter;
        m_ObserverList.erase(iter++);
        //delete *iter_temp;
    }
}

void RealMonitored::AddObserver(Observer *p_observer) { 
    
    if (NULL == p_observer) {
        cout << "add null observer" << endl;
        return;
    }
   
    cout << "Add Observer name:" << p_observer->GetName() << endl;
 
    m_ObserverList.push_back(p_observer);
   
    return;
}

void RealMonitored::DeleteObserver(Observer *p_observer) {    
    //ObserverIter iter = m_observerList.begin();
    //ObserverIter iter_temp
    
    if (NULL == p_observer) {
        cout << "del null observer" << endl;
        return;
    }    

    cout << "Del Observer name:" << p_observer->GetName() << endl;    

    m_ObserverList.remove(p_observer);
    //delete p_observe
    return;
}

void RealMonitored::NotifyObserver(string context) {

    ObserverIter iter = m_ObserverList.begin();
    
    for(iter; iter != m_ObserverList.end(); iter++) {
        (*iter)->Update(context);
    }
    
   return;
}
