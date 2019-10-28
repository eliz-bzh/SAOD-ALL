#ifndef LAB4_H_INCLUDED
#define LAB4_H_INCLUDED
#include <cmath>
void first_1(int n, int k)
{
    for(int i=0; i<n; ++i)
    {
        std::cout<<k<<" ";
    }
}
int first_2(int a, int b)
{
    int temp=0;
    for(; a>b; a=a-b)
    {
        temp=a-b;
    }
    return temp;
}
int first_3(int a, int b)
{
    int temp=0;
    for(int i=a; i<=b; ++i)
    {
        temp+=i;
    }
    return temp;
}
/*double first_4(int n)
{
    double sum=1.1;
    double t1=1.2;
    double t2=-1.3;
    for(int i=0; i<n-2; t1+=0.2, ++i)
    {
        sum+=t1;
    }
    for(int i=0; i<n-2; t2-=0.2, ++i)
    {
        sum+=t2;
    }
    return sum;
}*/
double task_for_13(int n)
{
    double sum = 1;
    double temp = -1;
    for(double i = 0.1; i < n; i = i + 0.1)
    {
        temp = temp * -1;
        sum = sum + i * temp;
        std::cout << sum << std::endl;
    }
    return sum;
}
int first_5(int a,int p)
{
    int sum=0;
    for(int i=1; i<=p; ++i)
    {
        sum+=std::pow(a,i);
    }
    return sum;
}

void second_1(int a, int b)
{
    a=a+1;
    for(; a<b; ++a)
    {
        std::cout<<a<<" ";
    }
}
int second_2(int n)
{
    for(; n!=0; n/=10)
    {
        if(n%10==2)
        {
            return true;
        }
        return false;
    }
}

#endif // LAB4_H_INCLUDED
