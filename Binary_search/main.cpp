#include <iostream>
int binary_search(int*array, int size, int key)
{
    bool found=false;
    int high=size-1;
    int low=0;
    int middle=(high+low)/2;
    while(!found && low!=high)
    {
        if(array[middle]==key)
        {
            found=true;
            return key;
        }
        else return -1;
        if(array[middle]>key)
        {
            high=middle-1;
        }
        else
        {
            low=middle+1;
        }
        middle=(high+low)/2;
    }
    return 1;
}
int main()
{
    int array[7] = {1,2,3,4,5,6,7};
    std::cout<<binary_search(array,7,6);
    return 0;
}
