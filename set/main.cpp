#include <iostream>
#include <set>

int main()
{
    std::set<int> a;
    a.insert(5);

    for(int i = 10; i != 0; --i)
    {
        a.insert(i);
    }

    for(auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    return 0;
}
