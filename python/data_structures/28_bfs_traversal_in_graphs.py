from collections import deque

def add_edge(g,e1,e2):
    g[e1].append(e2)
    g[e2].append(e1)

def print_graph(g,v):
    for i in range(v):
        print(i,": ",g[i])
    
def bfs_traversal(g,s):
    visited = [False]*len(g)
    q = deque()

    visited[s] = True
    q.append(s)

    while q:
        curr = q.popleft()
        print(curr,end=" ")
        for i in g[curr]:
            if visited[i] == False:
                q.append(i)
                visited[i] = True
    print()
    
def dfs_traversal_using_stack(l,s):
    visited = [False]*len(l)
    stack = [s]
    while stack:
        curr = stack.pop()
        if not visited[curr]:
            print(curr,end=" ")
            visited[curr] = True
        for temp in l[curr]:
            if not visited[temp]:
                stack.append(temp)
    print()

def dfs_util(l,visited,s):
    visited[s] = True
    print(s,end=" ")
    for temp in l[s]:
        if not visited[temp]:
            dfs_util(l,visited,temp)

def dfs_traversal_using_recursion(l,s):
    visited = [False]*len(l)
    dfs_util(l,visited,s)
    print()


v = 5
g = [[] for _ in range(v)]

add_edge(g, 0, 1)
add_edge(g, 0, 2)
add_edge(g, 1, 3)
add_edge(g, 1, 4)
add_edge(g, 2, 4)

print("\nAdjacency matrix:")
print_graph(g,v)

print("\nBFS Traversal:")
bfs_traversal(g,0)

print("\nDFS Traversal using recursion:")
dfs_traversal_using_recursion(g,0)

print("\nDFS Traversal using stack")
dfs_traversal_using_stack(g,0)