#include <iostream>
#include "new_list.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

namespace stu
{
template <class Iter, class UP>
Iter find_if (Iter first, Iter last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}
}

int main()
{
    stu::forward_list<int> l{4,6,3,2,5,4,7,2};
    l.print_dbg();
    std::cout<<std::endl;
    stu::forward_list<int> l2{5,4,7,2};
    l2.print_dbg();
    return 0;
}
