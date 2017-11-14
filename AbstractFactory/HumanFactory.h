#ifndef _HUMANFACTORY_H_
#define _HUMANFACTORY_H_

#include <iostream>
#include "Human.h"
using std::cout;
using std::endl;

template<class Base, class Derive>
class HumanFactory {
    public:
        HumanFactory() { cout << "Create HumanFactory" << endl; }
        ~HumanFactory() { cout << "Destory HumanFactory" << endl; }
        Base* CreateHuman(void) {return new Derive;}
};

#if 0
template<class Base>
class HumanFactory {
    public:
        HumanFactory() {}
	virtual ~HumanFactory() {}
        virtual Base* CreateHuman(void) = 0;
};

template<class Base, class Derive>
class EastHumanFactory : public HumanFactory <Base>{
    public:
	EastHumanFactory() { cout << "Create EastHumanFactory" << endl; }
        ~EastHumanFactory() { cout << "Destory EastHumanFactory" << endl; } 
        Base* CreateHuman(void) {return new Derive;} 
};

template<class Base, class Derive>
class WestHumanFactory : public HumanFactory<Base> {
    public:
        WestHumanFactory() { cout << "Create WestHumanFactory" << endl; }
        ~WestHumanFactory() { cout << "Destory WestHumanFactory" << endl; }
        Base* CreateHuman(void) {return new Derive;} 
};
#endif
#endif
