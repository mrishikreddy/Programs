#include<stdio.h>
#include<stdbool.h>
#define v 4
#define e 5

struct arr {
    int src, dest, wt;
} graph[e];

void loadAndSortGraph(int edge[e][3]);
void formMST();

void loadAndSortGraph(int edge[e][3]) {
    int i = 0, j, temp;
    for (i = 0; i < e; i++) {
        j = 0;
        graph[i].src = edge[i][j++];
        graph[i].dest = edge[i][j++];
        graph[i].wt = edge[i][j++];
    }

    for (i = 0; i < e; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (graph[j].wt > graph[j + 1].wt) {
                temp = graph[j].wt;
                graph[j].wt = graph[j + 1].wt;
                graph[j + 1].wt = temp;

                temp = graph[j].src;
                graph[j].src = graph[j + 1].src;
                graph[j + 1].src = temp;

                temp = graph[j].dest;
                graph[j].dest = graph[j + 1].dest;
                graph[j + 1].dest = temp;
            }
        }
    }
    printf("\n");
}

void formMST() {
    bool mstSet[v] = { false };
    int count = 0, vt = v - 1, twt = 0;

    for (int i = 0; i < e && count < vt; i++) {
        int src = graph[i].src;
        int dest = graph[i].dest;

        if (mstSet[src] == false || mstSet[dest] == false) {
            mstSet[src] = true;
            mstSet[dest] = true;
            twt += graph[i].wt;
            printf("%d === %d : %d\n", src, dest, graph[i].wt);
            count++;
        }
    }
    printf("Total weight of MST: %d\n\n", twt);
}

int main() {
    int edge[e][3] = { { 0, 1, 10 }, 
                       { 0, 2, 6 }, 
                       { 0, 3, 5 }, 
                       { 1, 3, 15 }, 
                       { 2, 3, 4 } }; 

    loadAndSortGraph(edge);
    formMST();
  
    return 0;
}
