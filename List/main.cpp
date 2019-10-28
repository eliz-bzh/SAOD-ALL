#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <time.h>

template<class T>
struct List
{
    int size = 0;

    struct Node
    {
        T value;
        Node* next = nullptr;
        Node()=default;
        Node(T v) : value(v) {}
    };
    Node* head=nullptr;
    void push_back(T value)
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
    }
    List() = default;
    List(std::initializer_list<T> l)
    {
        for(typename std::initializer_list<T>::iterator i=l.begin(); i!=l.end(); ++i)
        {
            push_back(*i);
        }
    }

    List(const std::vector<T>& v)
    {
        for(auto i = v.begin(); i != v.end(); ++i)
        {
            this->push_back(*i);
        }
    }

    std::vector<T> toVector()
    {
        std::vector<T> r;
        r.push_back(this->head->value);
        for(auto i = this->head->next; i != nullptr; i = i->next)
        {
            r.push_back(i->value);
        }
        return r;
    }

    Node* find_last()
    {
        Node* i= head;
        for(; i->next!=nullptr; i=i->next);
        return i;
    }

    Node* find(Node item)
    {
        Node* i = head;
        for(; i->value != item.value; i = i->next);
        return i;
    }

    List operator+(const List& second)
    {
        List r;
        r.head = new Node(this->head->value);
        for(auto i = this->head->next; i != nullptr; i = i->next)
        {
            r.push_back(i->value);
        }
        for(auto i = second.head; i != nullptr; i = i->next)
        {
            r.push_back(i->value);
        }
        return r;
    }
    struct _iterator;
    using iterator = _iterator;
    struct _iterator
    {
        using iterator_category = std::forward_iterator_tag;
        Node* m_current = nullptr;
        _iterator () = default;
        _iterator (Node* current):m_current(current) {}

        T& operator* ()
        {
            return m_current->value;
        }

        bool operator!= (const iterator& that)
        {
            return !(*this == that);
        }

        operator bool ()
        {
            return m_current != nullptr;
        }

        iterator& operator++ ()
        {
            m_current = m_current->next;
            return *this;
        }

        iterator operator++ (int)
        {
            iterator temp = *this;
            m_current = m_current->next;
            return temp;
        }
    };
    void print_dbg()
    {
        for(Node* i=head; i!=nullptr; i=i->next)
        {
            std::cout<<i->value<<" ";
        }
    }


};


int main()
{
    srand(time(NULL));
    List<int> l;
    int size;
    std::cout<<"Vvedite size list1: ";
    std::cin>>size;
    for(auto i=0; i!=size; ++i)
    {
        l.push_back(rand()%100-5);
    }
    l.print_dbg();
    return 0;
}
