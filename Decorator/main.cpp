#include <iostream>
#include "Phone.h"

using std::cout;
using std::endl;

int main()
{
    NokiaPhone *p_phone = new NokiaPhone("7120");
    A_DecoratePhone *a_decorate = new A_DecoratePhone(p_phone);
    B_DecoratePhone *b_decorate = new B_DecoratePhone(a_decorate);
   
    b_decorate->ShowDecorate();
    
    delete p_phone;
    delete a_decorate;
    delete b_decorate;

    IPhone *p2_phone = new IPhone("4 generation"); 
    a_decorate = new A_DecoratePhone(p2_phone);
    b_decorate = new B_DecoratePhone(a_decorate);

    b_decorate->ShowDecorate();
    
    delete p2_phone;
    delete a_decorate;
    delete b_decorate;
}

