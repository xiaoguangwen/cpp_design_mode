#include <iostream>
#include "Emperor.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Emperor *pEmperor1 = Emperor::GetInstance();
    pEmperor1->SetEmperorTag("Go on !!!");
    pEmperor1->EmperorInfo();
    
    Emperor *pEmperor2 = Emperor::GetInstance();   
    pEmperor2->EmperorInfo();
    pEmperor2->SetEmperorTag("Are you OK???");
    pEmperor2->EmperorInfo();
    
    Emperor::ReleaseInstance();
    return 0;
}
