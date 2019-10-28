#ifndef REVERSE_H_INCLUDED
#define REVERSE_H_INCLUDED

namespace stu
{
template <class Iter>
struct reverse_iterator
{
    Iter m_current = nullptr;
    reverse_iterator () = default;
    reverse_iterator (Iter current) : m_current(current) {}
    Iter base ()
    {
        return m_current;
    }
    void operator++()
    {
        --m_current;
    }
    bool operator==(/*reverse_iterator* this*/ const reverse_iterator& that)
    {
        return this->m_current == that.m_current;
    }
    bool operator!=(/*reverse_iterator* this*/ const reverse_iterator& that)
    {
        return !(*this == that);
    }
    auto& operator*(/*reverse_iterator* this*/)
    {
        return *m_current;
    }
    reverse_iterator operator+ (std::ptrdiff_t dif)
    {
        return reverse_iterator(m_current - dif);
    }
    reverse_iterator operator- (std::ptrdiff_t dif)
    {
        return reverse_iterator (m_current + dif);
    }
    std::ptrdiff_t operator- (reverse_iterator that)
    {
        return m_current - that.m_current;
    }
};
}

#endif // REVERSE_H_INCLUDED
