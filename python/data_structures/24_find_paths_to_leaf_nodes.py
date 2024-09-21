from collections import deque
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
    
def in_order(node):
    if node is None:
        return
    in_order(node.left)
    print(node.data,end=" ")
    in_order(node.right)
    

def level_order(node):
    if node is None:
        return
    que = [root]
    while que:
        node = que.pop(0)
        print(node.data,end=" ")
        if node.left:
            que.append(node.left)
        if node.right:
            que.append(node.right)

def insert(root,key):
    if root is None:
        return Node(key)
    que = [root]
    while que:
        temp = que.pop(0)
        if temp.left is None:
            temp.left = Node(key)
            break
        else:
            que.append(temp.left)

        if temp.right is None:
            temp.right = Node(key)
            break
        else:
            que.append(temp.right)
    return root

def find_paths(root):
    def cal_paths(node,path):
        if node:
            path += str(node.data)
            if not node.left and not node.right:
                paths.append(path)
            else:
                path += "->"
                cal_paths(node.left,path)
                cal_paths(node.right,path) 
    paths = []
    cal_paths(root,"")
    return paths

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.left.left.left = Node(8)
root.left.left.right = Node(9)
root.left.right.right = Node(10)
root.right.left.left = Node(11)
root.right.left.right = Node(12)
root.right.right = Node(7)

print(find_paths(root))
