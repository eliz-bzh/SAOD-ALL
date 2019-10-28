#include <iostream>
#include <vector>
#include "arrays.h"



int main()
{
    std::vector<std::vector<int>> m{{3,44,5},{6,11,1},{2,8,101}};
    fill_matrix(m,3,3);
    /*for(auto i = m.begin(); i!=m.end(); ++i)
    {
        for(auto j=(*i).begin(); j!=i->end(); ++j)
        {
            std::cout<<*j<<" ";
        }
        std::cout<<std::endl;
    }*/
    /*std::vector<int> res;
    std::vector<std::vector<int>> arr {{3,44,5},{6,11,1},{2,8,101}};
    int sum=0;
    for(std::vector<std::vector<int>>::iterator i = arr.begin(); i!= arr.end(); ++i)
    {
        int sum=0;
        for(std::vector<int>::iterator j = (*i).begin(); j!=(*i).end(); ++j)
        {
            sum+=*j;
        }
        res.push_back(sum);
    }
    for(auto i=res.begin(); i!=res.end(); ++i)
    {
        std::cout<<*i<<" ";
    }*/
    for(int i=0; i!=4; ++i)
    {
        for(int j=0; j!=4; ++j)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
//    int arr[6] {1,4,5,2,3,6};
    //4 2 6
    //3 5 1
    //f_10(arr,arr+6);
    return 0;
}
