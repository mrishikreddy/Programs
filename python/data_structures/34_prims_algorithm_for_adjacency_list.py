import heapq

def find_mst(graph,v):
    min_heap = []
    key = [float('inf')]*v
    parent = [-1]*v
    visited = [False]*v

    key[0] = 0
    heapq.heappush(min_heap,(0,0))

    while min_heap:
        weight,u = heapq.heappop(min_heap)
        if visited[u]:
            continue
        else:
            visited[u] = True
        for i,weight in graph[u]:
            if not visited[i] and key[i]>weight:
                key[i] = weight
                parent[i] = i
                heapq.heappush(min_heap,(key[i],i))

    print("The minimum spanning tree is: ")
    for i in range(1,v):
        print(parent[i],"-",i," : ",key[i])




v = 5
graph = [
    [(1, 2), (3, 6)],       
    [(0, 2), (2, 3), (4, 5)],  
    [(1, 3), (4, 7)],       
    [(0, 6), (1, 8), (4, 9)],  
    [(1, 5), (2, 7), (3, 9)]
]
find_mst(graph, v)
