#include <iostream>
#include <cmath>
#include <stdlib.h>

void average (int* array, int size)
{
    int temp = 0;
    for (int i = 0; i < size; ++i)
    {
        array[i] = rand()/1000;
        std::cout << array[i] << " ";
        temp += array[i];
    }
        temp /= size;
    std::cout << std::endl;
    for(int i = 0; i < size; ++i)
    {
        if(i == 4)
        {
            array[i] = temp;
        }
        std::cout << array[i] << " ";
    }
}
int main()
{
    int array[12];
    average(array,12);
    return 0;
}
