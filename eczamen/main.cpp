#include <iostream>
#include <algorithm>
int pow(int a, int n)
{
    int res = 1;
    for(int i = 0; i<n; ++i)
    {
        res*=a;
    }
    return res;
}

int powr(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }
    return a*pow(a,n-1);
}

void hello(int n)
{
    if(n == 0)
    {
        return;
    }
    std::cout<<"Hello  ";
    hello(n-1);
}

int factorial(int a)
{
    int res = 1;
    for(int i = 2; i<=a; ++i)
    {
        res*= i;
    }
    return res;
}

void fiborachi(int* array, int size)
{
    array[0] = 0;
    std::cout<< array[0] << " ";
    array[1] = 1;
    std::cout<< array[1] << " ";
    for(int i = 2; i!= size; ++i)
    {
        array[i] = array[i-1] + array [i-2];
        std::cout<< array[i] << " ";
    }
}

int sum(int a)
{
    int res = 0;
    for(int i=a; i!= 0; i/=10)
    {
        res+= i%10;
    }
    return res;
}

int reserse(int v)
{
    int res = 0;
    for(;v!=0;v/=10)
    {
        res*=10;
        res+=v%10;
    }
    return res;
}

bool is_palindrom(int v)
{
    return v == reserse(v);
}

template<class Iter>
int min_el(Iter first, Iter last)
{
    int min_el = *first;
    for(; first!=last; ++first)
    {
        if(min_el > *first)
        {
            min_el = *first;
        }
    }
    return min_el;
}

template<class Iter>
int max_el(Iter first, Iter last)
{
    int max_el = *first;
    for(; first!=last; ++first)
    {
        if(max_el < *first)
        {
            max_el = *first;
        }
    }
    return max_el;
}

template<class Iter, class UP>
int even(Iter first, Iter last, UP p)
{
    int res = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            res += *first;
        }
    }
    return res;
}

template<class T>
bool even(T a, int n)
{
    return a % n == 0;
}

template<class Iter>
void bubble_sort(Iter first, Iter last)
{
    for(Iter i = first; i != last; ++i)
    {
        for(Iter j = first; j != last-1; ++j)
        {
            if(*(j+1) > *j)
            {
                std::swap(*j,*(j+1));
            }
        }
    }
    for(; first!= last; ++first)
    {
        std::cout<<*first<<" ";
    }
}

int binary_search(int* array, int size, int key)
{
    int start = 0;
    int end = size-1;
    int el;
    while(start < end)
    {
        el = (start + end)/2;
        if(key > array[el])
        {
            start = el+1;
        }
        if(key < array[el])
        {
            end = el-1;
        }
        if(key == array[el])
        {
            return el;
        }
    }
    return -1;
}
int main()
{
    /*std::cout<<pow(2,2)<<std::endl;
    std::cout<<powr(2,3)<<std::endl;
    hello(4);
    std::cout<<factorial(5)<<std::endl;
    int array[] = {};
    fiborachi(array,5);
    std::cout<<std::endl;*/
    std::cout<<sum(1111)<<std::endl;
   /* std::cout<<is_palindrom(123)<<std::endl;
    int arr [6] = {1,2,5,8,-1,3};
    /*std::cout<<min_el(arr, arr+6)<<std::endl;
    std::cout<<max_el(arr, arr+6)<<std::endl;
    std::cout<<even(arr, arr+6, [](int a){return a%2 == 0;})<<std::endl;
    std::cout<<even(4, 2)<<std::endl;
    bubble_sort(arr, arr+6);
    int arr1 [6] = {1,2,5,6,7,8};
    std::cout<<binary_search(arr1, 6, 3);*/
    return 0;
}
