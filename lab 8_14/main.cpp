#include <iostream>
void swap_range(int first_1, int  last_1, int  first_2)
{
    while(first_1!=last_1)
    {
        std::swap(first_1,first_2);
        ++first_1;
        ++first_2;
    }
}
int main()
{
   /* int s = 2;
    int el = 3;
    int array[m][el];
    for(int i = 0; i < s; i++)
    {
        std::cout << "Stolb " << i + 1 <<std::endl;

        for(int j = 0; j < el; j++)
        {
            std::cout << "Vvedite chislo: ";
            std::cin >> array[j][i];

        }
    }
    for(int i=0; i<el; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            std::cout<<array[i][j]<<std::endl;
        }
        std::cout<<std::endl;
    }*/
    int array[2][3]={{1,2,3},{4,5,6}};
    std::cout<<swap_range(0,6,3)<<std::endl;
    return 0;
}
