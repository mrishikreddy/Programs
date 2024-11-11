#include <limits.h>   // For INT_MAX
#include <stdbool.h>  // For boolean data type
#include <stdio.h>    // For input-output functions

#define V 9  // Number of vertices in the graph

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], bool sptSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }

    return min_index;
}

// Function to print the solution (distance array)
void printSolution(int dist[]) {
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t\t\t %d\n", i, dist[i]);
}

// Function implementing Dijkstra's shortest path algorithm
void dijkstra(int graph[V][V], int src) {
    int dist[V];    // dist[i] holds the shortest distance from src to i
    bool sptSet[V]; // sptSet[i] is true if vertex i is in the shortest path tree

    // Step 1: Initialize all distances as INFINITE and sptSet[] as false
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    // Distance from source to itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Step 2: Pick the minimum distance vertex from the set of vertices
        // not yet processed. u is always equal to src in first iteration.
        int u = minDistance(dist, sptSet);

        // Step 3: Mark the picked vertex as processed
        sptSet[u] = true;

        // Step 4: Update dist value of the adjacent vertices of the picked vertex
        for (int v = 0; v < V; v++)
            // Update dist[v] only if it's not in sptSet, there is an edge from u to v,
            // and total weight of path from src to v through u is smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // Print the constructed distance array
    printSolution(dist);
}

// Driver code
int main() {
    // Adjacency matrix representation of the graph
    int graph[V][V] = { 
        { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } 
    };

    // Run Dijkstra's algorithm from vertex 0
    dijkstra(graph, 0);

    return 0;
}
