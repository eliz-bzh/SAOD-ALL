#include <iostream>



int main()
{
    int m;
    std::cout<<"Vvedite m: ";
    std::cin>>m;
    int**array=new int*[m];
    for(int i=0; i<m; ++i)
    {
        array[i]=new int[m];
    for(int j=0; j<m; ++j)
    {
        array[i][j]=rand()/1000;
         if(j>i && j<m-(i+1))
    {
        array[i][j]=0;
    }
        std::cout<<array[i][j]<<" ";
    }
    std::cout<<std::endl;
    }
    return 0;
}
