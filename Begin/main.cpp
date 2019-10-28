#include <iostream>
#include <cmath>
#define Pi 3.14
using namespace std;

int f(int a)
{
    return 4*a;
}
int f2(int a)
{
    return pow(a,2);
}
int f3(int a, int b)
{
    int s= a*b;
    int p= 2*(a+b);
    cout<<s<<" ";
    return p;
}
double f4(double d)
{
    return Pi*d;
}
int f5(int a)
{
    int s= 6*pow(a,2);
    int v= pow(a,3);
    cout<<s<<" ";
    return v;
}
int f6(int a, int b, int c)
{
    int s= 2*(a*b+b*c+a*c);
    int v= a*b*c;
    cout<<s<<" ";
    return v;
}
double f7(double r)
{
    double l=2*Pi*r;
    double s=Pi*pow(r,2);
    cout<<l<<" ";
    return s;
}
int f8(int a, int b)
{
    int t=(a+b)/2;
    cout<<"Среднее арифметическое a и b: ";
    return t;
}
double f9(double a, double b)
{

    double t=sqrt(a*b);
    cout<<"Среднее геометрическое a и b: ";
    return t;
}
int f10(int a, int b)
{
    int sum=pow(a,2)+pow(b,2);
    int raz=pow(a,2)-pow(b,2);
    int pro=pow(a,2)*pow(b,2);
    int cha=pow(a,2)/pow(b,2);
    cout<<sum<<" ";
    cout<<raz<<" ";
    cout<<pro<<" ";
    return cha;
}
int f11(int a, int b)
{
    int sum=abs(a)+abs(b);
    int raz=abs(a)-abs(b);
    int pro=abs(a)*abs(b);
    int cha=abs(a)/abs(b);
    cout<<sum<<" ";
    cout<<raz<<" ";
    cout<<pro<<" ";
    return cha;
}
int f12(int a, int b)
{
    int c= sqrt(pow(a,2)+pow(b,2));
    int p= a+b+c;
    cout<<c<<" ";
    return p;
}
double f13(double r1,double r2)
{
    double s1=Pi*pow(r1,2);
    double s2=Pi*pow(r2,2);
    double s3=s1-s2;
    cout<<s1<<" ";
    cout<<s2<<" ";
    return s3;
}
double f14(int l)
{
    double r=l/(2*Pi);
    double s=Pi*pow(r,2);
    cout<<r<<" ";
    return s;
}
double f15(double s)
{
    double d=sqrt(4*s/Pi);
    double l=Pi*d;
    cout<<d<<" ";
    return l;
}
double f16(double x1, double x2)
{
    return abs(x2-x1);
}
int f17(int a, int b, int c)
{
    int ac=c-a;
    int bc=c-b;
    int sum=ac+bc;
    cout<<ac<<" ";
    cout<<bc<<" ";
    return sum;
}
int f18(int a, int b, int c)
{
    int ac=c-a;
    int bc=c-b;
    int pro=ac*bc;
    cout<<ac<<" ";
    cout<<bc<<" ";
    return pro;
}
int f19(int x1, int x2, int y1, int y2)
{
    int a=y2-y1;
    int b=x2-x1;
    int p=2*(a+b);
    int s=a*b;
    cout<<p<<" ";
    return s;
}
int f20(int x1, int x2, int y1, int y2)
{
    int a=pow((x2-x1),2);
    int b=pow((y2-y1),2);
    return sqrt(a+b);
}
int f21(int x1, int x2, int x3, int y1, int y2, int y3)
{
    int a=pow((x2-x1),2);
    int b=pow((y2-y1),2);
    int s1=sqrt(a+b);
    int c=pow((x2-x3),2);
    int d=pow((y2-y3),2);
    int s2=sqrt(c+d);
    int g=pow((x3-x1),2);
    int f=pow((y3-y1),2);
    int s3=sqrt(g+f);
    int p=(s1+s2+s3)/2;
    int P= s1+s2+s3;
    int S= sqrt(p*(p-s1)*(p-s2)*(p-s3));
    cout<<P<<" ";
    return S;
}
void f22 (int a, int b)
{
    int c=a;
    int d=b;
    cout << d<< " " <<c;
}
void f23(int a, int b, int c)
{
    int a1=a;
    int b1=b;
    int c1=c;
    b=a1;
    c=b1;
    a=c1;
    cout<<a << " "<<b <<" "<<c<< endl;
}
void f24(int a, int b, int c)
{
    int a1=a;
    int b1=b;
    int c1=c;
    b=c1;
    c=a1;
    a=b1;
    cout<<a << " "<<b <<" "<<c<<endl;
}
int f25(int x)
{
    return 3*pow(x,6)-6*pow(x,2)-7;
}
int f26(int x)
{
    return 4*pow(x-6,6)-7*(x-3,3)+2;
}

