#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
# define v 5
int findMinIndex(int dist[],bool vSet[])
{
    int minn=INT_MAX,ind,i;
    for(i=0;i<v;i++)
    {
        if(!vSet[i] && dist[i]<minn)
        {
            minn = dist[i];
            ind = i;
        }
    }
    return ind;
}
void dijkstra(int graph[v][v],int src)
{
    int dist[v],i,u;
    bool vSet[v];
    for(i=0;i<v;i++)
    {
        vSet[i] = false;
        dist[i] = INT_MAX;
    }

    dist[src] = 0;
    for(int count=0;count<v-1;count++)
    {
        u = findMinIndex(dist,vSet);
        vSet[u] = true;
        for(i=0;i<v;i++)
        {
            if(!vSet[i] && graph[u][i] && dist[u]+graph[u][i]<dist[i])
                dist[i] = dist[u]+graph[u][i];
        }
    }

    for(i=0;i<5;i++)
    {
        printf("vertex %d : %d\n",i,dist[i]);
    }
}

int main()
{
    int graph[v][v] = {
        {0, 10, 0, 0, 5},
        {10, 0, 1, 0, 2},
        {0, 1, 0, 4, 0},
        {0, 0, 4, 0, 3},
        {5, 2, 0, 3, 0}
    };
    dijkstra(graph,0);
    return 0;
}