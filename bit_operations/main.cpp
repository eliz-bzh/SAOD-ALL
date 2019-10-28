#include <iostream>
#define Male 1 //00000001
#define Business 2 //00000010
#define Old 4 //00000100
#include <fstream>
#include "Book.h"
#include <algorithm>
 void f(std::string name, int flags)
 {
     if(flags&1)
     {
         std::cout<<"Mr"<<std::endl;
     }
     else
     {
         std::cout<<"Ms"<<std::endl;
     }
     std::cout<<name;
     std::cout<<std::endl;
     std::cout<<"We offer ...";
     std::cout<<std::endl;
     if(flags&2)
     {
         std::cout<<"Business"<<std::endl;
     }
     else
     {
         std::cout<<"Not for business"<<std::endl;
     }
     if(flags&4)
     {
         std::cout<<"Old"<<std::endl;
     }
     else
     {
         std::cout<<"Not old"<<std::endl;
     }
 }
struct SingleTone
{
     SingleTone()=default;
     void operator<<(int a){std::cout<<a;}
}st;

int main()
{
    /*f("Liz",000);
    st<<6;
    std::cout<<std::endl;
    std::fstream fs("test.txt", fs.in|fs.out|fs.trunc);
    if(!fs.is_open())
    {
        std::cout<<"Error"<<std::endl;
    }
    else
    {
        fs<<"Hello";
    }
    std::string result;
    fs>>result;*/
    Person a("Tolstoy");
    std::cout<< a<< std::endl;
    /*Book b("War and Peace", Genre::Horror, a.surname);
    std::cout<< b<<std::endl;
    std::for_each(books.begin(), books.end(), [](Book b){std::cout<<b<<std::endl;});
    Genre key=Genre::Adventure;
    std::for_each(books.begin(), books.end(),[key](const Book& b){if(b.genre==key){std::cout<<b;}});
    std::cout<<fs.in<<" "<<fs.out<<" "<<fs.trunc<<" "<<fs.binary<<" ";*/
    //Ice_cream b("25 kop", 70, 5);
    std::for_each(icecreams.begin(), icecreams.end(), [](Ice_cream a){std::cout<<a.name<<" "<<a.get_price(1000)<<" ";});
    return 0;
}
