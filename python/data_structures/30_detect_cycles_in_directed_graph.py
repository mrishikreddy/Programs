def detect_cycles(graph,v):
    visited = [False]*v
    recStack = [False]*v

    def dfs(node):
        visited[node] = True
        recStack[node] = True

        for neigh in graph[node]:
            if not visited[neigh]:
                if dfs(neigh):
                    return True
            elif recStack[neigh]:
                return True
        recStack[node] = False
        return False

    for i in range(v):
        if dfs(i):
            return True
    return False


v = 4
adj = [[] for _ in range(v)]
#Cycle is present
adj[0].append(1)
adj[0].append(2)
adj[1].append(2)
adj[2].append(0)
adj[2].append(3)
adj[3].append(3)

print(detect_cycles(adj,v))