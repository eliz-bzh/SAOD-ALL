#ifndef NEW_LIST_H_INCLUDED
#define NEW_LIST_H_INCLUDED
#include <cstddef>
#include <initializer_list>
#include <iterator>
#include <vector>

namespace stu
{
template <class T>
class forward_list
{
public:
    struct _iterator;

    struct Node
    {
        Node* next = nullptr;
        T m_value;
        Node() = default;
        Node(T value):m_value(value) {};

    };
    using value_type = T;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using iterator = _iterator;

    Node* head = nullptr;
    size_type m_size = 0;
    forward_list():head(new Node()) {}
    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

public:
    void push_back(T value)
    {
        Node* current = find_last();
        current->m_value = value;
        current->next = new Node();
        ++m_size;
    }

    forward_list(std::initializer_list<value_type> l):forward_list()
    {
        for(typename std::initializer_list<value_type>::iterator i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }

    struct _iterator
    {
        Node* m_current = nullptr;;
        _iterator() = default;
        _iterator(Node* current):m_current(current) {}
        operator bool()
        {
            return m_current != nullptr;
        }

        const iterator& operator++()
        {
            m_current = m_current->next;
            return *m_current;
        }

        const iterator& operator*()
        {
            return m_current->m_value;
        }

        bool operator==(const _iterator& that)
        {
            return  this->m_current == that.m_current;
        }

        bool operator!=(const _iterator& that)
        {
            return  this->m_current != that.m_current;
        }
    };
    iterator before_begin()
    {
        return iterator(head);
    }

    iterator begin()
    {
        return iterator(head->next);
    }

    iterator end()
    {
        return iterator(find_last());
    }

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

    void erase_after(iterator pos)
    {
        Node* temp;
        ++pos;
        for(auto i = pos; i != end(); ++i)
        {
            delete temp;
            temp = i.m_current;
            --m_size;
            std::cout << *i <<" ";
        }
        std::cout << std::endl;
        pos.m_current->next = nullptr;
    }

    void push_front(value_type value)
    {
        Node* temp = head;
        head = new Node(value);
        head->next = temp;
    }

    void pop_front()
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void swap(forward_list& other)
    {
        std::iter_swap(this->head, other.head);
    }

    void print_dbg()
    {
        for(Node* i=head; i!=nullptr; i=i->next)
        {
            std::cout<<i->m_value<<" ";
        }
    }
};
}


#endif // NEW_LIST_H_INCLUDED
