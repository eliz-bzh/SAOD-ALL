#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct List
{
    struct Node
    {
        int value;
        Node* next = nullptr;
        Node() = default;
        Node(int v) : value(v) {};

    };
    Node* head = nullptr;
    List() = default;
    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i=i->next);
        return i;
    }
    void push_back(int v)
    {
        if(head==nullptr)
        {
            head=new Node(v);
        }
        else
        {
            Node* temp = findlast();
            temp->next = new Node(v);
        }
    }
    List(std::initializer_list<int> l)
    {
        for(auto i= l.begin(); i!= l.end(); ++i)
        {
            push_back(*i);
        }
    }
};

#endif // LIST_H_INCLUDED
