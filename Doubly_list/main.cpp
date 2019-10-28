#include <iostream>
#include <random>
#include "List.h"

int main()
{
    list<int> a {2,-6,-1,0,4};
    list<int> b {1,9,8,1};
    list<int> c;
    c = a+b;
    c.sort_new();
    c.print(c.begin(), c.end());
    return 0;
}
