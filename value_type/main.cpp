#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
/*template<class Iter>
void f(Iter first, Iter last)
{
    using value_type = remove_reference<int&>()::type;
}*/

template<class T>
struct reference_type
{
    using type = T;
};

template<class T>
struct reference_type<T&>
{
    using type = T;
};

template<class T>
struct reference_type<T&&>
{
    using type = T;
};

struct Test
{
    int value;
    Test()
    {
        std::cout<<"Test()"<<std::endl;
    }
    Test(int a)
    {
        value = a;
        std::cout<< "Test (int){}"<<std::endl;
    }
    Test(const Test& that)
    {
        this->value = that.value;
        std::cout<<"Test (int,int){}"<<std::endl;
    }
    ~Test()
    {
        std::cout<<"~Test()"<<std::endl;
    }
};

template<class T>
struct auto_ptr
{
    using element_type = T;
    using pointer = T*;
    pointer m_ptr = nullptr;
    auto_ptr(pointer p = nullptr):m_ptr(p) {}
    auto_ptr(const auto_ptr& that):m_ptr(that.realese) {}
    ~auto_ptr()
    {
        delete m_ptr;
    }
    pointer realese()
    {
        pointer temp = m_ptr;
        m_ptr = nullptr;
        return temp;
        //Test* a = b.realese; //правильная форма записи
    }
    void reset(pointer p = nullptr)
    {
        if(p!=nullptr)
        {
            delete m_ptr;
            m_ptr = p;
        }
        //Test* b = new Test();
        //a.reset(b);
    }
    auto_ptr& operator=(const auto_ptr that)
    {
        reset(that.realese());
        return *this;
    }
    element_type& operator*()
    {
        return *m_ptr;
    }
    pointer operator->()
    {
        return m_ptr;
    }
    void get()
    {
        return m_ptr;
    }
};

template<class Iter>
bool is_valid_brackets(Iter first, Iter last)
{
    using value_type = typename std::remove_reference<decltype(*first)>::type;
    std::stack<value_type> st;
    for(; first!=last; ++first)
    {
        if(*first == '(')
        {
            st.push(*first);
        }
        if(*first == ')')
        {
            if(st.empty() || st.top == ')')
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        return st.size() == 0;
    }
}

struct Generator
{
    int m_start;
    int m_step;
    Generator(int step = 1, int start = 0):m_start(start), m_step(step) {}
    int operator()()
    {
        m_start+=m_step;
        return m_start;
    }
};

template<class InputIt, class Generator>
void _generate(InputIt first, InputIt last, Generator g)
{
    for(; first!=last; ++first)
    {
        *first = g();
    }
}

struct Point
{
    int x;
    int y;
    Point() = default;
    Point(int _x, int _y):x(_x), y(_y) {}
    void distance(Point a, Point b)
    {
        std::cout<< std::sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
    }
    void distance(/*Point*this*/const Point& that)
    {
        std::cout<< std::sqrt(pow(that.x-this->x,2)+pow(that.y-this->y,2));
    }
};

struct variant
{
    std::string Text;
    bool is_true;
    bool is_choisen = false;
    variant() = default;
    variant(std::string Text_t, bool v):Text(Text_t), is_true(v) {}
};

struct question
{
    std::string Text;
    std::vector<variant> variants;
    question() = default;
    question(std::string Text_t): Text(Text_t) {}
    void add_variant(const variant& v)
    {
        variants.push_back(v);
    }
    void add_variants(variant&& v)
    {
        variants.push_back(v);
    }
    choise_variants(int index);
    void is_right_answer();
};

int main()
{
     /*Test a; //находится в стеке
     Test c(a);
     Test* p = new Test; //находится в динам.
     delete p;
    Test* a = new Test();
    auto_ptr<Test> b (new Test());
    std::stack<int> st;*/
    std::vector<int> a (10);
    _generate(a.begin(),a.end(),Generator(5,0));
    for(auto i = a.begin(); i!=a.end(); ++i)
    {
        std::cout<<*i<<" ";
    }
    /*int result = std::count_if(a.begin(), a.end(), [](int v){return v%5 == 0;});
    for(auto i = a.begin(); i!=a.end(); ++i)
    {
        st.push(*i);
    }
    int temp = 0;
    while(st.size())
    {
        if(st.top()% 5 == 0)
        {
            ++temp;
        }
        st.pop();
    }
    std::cout<<temp;
    */
    return 0;
}
