#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <iostream>
#include <fstream>
#include <vector>
enum Genre {Comedy, Horror, Adventure, Detective, Romantic};
struct Person
{
    std::string name;
    std::string surname;
    Person()=default;
    Person(std::string S_N)
    {
        surname=S_N;

    }
    Person(std::string n, std::string s)
    {
        name=n;
        surname=s;
    }

};
std::ostream& operator<<(std::ostream& out, const Person& p)
{
    return out<<"name: "<<p.name<<"surname: "<<p.surname;
}

struct Book
{
    std::string name;
    //std::vector<Genre> genres;
    Genre genre;
    Person author;
    Book()=default;
    Book(std::string n,Genre g, Person a): name(n),genre(g),author(a) {};
};
std::ostream& operator<<(std::ostream& out, const Book& b)
{
    return out<<"name: "<<b.name<<" "<<"genre: "<<b.genre<<" "<<"author: "<<b.author;
}
std::vector<Book> books
{
    Book{"Jundle Book", Genre::Adventure, Person("Kipling")},
    Book{"War and Peace", Genre::Horror, Person("Tolstoy")},
    Book{"Forest Gump", Genre::Comedy, Person("Grum")},
    Book{"50 shades of Grey", Genre::Adventure, Person("James")}
};
struct Ice_cream
{
    std::string name;
    double weight;
    double price;
    double get_price(double control_weight)
    {
        return (control_weight/weight)*price;
    }
};
std::vector<Ice_cream> icecreams
{
    Ice_cream{"Alenka", 100.0,0.25},
    Ice_cream{"Ashan", 90.0, 30.5},
    Ice_cream{"Vorobey", 10.0, 100}
};

#endif // BOOK_H_INCLUDED
