#include <iostream>



int main()
{
    int*array = new int[4];
    int**array1 = new int*[6];
    int temp=0;
    for(int i=0; i<6; ++i)
    {
        array1[i]=new int [3];
        for(int j=0; j<3; ++j)
        {
            array1[i][j]=rand()/1000;
            std::cout<<array1[i][j]<<" ";
            if(i%2!=0)
        {
            temp+=array1[i][j];
        }
        }
        std::cout<<std::endl;
    }
    std::cout<<temp;
    return 0;
}
