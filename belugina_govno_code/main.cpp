#include <iostream>
#include "stdio.h"
#include "conio.h"
#define infinity 999
using namespace std;

void dij(int n, int v, int cost[10][10], int disit[])
{
    int i, u, count, w, flag[10], min;
    for(i = 1; i <= n; ++i)
    {
        flag[i] = 0, disit[i] = cost[v][i];
        count = 2;
        while(count <= n)
        {
            min = 999;
            for(w = 1; w <= min; ++w)
            {
                if(disit[w] < min && !flag[w])
                {
                    min = disit[w], u = w;
                    flag[u] = 1;
                    ++count;
                }
            }
            for(w = 1; w <= n; ++w)
            {
                if((disit[u]+cost[u][w] < disit[w]) && !flag[w])
                {
                    disit[w] = disit[u]+ cost[u][w];
                }
            }
        }
    }
}
int main()
{
    int n, v, i, j, cost[10][10], disit[10];
    //clrscr();
    printf("\n Enter the number of nodes:");
    scanf("%d", &n);
    printf("\n Enter the cost matrix: \n");
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= n; ++j)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
            {
                cost[i][j] = infinity;
            }
        }
    }
    printf("\n Enter the source matrix:");
    scanf("%d", &v);
    dij(n, v, cost, disit);
    printf("\n Shortest path: \n");
    for(i = 1; i <= n; ++i)
    {
        if(i != v)
        {
            printf("%d->%d, cost = %d\n", v, i, disit[i]);
        }
        getch();
    }
    return 0;
}
