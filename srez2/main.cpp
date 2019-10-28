#include <iostream>
#include "14.11.h"
int pow(int a, int p)
{
    int temp=1;
    for(int i=0; i<p; ++i)
    {
        temp*=a;
    }
    return temp;
}
int fact(int a)
{
    int temp=1;
    for(int i =2; i<=a; ++i)
    {
        temp*=i;
    }
    return temp;
}
int sum_num(int a)
{
    int temp=0;
    for(; a!=0; a/=10)
    {
        temp+=a%10;
    }
    return temp;
}
int sum_num2(int a)
{
    int temp=0;
    for(; a!=0; a/=10)
    {
        ++temp;
    }
    return temp;
}
int sum_num3(int a)
{
    int temp=0;
    for(; a!=0; a/=10)
    {
        if(a%10==2)
        ++temp;
    }
    return temp;
}
bool only_1(int a)
{
    for(; a!=0; a/=10)
    {
        if(a%10!=1)
        {
            return false;
        }
    }
    return true;
}
bool f(int a)
{
    for(; a!=0; a/=10)
    {
        if(a%10<=3)
        {
            return false;
        }
    }
    return true;
}
void swap(int&a, int&b) // по ссылкам swap
{
    int temp=a;
    a=b;
    b=temp;
}
template<class Iter>
void swap_ranges(Iter first1, Iter last, Iter first2) //swap массивов по указателю
{
    for(;first1!=last; ++first1, ++first2)
    {
        swap(*first1,*first2);
    }
}
template<class Iter>
Iter min_element(Iter first, Iter last)
{
    Iter temp=first++;
    for(; first!=last; ++first)
    {
        if(*temp>*first)
        {
           temp=first;
        }
    }
    return temp;
}
template<class Iter>
Iter max_element(Iter first, Iter last)
{
    Iter temp=first++;
    for(; first!=last; ++first)
    {
        if(*temp<*first)
        {
           temp=first;
        }
    }
    return temp;
}
void fiborachi(int n)
{
    int temp=0;
    int temp1=1;
    int fn=0;
    for(int i=0; i<n; ++i)
    {
        fn = temp+temp1;
        std::cout<< fn << " ";
        temp = temp1;
        temp1 = fn;

    }
}
/*template <class Iter>
auto min_el(Iter firsr, Iter last)
{
    auto min=*first++;
    for(; firsr!=last;++first)
    {
        if(*min>*first)
        {
            *min = *first;
        }
    }
    return min;
}*/
template <class Iter, class UP>
UP for_each(Iter first, Iter last, UP p)
{
    for(; first!=last; ++first)
    {
        p(*first);
    }
    return p;
}
template<class Iter>
void bubble_sort(Iter first, Iter last)
{
    int size=last-first;
    --last;
    for(int i=0; i!=size; ++i)
    {
        for(Iter j = first; j!= last; ++j)
        {
            if(*j>*(j+1))
            {
                std::iter_swap(j,j+1);
            }
        }
    }
}
unsigned int f_1(char* str)
{
    int temp=0;
    for(;*str;++str)
    {
        if(is_vowe(*str))
        {
            ++temp;
        }
    }
}

void strcopy(char* first, char* first_d)
{
    while(*first_d++==*first++)
    {
        ++first_d;
        ++first;
    }
    *first_d=0;
}

int main()
{
    char* str = "Hello world";
    char str1[12];
    strcopy(str,str1);
   /*std::cout<<pow(2,3)<<std::endl;
   std::cout<<fact(3)<<std::endl;
   std::cout<<sum_num(91)<<std::endl;
   std::cout<<sum_num2(91)<<std::endl;
   std::cout<<sum_num3(923)<<std::endl;
   std::cout<<only_1(913)<<std::endl;
   fiborachi(6);
   std::cout<<std::endl;*/
   int arr[10]={1,2,3,5,7,4,8,0,6,8};
  /* std::cout<< *min_element(arr,arr+10)<<std::endl;
   std::cout<< min_el(arr, arr+10)<<std::endl;*/
   Sum<int> t = for_each(arr, arr+10, Sum<int>());
   t(10);
   std::cout<< t.m_sum;
   return 0;
}
