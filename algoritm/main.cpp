#include <iostream>
#include <stdlib.h>
/*void array_(int*array,int size)
{
    for(int i=0; i<size; ++i)
    {
        array[i]=rand()/1000;
        std::cout<<array[i]<<" ";
    }
}*/
template<class Iter, class BP>
void bouble_sort(Iter first, Iter last, BP p)
{
    int times=0;
    std::size_t size = last-first;
    for(int i=0; i!=size-1; ++i)
    {
        for(Iter j=first; j!=last-1-i;++j)
        {
            ++times;
            if(*p(*j,*(j+1)))
            {
                std::iter_swap(j, j+1);
            }
        }
    }
    return times;
}
int binary_search(int*array,int size, int key)
{
    int start=0;
    int end=size-1;
    int m;
    while(start<end)
    {
        m = (start+end)/2;
        if(array[m] == key)
        {
            return m;
        }
        if(array[m] < key)
        {
            start = m + 1;
        }
        if(array[m] > key)
        {
            end = m - 1;
        }
    }
    return -1;
}
int* f(int* first, int* last, int key)
{
    for(; first != last; ++first)
    {
        if(*first = key)
        {
            return first;
        }
    }
    return last;
}
template<class Iterator, class UP>;
bool all_of(Irerator first, Iterator last, UP p)
{
    for(; first<last; ++first)
    {
        if(p(*first))
        {
            return false;
        }
    }
    return true;
}
template<class Iterator, class BP >
bool binary_all_of(Iterator first, Iterator last, UP p)
{
    --last;
    for(; first<last; ++first)
    {
        if(!p(*first,(*first+1)))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int array [7]={1,2,3,4,5,6,7};
//    array_(array,20);
    std::cout <<binary_search(array,7,9)<<std::endl;
    return 0;
}
