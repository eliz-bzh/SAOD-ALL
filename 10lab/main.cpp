#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,u,v,n,i,j,ne=1;
    int visited[10]= {0},min,max=0,mincost=0,cost[10][10];
    int path[100]= {0};
    int path_index=0;
    cout<<"����� ���������� ������ ";
    cin>>n;
    cout<<"����� ������� ���������\n";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            cin>>cost[i][j];
            max+=cost[i][j];
        }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if(cost[i][j]==0)
                cost[i][j]=max;
        }
    visited[1]=1;
    cout<<"\n";
    while(ne < n)
    {
        for(i=1,min=max; i<=n; i++)
            for(j=1; j<=n; j++)
                if(cost[i][j]< min)
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
        if(visited[u]==0 || visited[v]==0)
        {
            path[path_index]=b;
            path_index++;
            ne++;
            mincost+=min;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=max;
    }
    cout<<"\n";
    cout<<1<<" --> ";
    for (int i=0; i<n-1; i++)
    {
        cout<<path[i];
        if (i<n-2)
            cout<<" --> ";
    }
    cout<<"\n ����������� ��������� "<<mincost;
    cin.get();
    cin.get();
    return 0;

}
