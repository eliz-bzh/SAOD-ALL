#include <iostream>
#include <initializer_list>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <time.h>

namespace stu
{
template <class T>
struct forward_list
{
    struct _iterator;
    using value_type = T;
    using reference = T&;
    using const_reference = const reference;
    using difference_type = std::ptrdiff_t;
    using size_type = std::size_t;
    using iterator = _iterator;
    using pointer = T*;

    struct Node
    {
        value_type value;
        Node* next;
        Node ():next(nullptr) {}
        Node (value_type v, Node* n = nullptr):value(v), next(n) {}
    };

    Node* head = nullptr;
    size_type m_size = 0;
    forward_list():head(new Node()) {}

    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

    void push_back (value_type v)
    {
        //std::cout << "void push_back (const T& v)" << std::endl;
        Node* temp = find_last();
        temp->next = new Node(v);
        ++m_size;
    }

    /*void push_back (T&& v)
    {
        //std::cout << "void push_back (const T&& v)" << std::endl;
        Node* temp = find_last();
        temp->next = new Node(v);
        ++m_size;
    }
*/
    forward_list(std::initializer_list<value_type> l):forward_list()
    {
        for(auto i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }
    ///Element access:
    reference front()
    {
        return head->next->value;
    }

    ///Iterators:
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

    ///Capacity:
    bool empty()
    {
        return head->next == nullptr;
    }

    size_type size() const noexcept
    {
        return m_size;
    }

    size_type max_size()const noexcept
    {
        size_type temp = 0;
        return temp - 1;
    }

    ///Modifiers:
    void clear() noexcept
    {
        Node* temp;
        for(auto i = begin(); i != end(); ++i)
        {
            delete temp;
            temp = i.m_current;
        }
        delete temp;
        m_size = 0;
    }

    Node* find(iterator key)
    {
        for(auto i = begin(); i != end(); ++i)
        {
            if(i == key)
            {
                return i;
            }
        }
        return end();
    }

    iterator insert_after(const iterator pos, T value)
    {
        Node* temp = pos.m_current->next;
        pos.m_current->next = new Node(value);
        pos.m_current->next->next = temp;
    }

    struct _iterator
    {
        using iterator_category = std::forward_iterator_tag;
        Node* m_current = nullptr;
        _iterator () = default;
        _iterator (Node* current):m_current(current) {}

        reference operator* ()
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

        reference operator-> ()
        {
            // return m_current->value;
        }
    };
    void print_dbg(iterator b, iterator e)
    {
        for(auto i=b; i!=e; i++)
        {
            std::cout<<*i<<" ";
        }
    }
};
}

int main()
{
    srand(time(NULL));
    stu::forward_list<double> list;
    int size;
    std::cout<<"Vvedite size list: ";
    std::cin>>size;
    for(auto i=0; i!=size; ++i)
    {
        list.push_back((double)rand()*0.010-100);
    }
    list.print_dbg(list.begin(),list.end());
    std::cout << std::endl;
    double n;
    std::cout<<"Vvedite double n: ";
    std::cin>>n;
    list.insert_after(list.begin(), n);
    list.print_dbg(list.begin(),list.end());
    return 0;
}
