#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define NV 5

// Function to find the vertex with the minimum key value
int min_key(int key[], bool mstSet[]) {
    int minn = INT_MAX, ind;
    for(int i = 0; i < NV; i++) {
        if(key[i] < minn && mstSet[i] == false) {
            minn = key[i];
            ind = i;
        }
    }
    return ind;
}

// Function to print the Minimum Spanning Tree (MST)
void printMST(int parent[], int graph[NV][NV]) {
    printf("Edge\tWeight\n");
    for(int i = 1; i < NV; i++) {
        printf("%d-%d\t%d\n", parent[i], i, graph[i][parent[i]]);
    }
}

// Function to implement Prim's algorithm for MST
void primMST(int graph[NV][NV]) {
    int key[NV];  // To store the minimum weight edge
    bool mstSet[NV];  // To represent the vertices included in MST
    int parent[NV];  // Array to store the parent vertices of the MST
    
    // Initialize all keys to INT_MAX and mstSet[] to false
    for(int i = 0; i < NV; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    
    key[0] = 0;  // Set the key value of the first vertex to 0
    parent[0] = -1;  // The first node is the root of the MST
    
    // Loop to find the MST
    for(int c = 0; c < NV - 1; c++) {  // Repeat NV-1 times
        int ind = min_key(key, mstSet);  // Find the vertex with the minimum key
        mstSet[ind] = true;  // Add the vertex to the MST
        
        // Update the key values and parent indices
        for(int i = 0; i < NV; i++) {
            // If there is an edge and it results in a smaller key value, update it
            if(graph[ind][i] && mstSet[i] == false && graph[ind][i] < key[i]) {
                parent[i] = ind;
                key[i] = graph[ind][i];
            }
        }
    }
    
    // Print the MST
    printMST(parent, graph);
}

int main() {
    // Adjacency matrix representation of the graph
    int graph[NV][NV] = {
        { 0, 2, 0, 6, 0 },
        { 2, 0, 3, 8, 5 },
        { 0, 3, 0, 0, 7 },
        { 6, 8, 0, 0, 9 },
        { 0, 5, 7, 9, 0 }
    };

    primMST(graph);  // Call Prim's algorithm to print the MST
    return 0;
}
