#include <iostream>


double min_arrays(double*array, int n)
{
    double min_el=array[0];
    for(int i=0; i<n; ++i)
    {
        if(min_el>array[i])
        {
            min_el=array[i];
        }
    }
    return min_el;
}
void min_()
{
    int n;
    std::cout<<"Vvedite kolichestvo elementov: ";
    std::cin>>n;
    double*array_a= new double[n];
    double*array_b= new double[n];
    double*array_c= new double[n];
    for(int i=0; i<n; ++i)
    {
        array_a[i]=(rand()%1000)*-0.2;
        std::cout<<array_a[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Min A:"<<min_arrays(array_a,n)<<std::endl;
    for(int i=0; i<n; ++i)
    {
        array_b[i]=(rand()%1000)*0.2;
        std::cout<<array_b[i]<<" ";

    }
    std::cout<<std::endl;
    std::cout<<"Min B:"<<min_arrays(array_b,n)<<std::endl;
    for(int i=0; i<n; ++i)
    {
        array_c[i]=(rand()%1000)*2.3;
        std::cout<<array_c[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Min C:"<<min_arrays(array_c,n)<<std::endl;
}
int main()
{
    min_();
    return 0;
}
