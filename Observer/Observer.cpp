#include <iostream>
#include "Observer.h"

using std::cout;
using std::endl;
using std::string;

A_Observer::A_Observer(string name) : Observer(name) {}

A_Observer::~A_Observer() {}

void A_Observer::Update(string context) {
    
    cout << GetName() << " get context for Monitored, context:" << context << endl;
    
    this->A_Get(); 
    
    return;
}

void A_Observer::A_Get() {
    cout << "A Observer get me five" << endl;
}


B_Observer::B_Observer(string name) : Observer(name) {}

B_Observer::~B_Observer() {}

void B_Observer::Update(string context) {

    cout << GetName() << " get context for Monitored, context:" << context << endl;
    
    this->B_Get();
   
    return;
}

void B_Observer::B_Get() {
    cout << "B Observer get me five" << endl;
}

