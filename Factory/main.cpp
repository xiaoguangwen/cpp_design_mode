#include <iostream>
#include "Human.h"
#include "HumanFactory.h"

void DoFactoryMothodEast(void)
{
    Human *p_human = NULL;
    HumanFactory *p_humanfactory = NULL;

    p_humanfactory = new EastHumanFactory();
    p_human = p_humanfactory->CreateHuman();
    p_human->dining();
    p_human->bathing();

    delete p_human;
    delete p_humanfactory;
}

void DoFactoryMothodWest(void)
{
    Human *p_human = NULL;
    HumanFactory *p_humanfactory = NULL;

    p_humanfactory = new WestHumanFactory();
    p_human = p_humanfactory->CreateHuman();
    p_human->dining();
    p_human->bathing();

    delete p_human;
    delete p_humanfactory;
}

int main ()
{
    DoFactoryMothodEast();
    DoFactoryMothodWest();
}
