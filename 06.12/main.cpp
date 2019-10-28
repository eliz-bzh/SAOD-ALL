#include <iostream>
#include <stdlib.h>
int sum_arr(int** array, int row, int column)
{
    int temp=0;
    for(int i=0; i < row; ++i)
    {
        temp+=array[0][i];
    }
    return temp;
}

int main()
{
  /*  int(*array)[2] = new int[3][2];
    for(int i=0; i<3*2; ++i)
    {
        array[0][i] = rand()/1000;
        std::cout<< array[0][i]<<" ";
    }*/
   /* int k=0;
    int array_B[12]={};*/
    int sum=0;
    int** array1 = new int*[3];
    for(int i=0; i< 3; ++i)
    {
        array1[i]=new int [4];
        for(int j=0; j<4; ++j)
        {
            array1[i][j]= rand()/1000;
            std::cout<< array1[i][j]<<" ";
            if(array1[i][4-1-i]%2!=0)
            {
                sum+=array1[i][4-1-i];
            }
            /*if(array1[i][j]%3==0)
            {
                array_B[k]=array1[i][j];
                std::cout<<array_B[k]<<" ";
                ++k;
            }*/
        }
        std::cout<<std::endl;
    }
    std::cout<< sum<<std::endl;


    return 0;
}
