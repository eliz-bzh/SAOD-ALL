#include <iostream>
#include <iterator>
#include <initializer_list>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <time.h>

template<class T>
struct List_bic
{
    struct _iterator;
    using iterator = _iterator;
    using size_type = std::size_t;
    struct Node
    {
        T value;
        Node* next;
        Node* prev;
        Node ()=default;
        Node (T v, Node* n = nullptr, Node* p = nullptr):value(v), next(n), prev(p) {}
    };
    Node* head = nullptr;
    size_type m_size = 0;
    List_bic():head(new Node()) {}
    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }
    List_bic find_last_n(List_bic l,iterator begin, int n)
    {
        Node* i = head;
        n--;
        Node* j;
        *j = n;
        for(; i <= j; i = i->next);
        head = head->next;
        delete i;
        return l;
    }
    void del() {
    int p;
    List_bic *J;
    std::cout<<"Vvedite klych elementa dlya udalenija:";
    std::cin>>p;
    prev=head;
    auto last = J.find_last();
    while((last) && p!=last->Number) {
        last=prev;
        prev=prev->Next;
    }
    if(!last) std::cout<<"Ne verniy kluch\n";
    else J=last;
    if(J){
    prev=J->Next;
    J->Next=prev;
    delete J;
    }
    }
    void push_back (T v)
    {
        Node* temp = find_last();
        temp->next = new Node(v);
        temp->prev = temp;
        ++m_size;
    }
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

        bool operator== (const iterator& that)
        {
            return this->m_current == that.m_current;
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
    iterator begin()
    {
        return iterator(head->next);
    }

    iterator end()
    {
        return iterator(nullptr);
    }

    iterator before_begin()
    {
        return iterator(head);
    }

    void print_dbg(iterator begin, iterator end)
    {
        for(auto i=begin; i!=end; i++)
        {
            std::cout<<*i<<" ";
        }
    }
};

int main()
{
    List_bic<double> list;
    int size;
    std::cout<<"Vvedite size list: ";
    std::cin>>size;
    for(auto i=0; i!=size; ++i)
    {
        list.push_back((double)rand()*0.010-100);
    }
    list.print_dbg(list.begin(),list.end());
    int n;
    std::cout<<"\nVvedite n delete element: ";
    std::cin>>n;
    list.del();
    list.print_dbg(list.begin(),list.end());
    return 0;
}
