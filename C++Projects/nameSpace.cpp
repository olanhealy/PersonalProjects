#include <iostream>

namespace first {
    int x = 1;
}
namespace second{
    int x = 2;
}


int main() {
    //using namespace first;
   // std::cout << second::x; this will allows print 1 as uses first namespace
   
 /*
 NameSpace: provides solution for preventing name conflicts
 in larger proejcts. Each entity needs a unique name. A 
 namespace allows for identically named entities as long as the namespaces
 are different.
 */
 int x = 0;
 //std::cout << x; just prints 0 (namespace not used)
 //std::cout << first::x;  prints 1 (uses first namespace)
 //std::cout << second::x; prints 2 (usues second namespace)







    return 0;

}