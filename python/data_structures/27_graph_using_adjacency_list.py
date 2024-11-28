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
        while temp and temp.data!=-1:
            print(temp.data,end=" ")
            temp = temp.next
        print()

v = 4
l=[]
for i in range(v):
    l.append(Node(-1))
add_edge(l,0,1)
add_edge(l,0,2)
add_edge(l,1,2)
add_edge(l,2,3)
print_adj_list(l,4)