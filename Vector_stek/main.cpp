#include <iostream>
//стек - абстрактный тип данных (урезанные массив или лист)
#include<vector>
int f(int a=4)
{
    return a*2;
}

struct Point
{
    int x;
    int y;
    Point(int x_=0, int y_=0)//по default (0,0)
    {
        x=x_;
        y=y_;
    }
};

/*template<class T, class Container = std::vector<T>>
struct Stack
{
    Container cont;
    bool empty()
    {
        return cont.empty();
    }
    void push(T v)
    {
        cont.push_back(v);
    }
};

int gcd (int a, int b)//нод(наиб.)
{
    int c;
    while (c=a%b)
    {
        a=b;
        b=c;
    }
    return b;
}

struct Fraction
{
    int m_num;
    int m_denum;
    Fraction()= default;
    Fraction(int num, int denum):m_num(num), m_denum(denum){};
    operator bool()
    {
        return m_num!=0;
    }
    void normalize()
    {
        int gcd_=gcd(m_num, m_denum);
        m_num=gcd_;
        m_denum=gcd_;
    }
    int lem(int a, int b)
    {
        return a*b/gcd(a,b);
    }
    bool operator==(Fraction this Fraction& that)
    {
        Fraction temp1=f(*this, that);
        Fraction temp2=f(this,*that);
        return temp1.m_num==temp2.m_num;
    }
    Fraction f(Fraction a, Fraction b)
    {
        int lem_=lem(a.denum,b.denum);
        return Fraction(a.num*lem_,lem);
    }
};
*/

namespace stu
{
struct Accum
{
    int v=0;
    void operator()(int va)
    {
        v+=va;
    }
    Accum()=default;
    Accum(int va)
    {
        v=va;
    }
};

struct Generate
{
    int v=0;
    int operator()()
    {
        v+=2;
        return v;
    }
    Generate(int va)
    {
        v=va;
    }
};

template<class Iter, class Generator>
void generate(Iter first, Iter last, Generator g)
{
    for(; first!=last; ++first)
    {
        *first=g();
    }
}

template<class ForwardIt, class Functor>
Functor for_each(ForwardIt first, ForwardIt last, Functor f)
{
    for(; first!= last; ++first)
    {
        f(*first);
    }
    return f;
}
struct Sum
{
    int v=0;
    Sum()=default;
    Sum(int va):v(va) {};
    void operator()(int va)
    {
        v+=va;
    }
};

struct Functor1_1
{
    int v=1;
    Functor1_1()=default;
    Functor1_1(int va): v(va){};
    void operator()(int& va)
    {
        va=v;
        v+=2;
    }
};

struct Functor1_2
{
    int v=0;
    Functor1_2()=default;
    Functor1_2(int va): v(va){};
    int operator()()//generate
    {
        v+=2;
        return v;
    }
};

template<class ForwardIt>
void pow_2(ForwardIt first, ForwardIt last)
{
    int temp=2;
    stu::for_each(first,last,[&temp] (int& v) {v=temp;
                                                temp*=2;});
}

template<class ForwardIt>
void pow_2_2(ForwardIt first, ForwardIt last)
{
    int temp=0;
    stu::for_each(first,last,[temp] (int& v) {return v=temp;});
}

template<class Iter>
void arifm_pr(Iter first, Iter last, int a, int b)
{
    int temp=0;
    for(;first!=last;++first,++temp)
    {
        *first=a+(temp*b);
    }
}

bool arr_palindrom(int*arr, int first, int last)
{
    --last;
    for(int i=first; i!=last; ++i, --last)
    {
        if(arr[i]!=arr[last])
        {
            return false;
        }
    }
    return true;
}


}


int main()
{
    std::vector<int> arr(10);
    stu::for_each(arr.begin(),arr.end(),[](int v) {std::cout<<v<<" ";});
    stu::Sum res=stu::for_each(arr.begin(),arr.end(),stu::Sum());
    std::cout<<std::endl;
    std::cout<<res.v<<std::endl;
    /*Accum a(4);
    std::cout<<a.v<<std::endl;
    int arr[10];
    Accum b(1000);
    for(int i=0; i!=10;++i)
    {
        a(arr[i]);
    }
    std::cout<<b.v<<std::endl;
    std::vector<int> arr1(10);
    generate(arr1.begin(), arr1.end(),Generate(10));
    for(auto i=arr1.begin();i!=arr1.end();++i)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
    std::vector<int> arr2(10);
    int temp=0;
    generate(arr2.begin(),arr2.end(),[&temp] () {return temp++;});
    for(auto i=arr2.begin();i!=arr2.end();++i)
    {
        std::cout<<*i<<" ";
    }*/
//    std::cout << gcd(135,25)<< std::endl;
    /*Point a(2,4);
    std::cout << a.x<<" "<<a.y<< std::endl;
    std::cout << f()<< std::endl;*/
    return 0;
}
