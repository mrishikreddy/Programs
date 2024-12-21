def detect_cycles(graph,v):
    visited = [False]*v

    def dfs(node,parent):
        visited[node] = True
        for neigh in graph[node]:
            if not visited[neigh]:
                if dfs(neigh,node):
                    return True
            elif neigh != parent:
                return True
        return False

    # used for loop to detect cycles even in disconnected graph
    for i in range(v):
        if not visited[i]:
            if dfs(i,-1):
                return True
    return False



v = 3
adj = [[] for _ in range(v)]
#Cycle is present
adj[1].append(0)
adj[0].append(1)
adj[0].append(2)
adj[2].append(0)
adj[1].append(2)
adj[2].append(1)

# No Cycle is present
# adj[0].append(1)
# adj[1].append(0)
# adj[1].append(2)
# adj[2].append(1)
print(detect_cycles(adj,v))