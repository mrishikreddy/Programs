def find_min_key(key,visited,v):
    min_ele = float('inf')
    min_ind = None
    for i in range(v):
        if not visited[i] and min_ele>key[i]:
            min_ele = key[i]
            min_ind = i
    return min_ind

def find_mst(graph,v):
    key = [float('inf')]*v
    visited = [False]*v
    parent = [None]*v

    key[0] = 0
    parent[0] = -1

    for count in range(v):
        u = find_min_key(key,visited,v)
        visited[u] = True
        for i in range(v):
            if graph[u][i] and not visited[i] and key[i]>graph[u][i]:
                key[i] = graph[u][i]
                parent[i] = u
    
    print("The minimum spanning tree with edges:")
    for i in range(1,v):
        print(parent[i],"-",i," : ",graph[i][parent[i]])


v = 5
graph = [
        [ 0, 2, 0, 6, 0 ],
        [ 2, 0, 3, 8, 5 ],
        [ 0, 3, 0, 0, 7 ],
        [ 6, 8, 0, 0, 9 ],
        [ 0, 5, 7, 9, 0 ]
        ]
find_mst(graph,v)