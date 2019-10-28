#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

namespace stu
{
    struct Set
{
    struct Node
    {
        Node* m_left = nullptr;
        Node* m_right = nullptr;
        int m_value;
        Node() = default;
        Node(int value):m_value(value){}
    };
    Node* head = nullptr;
    Set() = default;

    Node* add(Node* node, int value)
    {
        if(node == nullptr)
        {
            return new Node(value);
        }
        if(value > node->m_value)
        {
            node->m_right = add(node->m_right, value);
        }
        if(value < node->m_value)
        {
            node->m_left = add(node->m_left, value);
        }
        return node;
    }

    void insert(int value)
    {
        head = add(head, value);
    }

    void print(Node* node)
    {
        if(node!= nullptr)
        {
            print(node->m_left);
            std::cout<<node->m_value<<std::endl;
            print(node->m_right);
        }
    }

    void print_all()
    {
        print(head);
    }

    Node* find(Node* node, int value)
    {
        if(node == nullptr || node->m_value == value)
        {
            return node;
        }
        if(value > node->m_value)
        {
            return find(node->m_right,value);
        }
        return find(node->m_left,value);
    }
};
}



#endif // TREE_H_INCLUDED
