#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define v 5
void findMST(int graph[v][v]);
int findMinKey(int key[],bool mstSet[]);

int findMinKey(int key[],bool mstSet[])
{
    int minn = INT_MAX,i,ind;
    for(i=0;i<v;i++)
    {
        if(!mstSet[i] && key[i]<minn)
        {
            ind = i;
            minn = key[i];
        }
    }
    return ind;
}

void findMST(int graph[v][v])
{
    int i,u;
    bool mstSet[v];
    int key[v],parent[v];
    for(i=0;i<v;i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int count=0;count<v-1;count++)
    {
        u = findMinKey(key,mstSet);
        mstSet[u] = true;
        for(i=0;i<v;i++)
        {
            if(graph[u][i] && !mstSet[i] && graph[u][i]<key[i])
            {
                parent[i] = u;
                key[i] = graph[u][i];
            }
        }
    }

    for(i=1;i<v;i++)
    {
        printf("%d - %d : %d\n",parent[i],i,graph[i][parent[i]]);
    }
}



int main()
{
    int graph[v][v] = {
        { 0, 2, 0, 6, 0 },
        { 2, 0, 3, 8, 5 },
        { 0, 3, 0, 0, 7 },
        { 6, 8, 0, 0, 9 },
        { 0, 5, 7, 9, 0 }
    };

    findMST(graph);
    return 0;
}