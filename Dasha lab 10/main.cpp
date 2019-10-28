#include <iostream>

double max_arrays(double*array, int n)
{
    double max_el=array[0];
    for(int i=0; i<n; ++i)
    {
        if(max_el<array[i])
        {
            max_el=array[i];
        }
    }
    return max_el;
}
void max_()
{
	int a=1;
    int n;
    std::cout<<"Vvedite kolichestvo elementov: ";
    std::cin>>n;
    double*array_a= new double[n];
    double*array_b= new double[n];
    double*array_c= new double[n];
    for(int j=0; j<3; ++j)
    {
    for(int i=0; i<n; ++i)
    {
        array_a[i]=(rand()%1000)*0.2;
        std::cout<<array_a[i]<<" ";

    }
    std::cout<<std::endl;
    std::cout<<"Max "<<a++<<" array:"<<max_arrays(array_a,n)<<std::endl;
    //array_a=array_b;
    }

}
int main() {
	max_();
	return 0;
}
