#include <iostream>

struct vector
{
    int*array;
    int m_size;
    int m_cap;
vector ()
{
    std::cout<<"vector()"<<std::endl;
    m_size = 0;
    m_cap = 10;
    array = new int [m_cap];
}
void push_back(int v)
{
	array[m_size] = v;
	++m_size;
}
};

int main()
{
    vector array;

	for (int i = 0; i != 5; ++i) 
	{
		array.push_back(i);
	}

	for (int i = 0; i != 5; ++i) 
	{
		std::cout << array[i] << " ";
	}

    return 0;
}
