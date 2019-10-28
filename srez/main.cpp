#include <iostream>
#include <vector>
//using BP = bool(*) (int,int);
int pow (int a, int p)
{
    int temp=1;
    for(int i=0; i<p; ++i)
    {
        temp*=a;
    }
    return temp;
}
int fact (int a)
{
    int temp=1;
    for(int i=2; i<=a; ++i)
    {
        temp*=i;
    }
    return temp;
}
void fib_number(int a)
{
    int t1=0;
    int t2=1;
    int t3;
    std::cout<<t1<<std::endl;
    std::cout<<t2<<std::endl;
    for(int i=2; i<a; ++i)
    {
        t3=t1+t2;
        std::cout<<t3<<std::endl;
        t1=t2;
        t2=t3;
    }
}
void fib_array(int*array, int size)
{
    array[0]=0;
    array[1]=1;
    std::cout<<array[0]<<std::endl;
    std::cout<<array[1]<<std::endl;
    for(int i=2; i<size; ++i)
    {
        array[i]=array[i-2]+array[i-1];
        std::cout<<array[i]<<std::endl;
    }
}
bool pal_number(int a)
{
    int temp=a;
    int res=0;
    for(; temp!=0; temp/=10)
    {
        res=res*10+temp%10;
    }
    if(a==res)
    {
        return 1;
    }
    return 0;
}
bool pal_array(int*array_1, int size)
{
    int j = size-1;
    for(int i=0; i<j; ++i, --j)
    {
        if(array_1[i]==array_1[j])
        {
            return 1;
        }
        return 0;
    }
}
int sum_numeral_ch(int a)
{
    int sum=0;
    for(; a!=0; a/=10)
    {
        sum+=a%10;
    }
    return sum;
}
int discharges_ch(int a)
{
    int temp=0;
    for(; a!=0; a/=10)
    {
        ++temp;
    }
    return temp;
}
void even_ch (int first, int last)
{
    for(; first<=last; ++first)
    {
        if(first%2==0)
        {
            std::cout<<first<<std::endl;
        }
    }
}
void min_ch_iz_3(int a, int b, int c)
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
void min_ch_iz_4(int a, int b, int c, int d)
{
    if(a<b && a<c && a<d)
    {
        std::cout<<a<<std::endl;
    }
    if(b<a && b<c && b<d)
    {
        std::cout<<b<<std::endl;
    }
    if(c<a && c<b && c<d)
    {
        std::cout<<c<<std::endl;
    }
    if(d<a && d<b && d<c)
    {
        std::cout<<d<<std::endl;
    }
}
int sum_el_array(int*array_1, int size)
{
    int temp=0;
    for(int i=0; i<size; ++i)
    {
        temp+=array_1[i];
    }
    return temp;
}
int max_el_array(int*array_1, int first, int last)
{
    int max_el=array_1[first];
    int index=first;
    for(; first<last; ++first)
    {
        if(max_el<array_1[first])
        {
            max_el=array_1[first];
            index=first;
        }
    }
    return index;
}
int min_el_array(int*array_1, int first, int last)
{
    int min_el=array_1[first];
    int index=first;
    for(; first<last; ++first)
    {
        if(min_el>array_1[first])
        {
            min_el=array_1[first];
            index=first;
        }
    }
    return index;
}
int min_v(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
int min_3(int a, int b, int c)
{
    return min_v(min_v(a,b),c);
}
int min_4(int a, int b, int c, int d)
{
    return min_v(min_v(a,b),min_v(c,d));
}
int sum_el_min_ch(int*array_1,int a, int size)
{
    int temp=0;
    for(int i=0; i<size; ++i)
    {
        if(array_1[i]<a)
        {
            ++temp;
        }
    }
    return temp;
}
void not_even (int*array,int size)
{
    int temp=1;
    for(int i =0; i< size; ++i, temp+=2)
    {
        array[i]=temp;
    }
}
bool int_3(int a, int b, int c)
{
    return a==b && b==c;
}
bool int_v(int a, int v)
{
    return a%10==v;
}
/*bool el_array_8(int*array_1, int size, BP p)
{
    for(int i=0; i<size-1; ++i)
    {
        if(!p(array_1[i],8))
        {
            return false;
        }
        return true;
    }
}*/
int proiz (int*array_1, int size)
{
    int temp = 1;
    for(int i=0; i<size; ++i)
    {
        temp*=array_1[i];
    }
    return temp;
}
int cher_el_array(int *array_1, int size)
{
    for(int i=0; i<size; ++i)
    {
        if(array_1[i]>0 ^ array_1[i+1]>0)
        {
            return 1;
        }
        return 0;
    }
}
int loc_min (int*array_1, int size)// кол-во локальных min
{
    int couter=0;
    for(int i=1; i<size-1; ++i)
    {
        if(array_1[i]<array_1[i-1] && array_1[i]<array_1[i+1])
        {
            ++couter;
        }
    }
    return couter;
}
void f(int times)
{
    if(times==0)
    {
        return;
    }
    std::cout<<"Hello"<<" ";
    f(times-1);
}
int gcd (int a, int b)
{
    if(a%b==0)
    {
        return b;
    }
    gcd(b,a%b);
}
int fiborachi_n(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1 && n==2)
    {
        return 1;
    }
    return fiborachi_n(n-1)+fiborachi_n(n-2);
}
template<class Iter>
void bubble_sort(Iter first, Iter last)
{
    int size=last-first;
    --last;
    for(int i=0; i!=size; ++i)
    {
        for(Iter j = first; j!= last; ++j)
        {
            if(*j>*(j+1))
            {
                std::iter_swap(j,j+1);
            }
        }
    }
}
template<class Iter>
Iter min_el(Iter first, Iter last)
{
    Iter find_el= first++;
    for(; first!=last; ++first)
    {
        if(*first<*find_el)
        {
            find_el= first;

        }
    }
    return find_el;
}
template<class Iter>
Iter insert_sort(Iter first, Iter last)
{
    for(; first!=last; ++first)
    {
        std::iter_swap(min_el(first,last), first);
    }
}
int f(int* array, int size)
{
    int min_el;
    for(int i=0; i!=size; ++i)
    {
        min_el= i+1;
        for(int j=i+1; j!=size; ++j)
        {
            if(array[j]<array[min_el])
            {
                min_el=j;
            }
            if(array[min_el]<array[i])
            {
                std::swap(array[min_el], array[i]);
            }
        }
    }
}
void sort(int* array, int size)
{
    for(int i=1; i!=size; ++i)
    {
        for(int j=i; j<0 && array[j]<array[j+1]; --j)
        {
            std::swap(array[j], array[j-1]);
        }
    }
    for(int i=0; i!=size; ++i)
    {
        std::cout<<array[i]<< " ";
    }
}
/*unsigned int f_1(char* str)
{
    int temp=0;
    for(;*str;++str)
    {
        if(is_vowe(*str))
        {
            ++temp;
        }
    }
}*/

