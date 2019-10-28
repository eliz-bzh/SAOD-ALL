#include <iostream>

using namespace std;
bool coor_1(int x, int y)// 1 коорд. плоскость
{
    return x>0 && y>0;
}
int t(int x, int y)
{
    if(x>0)
    {
        if(y>0)
        {
            return 1;
        }
        return 4;
    }
    if(x<0)
    {
        if(y>0)
        {
            return 2;
        }
        return 3;
    }
}
void f(int v)// x чётность и положительность
{
    if (v%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"not_even"<<endl;
    }
    if(v==0)
    {
        cout<<"null"<<endl;
    }
    return;
    if (v>0)
    {
        cout<<"positiv"<<endl;
    }
    else
    {
        cout<<"negative"<<endl;
    }
}
bool is_even(int v)
{
    return v%2==0;
}
int get_last_number(int v)
{
    return v%10;
}
void even_pos_pcch(int v)
{
    if(is_even(v))
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"not_even"<<endl;
    }
    cout<<get_last_number(v)<<endl;
}
void f1(int a, int b)
{
    if(a>b)
    {
        cout<<"greater"<<endl;
    }
    else
    {
        if(a<b)
        {
            cout<<"less"<<endl;
        }
        else
        {
            cout<<"e"<<endl;
        }
    }
}
    int main()
    {
        f1(5,5);
        /*even_pos_pcch(44);
        f(0);
        int res= t(4,-9);
        cout<<res<<endl;*/
        return 0;
    }
