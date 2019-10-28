#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#define sum(a,b) (a)+(b)
#define print (f, 1) for_each(f ,1)
#include <vector>
void task_1 (int* array,int* array_2, int size_1, int size_2)
{
    int counter_1 = 0;
    for (int i = 0; i != size_1; ++i)
    {
        if(array[i] % 3 == 0)
        {
            ++counter_1;
        }
    }
    int counter_2 = 0;
    for (int i = 0; i != size_2; ++i)
    {
        if(array_2[i] % 3 == 0)
        {
            ++counter_2;
        }
    }
    if (counter_1 > counter_2)
    {
        for(int i = 0; i < size_1; ++i)
        {
            std::cout << array[i] <<" ";
        }
    }
    else
    {
        for(int i = 0; i < size_2; ++i)
        {
            std::cout << array_2[i] <<" ";
        }
    }
    std::cout<<std::endl;
}
/*
int binary_search(int*array,int size)
{
    int start=0;
    int end=size-1;
    int m = (start+end)/2;
    int couter = 0;
    int m_c = m;
    int end1 = end;
    int end2 = end-m_c;
    int end2_2 = end;
    int start2=m_c+1;
    while(start<=end2)
    {
    	if(end1==2)
        {
            end1-=1;
        }
        m = (start+end1)/2;
        if(array[m] % 3 == 0)
        {
            ++couter;
        }
        if(m==start)
        {
            while(start2<=end2_2)
            {
                if(array[start2] % 3 == 0)
                {
                    ++couter;
                }
                start2+=1;
            }
            return couter;

        }
        end1=m+1;
        --end2;
    }
}*/
int binary_search(int*array,int size)
{
    int start=0;
    int end=size-1;
    int m = (start+end)/2;
    int couter = 0;
    int m_c = m;
    int end1 = end;
    int end2 = end-m_c;
    int end2_2 = end-m_c;
    int start2 = m_c+1;
    int i=0;
    while(i<=end2+1)
    {
        m = (start+end1)/2;
        if(array[m] % 3 == 0)
        {
            ++couter;
        }
        end1=m+1;
        if(end1==2)
        {
            end1-=1;
        }
        if(m==start)
        {
            while(start2<=end2_2)
            {
                start2=m_c+1;
                if(array[start2] % 3 == 0)
                {
                    ++couter;
                }
                m_c+=1;
            }
        }
        ++i;
    }

    /* int array1[m];
    for(int i=0; i<m; ++i)
    {
     std::cout<<array1[i]<<" ";
    }
    /* if(array[m] < key)
    {
     start = m + 1;
    }
    if(array[m] > key)
    {
     end = m - 1;
    }
    }*/
    return couter;
}
/*int** start (int n, int m)
{
    int **A;
    A = new int *[n];
    for(int i = 0; i < n; ++i)
    {
        A[i] = new int [m];
    }
    return A;
}

void initializer (int** A, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
           A[i][j] = rand()/10000;
           std::cout << A[i][j] << " ";
           if(i + j + 1 == m && A[i][j] % 2 == 0)  //  A[i][m - 1 - i] % 2 != 0
            {
                sum += A[i][m - 1 - i];
            }
        }
        std::cout << std::endl;
    }
    std::cout << sum << std::endl;
}
template<class Iterator>
int count_max_el(Iterator first, Iterator last)
{
    auto max_el=*std::max_element(first, last);
    return std::count(first, last, max_el);
}
template<class Iterator>
void var1_1(Iterator first1,Iterator last1,Iterator first2, Iterator last2)
{
    int res1=count_max_el(first1,last1);
    int res2=count_max_el(first2,last2);
    if(res1>res2)
    {
        std::for_each(first1, last1,[](int a){std::cout<<a});
    }
    else
    {
        print (first1,first2);
    }
}
template<class Iterator>
Iterator max_element(Iterator first, Iterator last)
{
    Iterator max_el=first++;
    for(; first< last; ++first)
    {
        if(*first> max_el)
        {
            max_el= first;
        }
    }
    return max_el;
}
void saod_2_1 (iterator first1, iterator last1, iterator first1, iterator last2)
{
    auto temp1=std::count_if(first1, last1, [](int a){return a%3==0});
    auto temp2=std::count_if(first2, last2, [](int a){return a%3==0});
    if(temp1 > temp2)
    {
        std::for_each(first1, last1, [](int a){std::cout a});
    }
}
template<class iterator, class T >
void saod_7_1(iterator first1, iterator last1, iterator first2, iterator last2, T value)
{
    int res1= std::count_if(first1, last1, [value](int a){return a > value});
    int res2= std::count_if(first2, last2, [value](int a){return a > value});
    if(res1<res2)
    {
        print(first1, last1);
    }
    else
    {
        print(first2, last2);
    }
}
template<class matrix,class T>
int accumulate_2d(matrix m, int size1, int size2, T init)
{
    for(int i = 0; i < size1; ++i)
    {
        for(int j = 0; j < size1; ++j)
        {
            init+=m[i][j];
        }
    }
    return init;
}
template<class matrix, class T>
int average(matrix m, int size1, int size2, T init)
{
    accumulate_2d(m, size1, size2,0)/(size1*size2);
}
template<class matrix, class T>
void saod_7_2(matrix m, int size1, int size2)
{
    T av=average(m,size1, size2,0);
    for(int i = 0; i< size1; ++i)
    {
        for(int j = 0; j< size2; ++j)
        {
            if(m[i][j]< av)
            {
                m[i][j]/=av;
                std::cout<<m[i][j]<<std::endl;
            }
            std::cout<<m[i][j]<<std::endl;
        }
    }
}
template<class iterator, class T, class UP>
void task(iterator first, iterator last, T a, T b, UP p)
{
    std::for_each(first, last,[a,b,p](int& value){if(p(value)){value=a else value=b});
}
template<class matrix, class T >
void sum_el_glav_diag (matrix m , int size, T init)
{
    int end=size-1;
    for(int i =0; i!=size; ++i)
    {
        init+=m[end-i][i];
    }
    return init;
}
int factorial(int v)//рекурсия
{
    if(v==0)
    {
        return 1;
    }
    return v*factorial(v-1);
}
int pow(int v, int p)
{
    static int res=1;
    if(p==0)
    {
        return 1;
    }
    res*=v;
    pow(v, p-1);
    return res;
}*/
int main()
{
    //std::cout<<pow(2,3)<<std::endl;
    //start(3, 4);
    int array[8] = {3, 0, 1, 30, 6, 30, 8, 30};
    int array_2[5] = {30, 60, 30, 1, 3};
    task_1(array,array_2,8,5);
    std::cout<<binary_search(array,8)<<std::endl;
    std::cout<<binary_search(array_2,5)<<std::endl;
    /*initializer(start(6, 7), 6, 7);
    std::vector <int> v1(1,2,3,2,6,11);
    /*task_1(array, array_2, 6, 5);
    int** array_A = new int* [3];
    for (int i = 0; i < 3 ; ++i)
    {
        int sum = 0;
        array_A[i] = new int [4];
        for(int j = 0; j < 4; ++j)
        {
            array_A[i][j] = rand()/1000;
            std::cout << array_A[i][j] << " " ;

        }
        std::cout << " " << std::endl;
    }
    int sum = 0;
    int** array1 = new int*[3];
    for(int i = 0; i < 3; ++i)
    {
        array1[i] = new int [4];
        for(int j = 0; j < 4; ++j)
        {
            array1[i][j] = rand()/10000;
            std::cout << array1[i][j] << " ";
            if(i + j + 1 == 4 && array1[i][4 - 1 - i] % 2 != 0)
            {
                sum += array1[i][4 - 1 - i];
            }
        }
        std::cout << std::endl;
    }
    std::cout << sum << std::endl;*/

    /*int sum = 1;
    int** array1 = new int*[3];
    for(int i = 0; i < 3; ++i)
    {
       array1[i] = new int [4];
       for(int j = 0; j < 4; ++j)
       {
           array1[i][j] = rand()/10000;
           std::cout << array1[i][j] << " ";
           if(i + j + 1 == 4 && array1[i][4 - 1 - i] > 0)
           {
               sum *= array1[i][4 - 1 - i];
           }
       }
       std::cout << std::endl;
    }
    std::cout << sum << std::endl;*/
    return 0;
}
