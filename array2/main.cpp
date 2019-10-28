#include <iostream>

void arrs(int array[][3], int m, int n)//matrix 1
{
    for(int i=1; i!=m+1; ++i)
    {
        for(int j=1; j!=n+1; ++j)
        {
            array[i][j]= 10*i;
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
void arrs2(int array[][3], int m, int n)//matrix 2
{
    for(int i=1; i!=m+1; ++i)
    {
        for(int j=1; j!=n+1; ++j)
        {
            array[i][j]= 5*j;
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
 template<class Iter>
void fill_array (Iter first, Iter last,int a, int b)
 {
     int c;
     for(; first != last; ++first)
     {
         c=a+b;
         *first = c;
         std::cout<<*first<< " ";
         a=b;
         b=c;
     }
 }
int sum_product(int array[][3],int m, int n, int k) //matrix 17
{
    int sum=0;
    int product=1;
    for(int i=0; i!= m;++i)
    {
        for(int j=0; j!= n; ++j)
        {
            if(i==k)
            {
                sum+=array[k][j];
                product*= array[k][j];
            }
        }
    }
    std::cout<<"Sum: "<<sum<<std::endl;
    return product;
}
int sum_product2(int array[][3],int m, int n, int k) //matrix 18
{
    int sum=0;
    int product=1;
    for(int i=0; i!= m;++i)
    {
        for(int j=0; j!= n; ++j)
        {
            if(j==k)
            {
                sum+=array[i][k];
                product*= array[i][k];
            }
        }
    }
    std::cout<<"Sum: "<<sum<<std::endl;
    return product;
}
void sum_stroc_matrix(int array[][3], int m, int n) //matrix 19
{
    int sum=0;
    for(int i=0; i!=m; ++i)
    {
        for(int j=0; j!=n;++j)
        {
            sum+=array[i][j];
        }
        std::cout<<"Sum "<<i+1<<" stroki: "<<sum<<std::endl;
        sum=0;
    }
}
void product_stolb_matrix(int array[][3], int m, int n) //matrix 20
{
    int product=1;
    for(int i=0; i!=n; ++i)
    {
        for(int j=0; j!=m;++j)
        {
            product*=array[j][i];
        }
        std::cout<<"Product "<<i+1<<" stobca: "<<product<<std::endl;
        product=1;
    }
}
int average(int array[][3], int m, int n)
{
    int sum=0;
    for(int i=0; i!= m;++i)
    {
        for(int j=0; i!= n; ++j)
        {
            sum+=array[i][j];
        }
    }
    return sum/(m*n);
}
void matrix_22(int array[][5], int m, int n)
{
    int sum=0;
    for(int i=0; i!=m+(n-m)+1; i+=2)
    {
        for(int j=0; j!=n-(n-m); j++)
        {
            sum+=array[j][i];
        }
        std::cout<<sum<<std::endl;
        sum=0;
    }

}
int main()
{
    int arr [2][3];
    //arrs(arr,2,3);
    //arrs2(arr,2,3);
    int array [5] {};
    int arr1[2][3] {{3,2,1},{4,3,1}};
    int arr12[3][5] {{3,2,1,5,4},
                    {4,3,1,4,3},
                    {4,2,1,1,2}};
    //fill_array(array,array+5,1,2);
    /*std::cout<<sum_product(arr1,2,3,0)<<std::endl;
    std::cout<<sum_product2(arr1,2,3,0)<<std::endl;
    sum_stroc_matrix(arr1,2,3);
    product_stolb_matrix(arr1,2,3);*/
    matrix_22(arr12,3,5);
    return 0;
}
