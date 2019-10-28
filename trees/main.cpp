#include <iostream>
using namespace std;

struct Node
{
    Node *l,*r;
    double x;
};

void add(double x,Node *&MyTree)
{
    if (NULL==MyTree)
    {
        MyTree=new Node;
        MyTree->x=x;
        MyTree->l=MyTree->r=NULL;
    }

    if (x<MyTree->x)
    {
        if (MyTree->l!=NULL)
            add(x,MyTree->l);
        else
        {
            MyTree->l=new Node;
            MyTree->l->l=MyTree->l->r=NULL;
            MyTree->l->x=x;
        }
    }

    if (x>MyTree->x)
    {
        if (MyTree->r!=NULL)
            add(x,MyTree->r);
        else
        {
            MyTree->r=new Node;
            MyTree->r->l=MyTree->r->r=NULL;
            MyTree->r->x=x;
        }
    }

}

const Node* node_max(const Node* tr)
{
    if(tr == NULL)
        return NULL;

    const Node* p = tr;
    while(p->r != NULL)
        p = p->r;
    return p;
}

//����� � ������������ �������
void Show_s(Node *&tree)
{
    if (NULL==tree)
        return;    //���� ������ ���, �������

    Show_s(tree->l); //������ ����� ���������
    cout<<tree->x<<endl; //�������� ����
    Show_s(tree->r); //������ ������ ���������
}
//����� � ������ �������
void Show_pr(Node *&tree)
{
    if (NULL==tree)
        return;    //���� ������ ���, �������

    cout<<tree->x<<endl; //�������� ����
    Show_pr(tree->l); //������ ����� ���������
    Show_pr(tree->r); //������ ������ ���������
}
//�������� �����
void Show_ob(Node *&tree)
{
    if (NULL==tree)
        return;    //���� ������ ���, �������

    Show_ob(tree->l); //������ ����� ���������
    Show_ob(tree->r); //������ ������ ���������

    cout<<tree->x<<endl; //�������� ����
}

const int size = 6;
void print (Node *t, int u)
{
    if (t == NULL) return;
    else
    {
        print(t->l, ++u);
        for (int i = 0; i<u; ++i)
        {}
        cout << "("<< u - size<< ")";
        cout << t->x << endl;
        u--;
    }
    print(t->r, ++u);
}

int main()
{
    double x;
    Node *MyTree=NULL;

    for (int i=0; i<10; i++)
    {
        cout<<"X = ";
        cin>>x;
        add(x,MyTree);
    }
    const Node* pmax = node_max(MyTree);
    if(pmax != NULL)
        std::cout << "max: " << pmax->x << std::endl;
    print(MyTree, 10);
    std::cout<<"Simtetrich obhod:" <<std::endl;
    Show_s(MyTree);
    std::cout<<"Obratni obhod:" <<std::endl;
    Show_ob(MyTree);
    std::cout<<"Primoi obhod:" <<std::endl;
    Show_pr(MyTree);
    return 0;
}
