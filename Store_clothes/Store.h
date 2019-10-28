#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED
#include <fstream>
#include <vector>
#include <sstream>

struct Person
{
    std::string name;
    std::string surname;
    Person(std::string n, std::string s)
    {
        name=n;
        surname=s;
    }

};
std::ostream& operator<<(std::ostream& out, const Person& p)
{
    return out<<"Name: "<<p.name<<" "<<"Surname: "<<p.surname;
}

#endif // STORE_H_INCLUDED
