#include <iostream>
using UP = int(*)(int);
template <class Iterator, class UP>
bool chet (int a)
{
    return a % 2 == 0;
}
Iterator find_if (Iterator first, Iterator last, UP p)
{
    for(; first < last; ++first)
    {
        if(p(*first)
           {
               return true;
           }
           return false;
    }
}*/

int main()
{
    int array[5] = {1, 2, 2, 4, 5};
    std::cout<<find_if<int*,bool>(0, 5, chet())<<std::endl;*/
    return 0;
}
