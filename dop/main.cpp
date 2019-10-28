#include <iostream>

using namespace std;
void f (int c, int r)
{
    for(int i=0; i<c; ++i)
    {
        for(int i=0; i<r; ++i)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
int main()
{
    f(4,4);
    return 0;
}
