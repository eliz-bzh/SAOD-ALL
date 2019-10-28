#include <iostream>

int f (int* arr, int first, int last)
{
    int max = arr[first];

    for(; first < last; ++first)
    {
        if(arr[first++] < arr[first] && arr[first++] < arr[first + 2 ])
        {
            if(arr[first++] > max)
            {
                max = arr[first];
            }
        }
    }
    return max;
}

int main()
{
    int arr[6] = {9, 8, 10, 9, 6, 8};
    int res = f(arr, 0, 6);
    std::cout<<res << std::endl;
    return 0;
}
