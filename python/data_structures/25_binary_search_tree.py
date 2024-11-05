from collections import deque

class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None

def traverse_bfs(node):
    if node is None:
        print("The tree is empty")
        return ""
    q = deque([node])
    while q:
        temp = q.popleft()
        print(temp.data,end=" ")
        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)
    print()

def inorderTraverse(node):
    if node is None:
        return
    inorderTraverse(node.left)
    print(node.data,end=" ")
    inorderTraverse(node.right)

def preorderTraverse(node):
    if node is None:
        return
    print(node.data,end=" ")
    preorderTraverse(node.left)
    preorderTraverse(node.right)

def postorderTraverse(node):
    if node is None:
        return
    postorderTraverse(node.left)
    postorderTraverse(node.right)
    print(node.data,end=" ")
    
def search(node,val):
    if node is None or node.data==val:
        return node  
    if node.data>val:
        return search(node.left,val)
    else:
        return search(node.right,val)

def insert(node,val):
    if node is None:
        return Node(val)
    if node.data == val:
        print("Duplicate values are not accepted in Binary Search Tree") 
    elif node.data>val:
        node.left = insert(node.left,val)
    else:
        node.right = insert(node.right,val)
    return node


root = Node(4)
root.left = Node(2)
root.right = Node(6)
root.left.left = Node(1)
root.left.right = Node(3)
root.right.left = Node(5)
root.right.right = Node(7)
traverse_bfs(root)

"""
print(search(root,4).data)

root = None
root = insert(root,4)
insert(root,2)
insert(root,6)
insert(root,1)
insert(root,3)
insert(root,5)
insert(root,7)
traverse(root)
"""

inorderTraverse(root)
print("")
preorderTraverse(root)
print("")
postorderTraverse(root)
