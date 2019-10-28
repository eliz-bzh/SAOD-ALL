#include<iostream>
#define TRUE 1
#define FALSE 0
struct node
{
  int Key;
  int Count;
  int bal;
  node *Left;
  node *Right;
};

void Search (int x, node **p)
// x - ���� �������, ���������� � ���-������.
// *p - ��������� �� ������ ���-������.
// h - ����, ��������������� �� ���������� ������ ���������:
// TRUE - ������ ��������� �����������,
// FALSE - ������ ��������� �� �����������.
// ��� ������ ��������� � ������� Search() h=FALSE.
{
  node *p1, *p2;
  int h = FALSE;
  if (*p==NULL)
  { // ������� � ������ ���; �������� ��...
    *p = new(node);
    h = TRUE; (**p).Key = x;
    (**p).Count = 1; (**p).Left = (**p).Right = NULL;
    (**p).bal = 0; // ������� ��������� ������� ������.
  }
  else
  if (x<=(**p).Key)
  {
    Search (x,&((**p).Left)); // ������� ��� �������� � ������.
    if (h==TRUE)
      // ���� ������ ��������� �����������,
      // �� ������� ����� ����.
      switch ((**p).bal)
      {    case 1:  (**p).bal = 0; h = FALSE; break;
          // ���������� �������������������� ��������������.
          case  0: (**p).bal = -1; break; // ��� "���������" �����.
          case -1:
            //������������.
            p1 = (**p).Left;
            if ((*p1).bal==-1)
           {//����������� LL-�������.
               (**p).Left = (*p1).Right;
               (*p1).Right = *p;
               (**p).bal = 0; *p = p1;
           }
           else
           {//���������� LR-�������.
               p2 = (*p1).Right;
               (*p1).Right = (*p2).Left;
               (*p2).Left = p1;
               (**p).Left = (*p2).Right;
               (*p2).Right = *p;
               //�������� ������� ������� � ���������� p.
               if ((*p2).bal==-1) (**p).bal = 1;
               else (**p).bal = 0;
               // �������� ������� ������� � ���������� p1.
               if ((*p2).bal==1) (*p1).bal = -1;
               else (*p1).bal = 0;
               *p = p2;
          }
          (**p).bal = 0; h = FALSE;
         break;
      }
  }
  else //... ����� ������� ������ ����.
     if (x>(**p).Key)
    {
      Search (x,&((**p).Right));
      // ������� ��� �������� � ������.
      if (h==TRUE)
      // ���� ������ ��������� �����������,
      // �� ������� ������ ����.
      switch ((**p).bal)
      {    case -1:  (**p).bal = 0; h = FALSE; break;
           case  0: (**p).bal = 1; break;
           case  1:
              //������������.
              p1 = (**p).Right;
              if ((*p1).bal==1)
               { //����������� RR-�������.
                 (**p).Right = (*p1).Left;
                 (*p1).Left = *p; (**p).bal = 0; *p = p1;
                }
              else
                 { //����������� RL-�������.
                    p2 = (*p1).Left; (*p1).Left = (*p2).Right;
                   (*p2).Right = p1; (**p).Right = (*p2).Left;
                   (*p2).Left = *p;
                   // �������� ������� ������� � ���������� p.
                   if ((*p2).bal==1) (**p).bal = -1;
                   else (**p).bal = 0;
                   //�������� ������� ������� � ���������� p1.
                   if ((*p2).bal==-1) (*p1).bal = 1;
                   else (*p1).bal = 0; *p = p2;
                  }
              (**p).bal = 0; h = FALSE; break;
       }
    }
}

class TREE {
  private:
    int h;
    node *Tree;
  public:
    TREE () { Tree=NULL; h=FALSE;}
    void Search (int, node **);
    void Vyvod (node **, int);
    node** GetTree() {return &Tree;}
};

int main ()
{
    setlocale(LC_ALL, "Russian");
  TREE A;
  int el,i;
  int n;

  std::cout<<"���������� ������ � ������: ";
  std::cin>>n;
  std::cout<<"�������������� ���� ������ ������: \n";
  for (i=1; i<=n; i++)
    { std::cin>>el; A.Search (el,A.GetTree());}
      std::cout<<"���-������:\n"; A.Vyvod (A.GetTree(),0);

return 0;
}

void TREE::Search (int x, node **p)
// x - ���� �������, ���������� � ���-������.
// *p - ��������� �� ������ ���-������.
// h - ����, ��������������� �� ���������� ������ ���������:
// TRUE - ������ ��������� �����������,
// FALSE - ������ ��������� �� �����������.
// ��� ������ ��������� � ������� Search() h=FALSE.
{
  node *p1, *p2;

  h = FALSE;
  if (*p==NULL)
   {  *p = new(node);
      h = TRUE; (**p).Key = x;
      (**p).Count = 1; (**p).Left = (**p).Right = NULL;
      (**p).bal = 0; }
  else
   if (x<=(**p).Key)
   {    Search (x,&((**p).Left));
        if (h==TRUE)
          switch ((**p).bal)
          {
            case 1 :  (**p).bal = 0; h = FALSE; break;
            case 0 : (**p).bal = -1; break;
            case -1:
                     p1 = (**p).Left;
                     if ((*p1).bal==-1)
                     {    (**p).Left = (*p1).Right;
                          (*p1).Right = *p;
                          (**p).bal = 0; *p = p1; }
                     else {
                       p2 = (*p1).Right;
                       (*p1).Right = (*p2).Left;
                       (*p2).Left = p1;
                       (**p).Left = (*p2).Right;
                       (*p2).Right = *p;
                       if ((*p2).bal==-1) (**p).bal = 1;
                       else (**p).bal = 0;
                       if ((*p2).bal==1) (*p1).bal = -1;
                       else (*p1).bal = 0;
                       *p = p2;
                     }
                     (**p).bal = 0; h = FALSE;
                     break;
          }
   }
   else
    if (x>(**p).Key)
    {    Search (x,&((**p).Right));
         if (h==TRUE)
           switch ((**p).bal)
           {
              case -1:  (**p).bal = 0; h = FALSE; break;
              case  0: (**p).bal = 1; break;
              case  1:
                    p1 = (**p).Right;
                    if ((*p1).bal==1)
                    {    (**p).Right = (*p1).Left;
                         (*p1).Left = *p; (**p).bal = 0; *p = p1;
                    }
                    else
                    {     p2 = (*p1).Left; (*p1).Left = (*p2).Right;
                          (*p2).Right = p1; (**p).Right = (*p2).Left;
                          (*p2).Left = *p;
                          if ((*p2).bal==1) (**p).bal = -1;
                          else (**p).bal = 0;
                          if ((*p2).bal==-1) (*p1).bal = 1;
                          else (*p1).bal = 0;
                          *p = p2;
                    }
                    (**p).bal = 0; h = FALSE; break;
           }
    }
}

void TREE::Vyvod (node **w,int l)
//����������� ������ w �� ������ �������
//         (����������� ��������).
//*w - ��������� �� ������ ������.
{
  int i;

  if  (*w!=NULL)
  {
    Vyvod (&((**w).Right),l+1);
    for  (i=1; i<=l; i++) std::cout<<"   ";
    std::cout<<(**w).Key<<std::endl;
    Vyvod (&((**w).Left),l+1);
  }
}
