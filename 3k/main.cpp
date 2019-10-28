#include <iostream>

int f(int n)
{
    int s = 0;
    int array[n] = {};
    for(int i=0; i<n; ++i)
    {
        array[i]=rand()%1000;
        std::cout<<array[i]<<" ";
        if(array[i]%1==0 && array[i]%array[i]==0)
        {
            s+=array[i];
        }
    }
    std::cout<<std::endl;
    return s;
}


int main()
{
    std::cout<<f(5)<<std::endl;

    return 0;
}
