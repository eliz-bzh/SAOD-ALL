#include <iostream>

using UP = bool (*) (int);
bool even(int a)
{
    return a%2==0;
}
void print_array(int*array,int n, UP p)
{
    for(int i=0; i<n; ++i)
    {
        array[i]=i;
        std::cout<<"array["<<i<<"]="<<i<<std::endl;;
    }
    std::cout<<"Even elements of the array: ";
        for(int i=0; i<n; ++i)
        {
            if(p(array[i]) && array[i]!=0)
            {
                std::cout<<array[i]<<" ";
            }
        }
            std::cout<<std::endl;
    std::cout<<"Odd elements of an array: ";
        for(int i=0; i<n; ++i)
        {
            if(!p(array[i]))
            {
                std::cout<<array[i]<<" ";
            }
        }
            std::cout<<std::endl;

}

int main()
{
    int array[]= {};
    print_array(array,14,even);
    return 0;
}
