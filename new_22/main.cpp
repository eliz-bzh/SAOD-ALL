#include <iostream>
#include <cmath>
struct pair   // квадратное уравнение
{
    double first;
    double second;
};
double get_d(double a, double b, double c)
{
    double d = pow(b,2)- 4*a*c;
    return d;
}
pair f(double a, double b, double c)
{
    pair result;
    double d = get_d(a, b, c);
    result.first = - b + sqrt(d)/2*a;
    result.second = - b - sqrt(d)/2*a;
    return result;
}
/*struct point
{
    int x;
    int y;
};
point lengs(point p1, point p2)
{
    return sqrt(std::pow((p2.x-p1.x),2)+std::pow((p2.y-p1.y),2));
}*/

struct vector
{
    int*array;
    int m_size;
    int m_cap;
vector ()
{
    std::cout<<"vector()"<<std::endl;
}
};
int main()
{
    pair res=f(5,25,2);
    std::cout<< res.first<<std::endl;
    std::cout<< res.second<<std::endl;
   /* point res_1=lengs(3,4);
    std::cout<<res_1<<std::endl;*/
    vector a;
    return 0;
}
