#include <iostream>
#include "Human.h"
#include "HumanFactory.h"

template<class Base, class Derive>
void DoFactoryMothod(void)
{
    Base *p_human = NULL;
    HumanFactory<Base, Derive>  *p_humanfactory = NULL;

    p_humanfactory = new HumanFactory<Base, Derive>();
    p_human = p_humanfactory->CreateHuman();
    p_human->dining();
    p_human->bathing();
    p_human->nationality();

    delete p_human;
    delete p_humanfactory;
}

int main ()
{
    DoFactoryMothod<EastHuman, ChineseEastHuman>();
    DoFactoryMothod<EastHuman, JapaneseEastHuman>();
    DoFactoryMothod<WestHuman, AmericanWestHuman>();   
    DoFactoryMothod<WestHuman, EnglishmanWestHuman>();

    return 0;
}
