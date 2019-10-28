#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include "alg.h"
#include <algorithm>
#include <iterator>

template<class Iter, class BP>
void insert_sort(Iter first, Iter last, BP p)
{
    for(Iter i = first+1; i!= last; ++i)
    {
        for(Iter j = i; j!=first && p(*j, *(j-1)); --j)
        {
            std::iter_swap(j, j-1);
        }
    }
}
template<class Iter, class BO>
void shell_sort(Iter first, Iter last, BO op)
{
    auto size = std::distance(first, last);
    for(int k = size/2; k>0; k/=2)
    {
        for(Iter i = first+k; i!=last; ++i)
        {
            for(Iter j = i; j>first && op(*j,*(j-k)); --j)
            {
                if(op(*j,*(j-k)))
                {
                    std::iter_swap(j,j-k);
                }
                else
                {
                    *j=0;
                }
            }
        }
    }
}
int main()
{
    srand(time(NULL));
    int n, m;
    std::cout<<"Input n: ";
    std::cin>>n;
    std::cout<<"Input m: ";
    std::cin>>m;
    std::vector<int> rendvec(n);
    std::vector<int> arr2(m);
    stu::random(rendvec.begin(),rendvec.end());
    stu::random(arr2.begin(),arr2.end());
    std::vector<int> arr3;
    arr3.reserve(rendvec.size()+arr2.size());
    arr3.insert(arr3.end(),rendvec.begin(), rendvec.end());
    arr3.insert(arr3.end(),arr2.begin(), arr2.end());
    print_contenier(rendvec.begin(), rendvec.end());
    std::cout<<std::endl;
    print_contenier(arr2.begin(), arr2.end());
    std::cout<<std::endl;
    print_contenier(arr3.begin(), arr3.end());
    std::cout<<std::endl;
    return 0;
}
