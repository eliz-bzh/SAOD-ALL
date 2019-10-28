#include <iostream>

int max_(int* array)
{
    int max_el = array[0];
    for(int i = 1; i < 2; ++i)
    {
        if(array[i] > max_el)
        {
            max_el = array[i];
        }
    }
    return max_el;
}
int local_max(int* array)
{
    int local_max = array[1];
    for(int i=1; i<6-1; i+=3)
    {
        if(array[i-1]>array[i] && array[i+1]>array[i])
        {
            std::cout<<array[i]<<std::endl;
        }

    if(local_max > array[i])
        {
            local_max=array[i];
        }
    }
    return local_max;
}

int main()
{
    int array [6] = {8,2,3,6,5,9};
   /* int array1[2]= {};
    int min= array1[0];
    for(int i=1; i<6-1; i+=3)
    {
        if(array[i-1]>array[i] && array[i+1]>array[i])
        {
            std::cout<<array[i]<<std::endl;
        }
    }
    for(int i = 0; i < 2; ++i)
    {
        array1[i] = array[i];
    }
    for(int i=0; i<2; ++i)
    {
        if(max_(array1))
        {
            array1[i]=array[i];
            std::cout<<array1[i]<<std::endl;
        }
    }*/
    std::cout<< local_max(array)<< std::endl;
    return 0;
}
