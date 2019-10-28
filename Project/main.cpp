#include <iostream>
#include <vector>

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
    bool is_choisen = false;
    void add_variant(const variant& v)
    {
        variants.push_back(v);
    }
    void add_variants(variant&& v)
    {
        variants.push_back(v);
    }
    void choise_variants(int index)
    {
        variants[index].is_choisen = true;
    }
    bool is_right_answer()
    {
        for(auto i = variants.begin(); i!=variants.end(); ++i)
        {
            if(i->is_true!=is_choisen)
            {
                return false;
            }
        }
    }
};

struct quiz
{
    std::vector<question> questions;
    std::vector<question>::iterator get_question;
};

int reserse(int v)
{
    int res = 0;
    for(;v!=0;v/=10)
    {
        res*=10;
        res+=v%10;
    }
    return res;
}

bool is_palindrom(int v)
{
    return v == reserse(v);
}

int reserse_(int v)
{
    int digit = v%10;
    int count =1;
    v/=10;
    for(; v; v/=10)
    {
        if(v%10 == digit)
        {
            ++count;
        }
        if(v%10 > digit)
        {
            digit = v%10;
            count = 1;
        }
    }
    return count;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout<<is_palindrom(121)<<std::endl;
    std::cout<<reserse_(89345557)<<std::endl;
    return 0;
}
