from collections import deque
class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
    
def search(root,val):
    if root is None:
        print("value not found")
        return None
    if root.data==val:
        print("value found")
        return root
    if val<root.data:
        search(root.left)
    else:
        search(root.right)

def insert(root,val):
    if root is None:
        return Node(val)
    if root.data == val:
        print("value already present in tree")
        return node
    if root.data<val:
        root.right = insert(root.right,val)
    else:
        root.left = insert(root.left,val)
    return root 

def insert_by_iteration(root,val):
    temp = root
    while temp:
        prev = temp
        if temp.data==val:
            print("value already present in the list")
            return root
        if val<temp.data:
            temp = temp.left
        else:
            temp = temp.right
    if val<prev.data:
        prev.left = Node(val)
    else:
        prev.right = Node(val)
    return root


def level_order(root):
    q = deque([root])
    while q:
        temp = q.popleft()
        print(temp.data,end=" ")
        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)

root = Node(10)
r = insert(root,9)
r = insert(r,14)
r = insert(r,7)
r = insert(r,8)
r = insert(r,12)
r = insert(r,15)
level_order(r)
print(search(r,7))