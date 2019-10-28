#include <iostream>
#include <cmath>

double r_2()
{
    double f=0;
    int t=1;
    for(int x=-2; x<=3; ++x)
    {
        f=0;
        t=1;
    for(int k=1; k<=5; ++k)
    {
        t*=k+1;
        f+=(std::pow(-2,k+1)*t)/std::pow(x+2.5,k+1);
    }
    std::cout<<"f("<<x<<")= "<<f<<std::endl;
    }
    return f;
}
int main()
{
    std::cout<<r_2()<<std::endl;
    return 0;
}
