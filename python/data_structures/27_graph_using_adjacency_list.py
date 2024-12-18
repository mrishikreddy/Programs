from collections import deque
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

def add_edge(l,e1,e2):
    new_node = Node(e2)
    new_node.next = l[e1]
    l[e1] = new_node

    new_node = Node(e1)
    new_node.next = l[e2]
    l[e2] = new_node

def print_adj_list(l,v):
    for i in range(v):
        print(i,end=": ")
        temp = l[i]
        while temp:
            print(temp.data,end=" ")
            temp = temp.next
        print()
    
def bfs_traversal(l,s):
    visited = [False]*len(l)
    q = deque([s])
    visited[s] = True

    while q:
        curr = q.popleft()
        print(curr,end=" ")
        temp = l[curr]
        while temp:
            if visited[temp.data]==False:
                q.append(temp.data)
                visited[temp.data] = True
            temp=temp.next
    print()

def dfs_util(l,visited,s):
    visited[s] = True
    print(s,end=" ")
    temp = l[s]
    while temp:
        if not visited[temp.data]:
            visited[temp.data] = True
            dfs_util(l,visited,temp.data)
        temp = temp.next


def dfs_traversal_recurrsion(l,s):
    visited = [False]*len(l)
    dfs_util(l,visited,s)
    print()

def dfs_traversal_using_stack(l,s):
    visited = [False]*len(l)
    stack = [s]
    while stack:
        curr = stack.pop()
        
        if visited[curr] == False:
            print(curr,end=" ")
            visited[curr] =True
        temp = l[curr]
        while temp:
            if not visited[temp.data]:
                stack.append(temp.data)
            temp = temp.next
    print()



v = 4
l=[]
for i in range(v):
    l.append(None)
add_edge(l,0,1)
add_edge(l,0,2)
add_edge(l,1,2)
add_edge(l,2,3)
print_adj_list(l,4)
print("\nBFS Traversal:")
bfs_traversal(l,0)
print("\nDFS Traversal using recursion:")
dfs_traversal_recurrsion(l,0)
print("\nDFS Traversal using stack:")
dfs_traversal_using_stack(l,0)