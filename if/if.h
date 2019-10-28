#ifndef IF_H_INCLUDED
#define IF_H_INCLUDED

void if_1 (int a)
{
    if(a>0)
    {
        std::cout<<a+1<<std::endl;
    }
    else
    {
        std::cout<<a<<std::endl;
    }
}
void if_6 (int a, int b)
{
    if(a>b)
    {
        std::cout<<a<<std::endl;
    }
    else
    {
        std::cout<<b<<std::endl;
    }
}
void if_11(int a, int b)
{
    if(a!=b)
    {
        if(a>b)
        {
            std::cout<<a<<std::endl;
        }
        else
        {
            std::cout<<b<<std::endl;
        }
    }
    else
    {
        a=0;
        b=0;
    std::cout<<a<<" "<<b<<std::endl;
    }
}
void if_12(int a, int b, int c)
{
    if(a<b && a<c)
    {
        std::cout<<a<<std::endl;
    }
    if(b<a && b<c)
    {
        std::cout<<b<<std::endl;
    }
    if(c<a && c<b)
    {
        std::cout<<c<<std::endl;
    }
}
int if_15(int a, int b, int c)
{
    int temp=0;
    if(a>c && b>c)
    {
        temp+=a+b;
    }
    if(a>b && c>b)
    {
        temp+=a+c;
    }
    if(b>a && c>a)
    {
        temp+=c+b;
    }
    return temp;
}


#endif // IF_H_INCLUDED
