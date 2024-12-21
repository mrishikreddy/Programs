def find_min_ind(dist,visited,v):
    min_val = float('inf')
    min_ind = -1
    for i in range(v):
        if not visited[i] and min_val>dist[i]:
            min_val = dist[i]
            min_ind = i
    return min_ind


def dijkstra(graph,source,v):
    dist = [float('inf')]*v
    visited = [False]*v
    dist[source] = 0

    for _ in range(v-1):
        u = find_min_ind(dist,visited,v)
        visited[u] = True
        for i in range(v):
            if not visited[i] and graph[u][i] and graph[u][i]+dist[u]<dist[i]:
                dist[i] = graph[u][i]+dist[u]
    return dist

v = 5
graph = [
        [0, 10, 0, 0, 5],
        [10, 0, 1, 0, 2],
        [0, 1, 0, 4, 0],
        [0, 0, 4, 0, 3],
        [5, 2, 0, 3, 0]]

res = dijkstra(graph,0,v)
print("The shortest distance of all vertices from source 0 is:")
for i in range(v):
    print(i," : ",res[i])