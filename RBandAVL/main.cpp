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
// x - ключ вершины, помещаемой в АВЛ-дерево.
// *p - указатель на корень АВЛ-дерева.
// h - флаг, сигнализирующий об увеличении высоты поддерева:
// TRUE - высота поддерева увеличилась,
// FALSE - высота поддерева не увеличилась.
// При первом обращении к функции Search() h=FALSE.
{
  node *p1, *p2;
  int h = FALSE;
  if (*p==NULL)
  { // Вершины в дереве нет; включить ее...
    *p = new(node);
    h = TRUE; (**p).Key = x;
    (**p).Count = 1; (**p).Left = (**p).Right = NULL;
    (**p).bal = 0; // Вершине присвоили нулевой баланс.
  }
  else
  if (x<=(**p).Key)
  {
    Search (x,&((**p).Left)); // Вершина уже включена в дерево.
    if (h==TRUE)
      // Если высота поддерева увеличилась,
      // то выросла левая дуга.
      switch ((**p).bal)
      {    case 1:  (**p).bal = 0; h = FALSE; break;
          // Предыдущая несбалансированность уравновесилась.
          case  0: (**p).bal = -1; break; // Вес "склонился" влево.
          case -1:
            //Балансировка.
            p1 = (**p).Left;
            if ((*p1).bal==-1)
           {//Однократный LL-поворот.
               (**p).Left = (*p1).Right;
               (*p1).Right = *p;
               (**p).bal = 0; *p = p1;
           }
           else
           {//Двукратный LR-поворот.
               p2 = (*p1).Right;
               (*p1).Right = (*p2).Left;
               (*p2).Left = p1;
               (**p).Left = (*p2).Right;
               (*p2).Right = *p;
               //Пересчет баланса вершины с указателем p.
               if ((*p2).bal==-1) (**p).bal = 1;
               else (**p).bal = 0;
               // Пересчет баланса вершины с указателем p1.
               if ((*p2).bal==1) (*p1).bal = -1;
               else (*p1).bal = 0;
               *p = p2;
          }
          (**p).bal = 0; h = FALSE;
         break;
      }
  }
  else //... иначе выросла правая дуга.
     if (x>(**p).Key)
    {
      Search (x,&((**p).Right));
      // Вершина уже включена в дерево.
      if (h==TRUE)
      // Если высота поддерева увеличилась,
      // то выросла правая дуга.
      switch ((**p).bal)
      {    case -1:  (**p).bal = 0; h = FALSE; break;
           case  0: (**p).bal = 1; break;
           case  1:
              //Балансировка.
              p1 = (**p).Right;
              if ((*p1).bal==1)
               { //Однократный RR-поворот.
                 (**p).Right = (*p1).Left;
                 (*p1).Left = *p; (**p).bal = 0; *p = p1;
                }
              else
                 { //Двухкратный RL-поворот.
                    p2 = (*p1).Left; (*p1).Left = (*p2).Right;
                   (*p2).Right = p1; (**p).Right = (*p2).Left;
                   (*p2).Left = *p;
                   // Пересчет баланса вершины с указателем p.
                   if ((*p2).bal==1) (**p).bal = -1;
                   else (**p).bal = 0;
                   //Пересчет баланса вершины с указателем p1.
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

  std::cout<<"Количество вершин в дереве: ";
  std::cin>>n;
  std::cout<<"Информационные поля вершин дерева: \n";
  for (i=1; i<=n; i++)
    { std::cin>>el; A.Search (el,A.GetTree());}
      std::cout<<"АВЛ-дерево:\n"; A.Vyvod (A.GetTree(),0);

return 0;
}

void TREE::Search (int x, node **p)
// x - ключ вершины, помещаемой в АВЛ-дерево.
// *p - указатель на корень АВЛ-дерева.
// h - флаг, сигнализирующий об увеличении высоты поддерева:
// TRUE - высота поддерева увеличилась,
// FALSE - высота поддерева не увеличилась.
// При первом обращении к функции Search() h=FALSE.
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
//Изображение дерева w на экране дисплея
//         (рекурсивный алгоритм).
//*w - указатель на корень дерева.
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
