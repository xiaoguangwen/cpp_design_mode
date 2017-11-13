#ifndef _HUMANFACTORY_H_
#define _HUMANFACTORY_H_

#include <iostream>
#include "Human.h"
using std::cout;
using std::endl;

class HumanFactory {
    public:
        HumanFactory() {}
	virtual ~HumanFactory() {}
        virtual Human* CreateHuman(void) = 0;
};

class EastHumanFactory : public HumanFactory {
    public:
	EastHumanFactory() { cout << "Create EastHumanFactory" << endl; }
        ~EastHumanFactory() { cout << "Destory EastHumanFactory" << endl; } 
        Human* CreateHuman(void) {return new EastHuman;} 
};

class WestHumanFactory : public HumanFactory {
    public:
        WestHumanFactory() { cout << "Create WestHumanFactory" << endl; }
        ~WestHumanFactory() { cout << "Destory WestHumanFactory" << endl; }
        Human* CreateHuman(void) {return new WestHuman;} 
};

#endif
