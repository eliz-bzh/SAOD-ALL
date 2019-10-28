#include <iostream>
#include <cmath>
#include <stdlib.h>
template<class Iterator>
void mass(Iterator first, Iterator last)
{
    for(; first!=last;  ++first)
    {
        *first=rand()/1000;
        std::cout<<*first<<" ";
    }
}
void f (int*arr, int first, int last)
{
    for(; first<last; ++first)
    {
        arr[first]=rand()/1000;
        std::cout<<arr[first]<<" ";
    }
}
int main()
{
    int arr[7] = {};
    //mass<int>(0,5);
    //f(arr,0,7);
    int* first = new int(0);
    int* last = new int(6);
    mass<int*>(first, last);
    return 0;
}
