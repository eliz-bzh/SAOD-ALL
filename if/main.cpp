#include <iostream>
#include "if.h"


int main()
{
    if_1(-5);
    if_6(3,4);
    if_11(4,5);
    if_12(-2,1,0);
    int res = if_15(2,3,4);
    std::cout<<res<<std::endl;
    return 0;
}
