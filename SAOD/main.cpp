#include <iostream>
#include <stdlib.h>

int* start2 (int m)
{
    int* A = new int [m];
    for(int i = 0; i < m; ++i)
    {
        A[i] = rand()/1000;
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
    return A;
}
int* start (int m)
{
    int* A = new int [m];
    for(int i = 0; i < m; ++i)
    {
        A[i] = rand()/1000;
    }
    return A;
}
int binary_search(int*array,int size)
{
    int start=0;
    int end=size-1;
    int m = (start+end)/2;
    int couter = 0;
    int m_c = m;
    //int end1 = end;
    int end2 = end-m_c;
    int end2_2 = end;
    int start2=m_c+1;
    while(start<=end2)
    {
        if(end==2)
        {
            end-=1;
        }
        m = (start+end)/2;
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
        end=m+1;
        --end2;
    }
}
void mas(int*array1, int size1, int*array2, int size2)
{
    if(binary_search(array1,size1)>binary_search(array2,size2))
    {
        for(int i=0; i!=size1; ++i)
        {
            std::cout<<array1[i]<<" ";
        }
    }
    else
    {
        for(int i=0; i!=size2; ++i)
        {
            std::cout<<array2[i]<<" ";
        }
    }
}

int** start_2 (int n, int m)
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
    int sum = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
           A[i][j] = rand()/1000-10;
           std::cout << A[i][j] << " ";
           if(i + j + 1 == m && A[i][j] > 0)  //  A[i][m - 1 - i] % 2 != 0
            {
                sum *= A[i][m - 1 - i];
            }
        }
        std::cout << std::endl;
    }
    std::cout << sum << std::endl;
}
int main()
{
    int array[8] = {3, 0, 1, 30, 6, 30, 8, 30};
    int array_2[5] = {30, 60, 30, 1, 3};
    //start1(8);
    //std::cout<<std::endl;
    //std::cout<<binary_search(start2(25),25)<<std::endl;
    //std::cout<<binary_search(start2(10),10)<<std::endl;
    //std::cout<<bool_mas(binary_search(start2(2),2), binary_search(start2(5),5));
    mas(start2(12),12,start2(6),6);
    std::cout<<std::endl<<std::endl;
    initializer(start_2(5,8),5,8);
    return 0;
}
