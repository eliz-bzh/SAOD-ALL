#include <iostream>
#include <cmath>
using namespace std;

int f(int a)
{
	int r= a%10;
	int e= (a/10)%10;
	return r+e;
}
bool f2(int a)
{
	return a/100==9;
}
bool f3(int x, int y, int z)
{
	return (x==y) && (y==z);
}
double f4(double x, double y)
{
	double r= (x/2)+(1/(1+pow(x,y)))+((1+pow(x,2))/2)+((1+x)/sqrt(1-x));
	return sqrt(r);
}
double f5(double x)
{
	return 4*(x/1);
}

int main() {
	int result=f(53);
	cout<<result<<endl;
	bool result2=f2(909);
	cout<<result2<<endl;
	bool result3=f3(2,3,2);
	cout<<result3<<endl;
	double result4=f4(3,4);
	cout<<result4<<endl;
	double result5=f5(6);
	cout<<result5<<endl;
	return 0;
}