void strcopy(char* first, char* first_d)
{
    while(*first_d = *first)
    {
        ++first_d;
        ++first;
    }
    //*first_d=0;
}
unsigned int str(char* first)
{
    int counter=0;
    for(; *first; ++first)
    {
        if(*first = ' ')
        {
            ++counter;
        }
    }
    return counter;
}
unsigned int str_lengs(char* first)
{
    int couter = 0;
    for(; *first; ++first)
    {
        ++couter;
    }
    return couter+1;
}
char* f(char* str)
{
    char* result=new char [str_lengs(str)* 2];
    char* temp = result;
    while(*str)
    {
        *temp++ = *str++;
        *temp++ = ' ';
    }
    return result;
}
struct Fill
{
    int v=0;
    Fill()=default;
    Fill(int va);//:v(va) {};
    int operator()();
    /*{
        v+=2;
        return v;
    }*/
};
Fill::Fill(int va): v(va) {};
Fill::operator()()
{
    v+=2;
    return v;
}

template<class Iter, class Generator>
void generate(Iter first, Iter last, Generator g)
{
    for(; first!=last; ++first)
    {
        *first = g();
    }
}
template<class Iter, class UP>
void for_each(Iter first, Iter last, UP p)
{
    for(; first!=last; ++first)
    {
        p(*first);
    }
}
//declareted или только declareted или и то и то
//difinishin и то и то
//int f() {std::cout<<"Hell"<<std::endl;};

int main()
{

    /*std::vector<int> a (10);
    generate(a.begin(),a.end(),Fill());
    for_each(a.begin(),a.end(), [] (int a) {std::cout<<a<<" ";});
    std::cout<<f();*/
#define x
#ifndef x
    std::cout<<"Hello";
#endif
    //int arr[]{};
    //generate(arr,arr+10,Fill());
    /*char* str = "Hello world";
    char str1[12];
    strcopy(str,str1);
    std::cout<<str1;*/

    /*int array [] = {};
    int array_1 [5] = {28,-2,5,-4,2};
    std::cout<< *min_el(array_1,array_1+5)<< std::endl;
    std::cout<< f(array_1,5)<<std::endl;
    sort(array_1, 5);
    /*int powr = pow(2,4);
    std::cout<< powr <<std::endl;
    int factr = fact(4);
    std::cout<<factr<<std::endl;
    fib_number(10);
    fib_array(array,10);
    bool pal_numberr= pal_number(252);
    std::cout<<pal_numberr<<std::endl;
    bool pal_arrayr= pal_array(array_1, 5);
    std::cout<<pal_arrayr<<std::endl;
    int sum_numeral_chr= sum_numeral_ch(321);
    std::cout<< sum_numeral_chr<<std::endl;
    int discharges_chr= discharges_ch(34556);
    std::cout<<discharges_chr<<std::endl;
    even_ch(2,6);
    min_ch_iz_3(3,-9,-5);
    min_ch_iz_4(3,-9,-5,-100);
    int sum_el_arrayr= sum_el_array(array_1,5);
    std::cout<< sum_el_arrayr<<std::endl;
    int max_el_arrayr= max_el_array(array_1, 0,5);
    std::cout<<max_el_arrayr<<std::endl;
    int min_el_arrayr= min_el_array(array_1, 0,5);
    std::cout<<min_el_arrayr<<std::endl;
    int min_3r= min_3(4,7,-3);
    std::cout<<min_3r<<std::endl;
    int min_4r= min_4(4,7,-3,-100);
    std::cout<<min_4r<<std::endl;
    int sum_el_min_chr= sum_el_min_ch(array_1,7,5);
    std::cout<<sum_el_min_chr<<std::endl;
    not_even(array,5);
    bool int_3r= int_3(4,4,4);
    std::cout<<int_3r<<std::endl;
    bool el_array_8r = el_array_8(array_1, 5, int_v);
    std::cout<< el_array_8r<<std::endl;
    int cher_el_arrayr= cher_el_array(array_1, 5);
    std::cout<< cher_el_arrayr<<std::endl;
    std::cout<< proiz(array_1,5)<<std::endl;
    std::cout<<loc_min<<std::endl;*/
    return 0;
}

