#include<stdio.h>
#include<limits.h>
#include<stdbool.h>


void findMST(int key[], bool mst)
{

}


void mst(graph)
{

    int mini,ind,i,j;
    int key[5],parent[5];
    bool mstSet[5];

    for(i=0;i<5;i++)
    {
        key[i] = INT_MAX;
        parent[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;
    for(int count=0;count<4;count++)
    {
        mini = findMinKey(key, mstSet);

    }
}

int main()
{
    int graph[5][5]={
        { 0, 2, 0, 6, 0 },
        { 2, 0, 3, 8, 5 },
        { 0, 3, 0, 0, 7 },
        { 6, 8, 0, 0, 9 },
        { 0, 5, 7, 9, 0 }}

    mst(graph);
}