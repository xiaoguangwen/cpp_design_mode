#include <iostream>
#include "Observer.h"
#include "Monitored.h"

int main()
{
    Observer *p_a_observer = new A_Observer("A observer");
    Observer *p_b_observer = new B_Observer("B observer");
    Monitored *p_monitored = new RealMonitored("Monitored");
    
    p_monitored->AddObserver(p_a_observer);
    p_monitored->NotifyObserver("First Update");

    p_monitored->DeleteObserver(p_a_observer);
    
    p_monitored->AddObserver(p_b_observer);   
    p_monitored->NotifyObserver("Second Update");
    
    delete p_monitored;
    delete p_b_observer;
    delete p_a_observer;
}

