#include <iostream>
#include "Proxy.h"

using std::cout;
using std::endl;

int main ()
{
   ProxyInterface *p_interface = new ProxyInterface(new BeProxyed_1);
   p_interface->ProxyOperate1();
   p_interface->ProxyOperate2();
   delete p_interface;

   p_interface = new ProxyInterface(new BeProxyed_2);
   p_interface->ProxyOperate1();
   p_interface->ProxyOperate2();
   delete p_interface;
  
   return 0; 
}
