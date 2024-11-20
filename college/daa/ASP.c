#include<stdio.h>
#include<limits.h>

int main()
{
    
    int n=4;
    int cost[4][4]={
        
        {0,5,INT_MAX,9},
        {INT_MAX,0,3,4},
        {INT_MAX,INT_MAX,0,1},
        {INT_MAX,INT_MAX,INT_MAX,0}
    };  
    for (int k=0; k<n; k++) {
        
        for (int i=0; i<n; i++) {
            
            for (int j=0; j<n; j++) {
                
                if (cost[i][k] != INT_MAX && cost[k][j] != INT_MAX) {
                    
                    if (cost[i][j] > cost[i][k] + cost[k][j])
                    cost[i][j] = cost[i][k] + cost[k][j];
                }
            }
        }
    }
    printf("Minimum shipping cost between every pair of warehouses:\n");
    for (int i=0; i<n; i++) {printf("[");
    for (int j=0; j<n; j++) {
        
        if (cost[i][j] == INT_MAX)
        printf("INF "); 
        else
        printf("%d ", cost[i][j]); 
    }
    printf("]\n");
    }
    return 0;
}