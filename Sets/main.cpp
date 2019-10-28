#include <iostream>
#include <vector>
#include <iterator>
#include <set>
#include <deque>
#include <algorithm>
template<class Iterator>
void print(Iterator first, Iterator last)
{
    for(auto i = first; i != last; ++i)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
}
void dasha ()
{
    std::cout << "lr 7" << std::endl;
    std::vector<int> v1 {1, 1, 1, 1, 1};
    std::vector<int> v2 {-2, -2, -2, -2, -2};
    print(v1.begin(), v1.end());

    std::cout << std::endl;
    std::cout << v1.size() << std::endl;
    std::cout << v2.size() << std::endl;
    v1.clear();
    std::cout << v1.size() << std::endl;
    print(v1.begin(), v1.end());

}

void liz()
{
    std::vector<int> v;
    int size = 5;
    for(int i = 0; i != size; ++i)
    {
        v.push_back(1);
    }
    std::cout<<v.size()<<std::endl;
    print(v.begin(), v.end());
    int ob = v.at(3)-1;
    v.at(3)=ob;
    std::cout<<v.size()<<std::endl;
    print(v.begin(), v.end());
}
void a()
{
    std::set<int> set1{4,3,5,6};
    std::set<int> set2 {2,4,5,6};
    std::set<int> result;
    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::inserter(result, result.begin()));
    if(result.empty())
        std::cout << "empty" << std::endl;
    else
    {
        print(result.begin(), result.end());
    }
}

void b()
{
    std::vector<int> n{1,2,3,4,0,0,0,0};
    std::vector<int> insert{1,2,3,4,5};
    n.insert(n.begin()+(n.size()/2), insert.begin(), insert.end());
    print(n.begin(), n.end());
}


int main()
{
    std::vector<int> m{95,96,103,89,72,105,85,85,91,101,82,91};
    int res = std::count_if(m.begin(), m.end(),[](int i){return i == 95;});
    std::cout<<res;
    //dasha();
    //liz();
    /*std::cout<<std::endl;
    a();
    std::cout<<std::endl;
    b();*/
    return 0;
}