int f27(int a)
{
    int a2=pow(a,2);
    int a4=pow(a,4);
    int a8=pow(a,8);
    cout<<a2<<" ";
    cout<<a4<<" ";
    return a8;
}
int f28(int a)
{
    int a2=pow(a,2);
    int a3=pow(a,3);
    int a5=pow(a,5);
    int a10=pow(a,10);
    int a15=pow(a,15);
    cout<<a2<<" ";
    cout<<a3<<" ";
    cout<<a5<<" ";
    cout<<a10<<" ";
    return a15;
}
double f29(double a)
{
    double rad=(a*Pi)/180;
    return rad;
}
double f30(double a)
{
    double rad=(a*180)/Pi;
    return rad;
}
double f31(double f)
{
    return (f-32)*(5.0/9.0);
}
double f32(double c)
{
    return (c*9.0/5.0)+32;
}
int f33(int x, int a, int y)
{
    int kg=a/x;
    int c= (y*a)/x;
    cout<<kg<<" ";
    return c;
}
double f34(double x, double a, double y, double b)
{
    double kg_c=a/x;
    double kg_i=b/y;
    double r=a/b;
    cout<<kg_c<<" "<<kg_i<<" ";
    return r;
}
double f35(double v,double u,double t1,double t2)
{
    double k=v*t1;
    double vk=v-u;
    double s=k*vk*t2;
    cout<<s<<endl;
}
double f36(double v1,double v2,double s,double t)
{
    double v3=v1+v2;
    double s1=v3*t+s;
    cout<<s1<<endl;
}
double f37(double v1,double v2,double s,double t)
{
    double r= abs(s-(v1+v2)*t) ;
    cout<<r<<endl;
}
double f38(double a,double b)
{
    double x=(-b)/a;
    cout<<x<<endl;
}
double f39(double a,double b,double c)
{
    double d=pow(b,2)-4*a*c;
    double x1=(-b+sqrt(d))/2*a;
    double x2=(-b-sqrt(d))/2*a;
    cout<<min(x1,x2)<<endl;
    cout<<max(x1,x2)<<endl;
}
double f40(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double d=a1*b2-a2*b1;
    double x=(c1*b2-c2*b1)/d;
    double y=(a1*c2-a2*c1)/d;
    cout<<x<<endl;
    cout<<y<<endl;
}
int main()
{
    int r=f(2);
    cout<<r<<endl;
    int r2=f2(4);
    cout<<r2<<endl;
    int r3=f3(2,4);
    cout<<r3<<endl;
    double r4=f4(2);
    cout<<r4<<endl;
    int r5=f5(2);
    cout<<r5<<endl;
    int r6=f6(2,3,4);
    cout<<r6<<endl;
    double r7=f7(4);
    cout<<r7<<endl;
    int r8=f8(3,4);
    cout<<r8<<endl;
    double r9=f9(10,2);
    cout<<r9<<endl;
    int r10=f10(2,4);
    cout<<r10<<endl;
    int r11=f11(-4,2);
    cout<<r11<<endl;
    int r12=f12(4,3);
    cout<<r12<<endl;
    double r13=f13(4,2);
    cout<<r13<<endl;
    double r14=f14(4);
    cout<<r14<<endl;
    double r15=f15(4);
    cout<<r15<<endl;
    double r16=f16(15,-67);
    cout<<r16<<endl;
    int r17=f17(4,5,8);
    cout<<r17<<endl;
    int r18=f18(4,8,5);
    cout<<r18<<endl;
    int r19=f19(3,6,2,8);
    cout<<r19<<endl;
    int r20=f20(2,4,6,8);
    cout<<r20<<endl;
    int r21=f21(2,4,6,8,12,14);
    cout<<r21<<endl;
    f22(3,5);
    f23(3,4,6);
    f24(7,6,5);
    int r25=f25(2);
    cout<<r25<<endl;
    int r26=f26(2);
    cout<<r26<<endl;
    int r27=f27(2);
    cout<<r27<<endl;
    int r28=f28(2);
    cout<<r28<<endl;
    double r29=f29(47);
    cout<<r29<<endl;
    double r30=f30(3.2);
    cout<<r30<<endl;
    double r31=f31(42);
    cout<<r31<<endl;
    double r32=f32(42);
    cout<<r32<<endl;
    int r33=f33(2,8,3);
    cout<<r33<<endl;
    double r34=f34(2,8,3,12);
    cout<<r34<<endl;
    double r35=f35(5,9,8,6);
    cout<<r35<<endl;
    double r36=f36(6,5,8,9);
    cout<<r36<<endl;
    double r37=f37(1,2,5,6);
    cout<<r37<<endl;
    double r38=f38(8,6);
    cout<<r38<<endl;
    double r39=f39(5,9,8);
    cout<<r39<<endl;
    double r40=f40(5,9,8,6,5,3);
    cout<<r40<<endl;
    return 0;
}

