#include <iostream>
#include "Tree.h"



int main()
{
    stu::Set a;
    a.insert(4);
    a.insert(6);
    a.insert(15);
    a.insert(2);
    a.insert(24);
    for(auto i = a.head; i!= nullptr; i = i->m_right)
    {
        std::cout<<i->m_value<<" ";
    }

    return 0;
}
