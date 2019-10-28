#include <iostream>

struct Point
{
    int x;
    int y;
Point(int x_, int y_)
{
    x=x_;
    y=y_;
}
Point()
{
    x=0;
    y=0;
}
};
struct Date
{
    int day;
    int month;
    int year;
Date(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
}
};
struct Person
{
    //Date bd;
    std::string sex;
    std::string first_name;
    std::string second_name;
    int weight;
    int height;
Person(/*int d, int m, int y, */std::string s, std::string f, std::string sn, int w, int h)
{
    //Date bd;
    sex=s;
    first_name=f;
    second_name=sn;
    weight=w;
    height=h;
}
};

int main()
{
    Point a(1,4);
    Point b;
    Date bd(28,01,2002);
    Person liz(/*28,01,2002,*/"W","Liz","Bozhkova",55,165);
    std::cout<<bd.day<<"."<< bd.month<<"."<<bd.year<<std::endl;
    std::cout<<liz.sex<<" "<<liz.first_name<<" "<<liz.second_name<<" "<<liz.weight<<" "<<liz.height<<std::endl;
    std::cout << b.x <<" " << b.y << std::endl;
    return 0;
}
