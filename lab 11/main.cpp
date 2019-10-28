#include <iostream>

int min_(int* array)
{
    int min_el = array[0];
    for(int i = 1; i < 10; ++i)
    {
        if(array[i] < min_el)
        {
            min_el = array[i];
        }
    }
    return min_el;
}

int sum(int* arr)
{
    int res = 0;
    for(int i = 0; i < 10; ++i)
    {
        res += arr[i];
    }
    return res;
}

int main()
{
    int** array = new int*[5];
    int* array1 = new int[5];
    int index = 0;
    for(int i = 0; i < 5; ++i)
    {
        int* row = new int[10];
        for(int j = 0; j < 10; ++j)
        {
            row[j] = rand() / 10000;
            std::cout << row[j] << ' ';
        }
        array[i] = row;
        std::cout << std::endl;
    }
    for(int i = 0; i < 5; ++i)
    {
        array1[i] = sum(array[i]);
    }
    int min = array1[0];
    for(int i = 1; i < 5; ++i)
    {
        if(array1[i] < min)
        {
            min = array1[i];
            index = i;
        }
    }
    std::cout<< "Min sum: " <<min <<std::endl;
    std::cout<< "Index: " <<index << std::endl;
    return 0;
}
