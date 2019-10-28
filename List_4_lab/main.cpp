#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <time.h>

template <class T>
struct List
{
    T value;
    List* ptr;
    List() = default;

    List* init(int a)
    {
        List *lst;
        lst = (struct List*)malloc(sizeof(struct List));
        lst->value = a;
        lst->ptr = nullptr;
        return(lst);
    }
    /*void push_back(T value)
    {
        if(head==nullptr)
        {
            head=new Node(value);
        }
        else
        {
            Node* temp=find_last();
            temp->next=new Node(value);
        }
        this->size++;
    }*/
    List(std::initializer_list<T> l)
    {
        for(typename std::initializer_list<T>::iterator i=l.begin(); i!=l.end(); ++i)
        {
            push_back(*i);
        }
    }
    void listprint(List *lst)
    {
        struct List *p;
        p = lst;
        do
        {
            printf("%d ", p->value);
            p = p->ptr;
        }
        while (p != nullptr);
    }



};


int main()
{
    List<int> l;
    l.init(1);
    l.listprint(l);
    return 0;
}
