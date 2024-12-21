import heapq

def dijkstra(graph,source,v):
    dist = [float('inf')]*v
    dist[source] = 0
    priority_queue = [(0,source)]

    while priority_queue:
        curr_dist,u = heapq.heappop(priority_queue)
        for neigh, weight in graph[u]:
            distance = curr_dist+weight
            if distance<dist[neigh]:
                dist[neigh] = distance
                heapq.heappush(priority_queue,(distance,neigh))
    return dist



v = 6
adj = [[]for _ in range(v)]
adj[0].append((1, 4))  # Edge 0 -> 1 with weight 4
adj[0].append((2, 3))  # Edge 0 -> 2 with weight 3
adj[1].append((2, 1))  # Edge 1 -> 2 with weight 1
adj[1].append((3, 2))  # Edge 1 -> 3 with weight 2
adj[2].append((3, 4))  # Edge 2 -> 3 with weight 4
adj[2].append((4, 8))  # Edge 2 -> 4 with weight 8
adj[3].append((4, 2))  # Edge 3 -> 4 with weight 2
adj[3].append((5, 6))  # Edge 3 -> 5 with weight 6
adj[4].append((5, 3))  # Edge 4 -> 5 with weight 3
res = dijkstra(adj,0,v)
print("All shortest paths from source 0 is: ")
for i in range(len(res)):
    print(i," : ",res[i])
