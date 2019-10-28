#include <iostream>
#include <cmath>
#include <stdlib.h>

/*
int** making_array (int n, int m)
{
    int** array = new int *[n];
    for(int i = 0; i < n; ++i)
    {
        array[i] = new int [m];
    }
    return array;
}

void sum_abs (int** array, int n, int m, int sum)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
           array[i][j] = rand()/1000-10;
           std::cout << array[i][j] << " ";
           if(array[i][j] < 0 && array[i][j] % 2 != 0)
            {
                sum += abs(array[i][j]);
            }
        }
        std::cout << std::endl;
    }
    std::cout << sum << std::endl;
}*/
int** making_array (int n, int m)
{
    int** array = new int *[n];
    for(int i = 0; i < n; ++i)
    {
        array[i] = new int [m];
        for(int j = 0; j < m; ++j)
        {
            array[i][j] = rand()/1000-10;
            std::cout << array[i][j] << " ";
        }
        std::cout<<std::endl;
    }
    return array;
}

int sum_abs (int** array, int n, int m, int sum)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            /*array[i][j] = rand()/1000-10;
            std::cout << array[i][j] << " ";*/
            if(array[i][j] < 0 && array[i][j] % 2 != 0)
            {
                sum += abs(array[i][j]);
            }
        }
        //std::cout << std::endl;
    }
    return sum;
}
int main()
{
    //sum_abs(making_array(7,7),7,7,0);
    std::cout<<sum_abs(making_array(7,7),7,7,0)<<std::endl;
    return 0;
}
