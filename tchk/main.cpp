#include <iostream>
#define PI  3.14
using UP = bool(*)(int);

struct Point
{
    int x;
    int y;
    Point ()
    {
        x = 0;
        y = 0;
    }
    Point (int x_, int y_)
    {
        x = x_;
        y = y_;
    }
};

bool is_first_cp (Point p)
{
    return p.x > 0 && p.y > 0;
}

template <class Iterator, class UP>

bool all_of (Iterator first, Iterator last, UP p)
{
    for (; first < last; ++first)
    {
        if (!p (*first))
        {
            return false;
        }
        return true;
    }
}

struct Figure
{
    int color;
    virtual double square () = 0;
    virtual double perimetr () = 0;

};

struct rectungle : Figure
{
    int a;
    int b;
    double square() override
    {
        return a * b;
    }
};

/*struct circle : Figure
{
    int r;
    double square () override
    {
        return PI * std::pow(r, 2);
    }
    double perimetr () override
    {
        return 2*PI*r;
    }
};*/

/*Figure* f = new circle;
Figure* f1 = new Rectangle;
Figure* f2 = new Square;
Figure* f3 = new Trictangle;
*/
int accumulate (Figure* first, Figure* last, int temp)
{
    for (; first < last; ++first)
    {
        temp += first -> square();
    }
    return temp;
}

int main()
{

//  Figure* arr[3]={new circle(2), new  Rectangle(4, 3), new square(4)};
    Point arr[3] {Point(-2, 3), Point(-3, 2), Point(-5, 4)};
    std::cout << all_of(arr, arr+10, is_first_cp)<<std::endl;
    return 0;
}
