#include <iostream>

struct Integer
{
    int* value;
    Integer() = default;
    Integer(int v): value(new int(v)) {}

    bool operator==(const Integer& that)
    {
        return this->value == that.value;
    }

    void operator=(const Integer& that)
    {
        this->value = that.value;
        std::cout<<that.value;
        std::cout<<this->value;
    }

    void set_value(int v)
    {
        *value = v;
    }

    int get_value()
    {
        return *value;
    }

    void copy(const Integer& that)
    {
        *(this->value) = *(that.value);
        std::cout<<*that.value<<std::endl;
        std::cout<<*this->value<<std::endl;
    }

    bool equal(const Integer& that)
    {
        return *this->value == *that.value;
    }
};

int main()
{
    Integer a(4);
    Integer b(8);
    //a = b;
    a.copy(b);
    std::cout<< a.equal(b)<<std::endl;
    return 0;
}
