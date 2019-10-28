#ifndef ARRAYS_H_INCLUDED
#define ARRAYS_H_INCLUDED
#include <iostream>
#include<algorithm>
//array1-array37
bool is_even(int a, int n)
{
    return a%n==0;
}

template<class Iter>
void f_10(Iter first, Iter last)
{
    std::for_each(first,last,[](int v){if(v%2==0){std::cout<<v<<" ";}});
    std::reverse(first, last);
    std::for_each(first,last,[](int v){if(v%2!=0){std::cout<<v<<" ";}});
}

/*void print_matrix(int**m)
{
    for(auto i = m.begin();i!=m.end(); ++i)
    {
        for(auto j=(*i).begin(); j!=i->end(); ++j)
        {
            std::cout<<*j<<" ";
        }
        std::cout<<std::endl;
    }
}*/

template<class Matrix>
void fill_matrix(Matrix m, int column, int row)
{
    for(int i=0; i!=column; ++i)
    {
        for(int j=0; j!=row; ++j)
        {
            std::cout<<m[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}





#endif // ARRAYS_H_INCLUDED
