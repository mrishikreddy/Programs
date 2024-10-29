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
    
def pre_order(node):
    if node is None:
        return
    print(node.data,end=" ")
    pre_order(node.left)
    pre_order(node.right)

def post_order(node):
    if node is None:
        return
    post_order(node.left)
    post_order(node.right)
    print(node.data,end=" ")

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

def searchDFS(root,val):
    if root is None:
        return False
    if root.data == val:
        return True
    left_res = searchDFS(root.left,val)
    right_res = searchDFS(root.right,val)
    return left_res or right_res

def searchBFS(root,val):
    if root is None:
        return False
    que = [root]
    while que:
        temp = que.pop(0)
        if temp.data==val:
            return True
        if temp.left:
            que.append(temp.left)
        if temp.right:
            que.append(temp.right)
    return False

def deleteNode(root,val):
    if root is None:
        return None

    q = deque([root])
    target = None
    while q:
        temp = q.popleft()
        if temp.data==val:
            target = temp
            break
        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)

    if target is None:
        return root
    
    last_node = None
    last_parent = None
    q = deque([(root,None)])
    while q:
        curr,parent = q.popleft()
        last_node = curr
        last_parent = parent
        if curr.left:
            q.append((curr.left,curr))
        if curr.right:
            q.append((curr.right,curr))

    target.data = last_node.data
    if last_parent:
        if last_parent.left == last_node:
            last_parent.left = None
        elif last_parent.right == last_node:
            last_parent.right = None
    else:
        return None
    return root

def maxDepth(node):
    if node is None:
        return 0
    
    lDepth = maxDepth(node.left)
    rDepth = maxDepth(node.right)

    return max(lDepth,rDepth) +1




'''
root = Node(1)
root_copy = root
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
root.right.left = Node(6)
root.right.right = Node(7)

print("In order traversal:",end=" ")
in_order(root)

print("\nIn Pre traversal:",end=" ")
pre_order(root)

print("\nIn Post traversal:",end=" ")
post_order(root)

print("\nIn Level order traversal:",end=" ")
level_order(root)
print()  # cause the in order traversal uses end=" ", to write in a new line, this print is used.

r = insert(root_copy,8)
level_order(root)

# check for proper working of code ^
'''

'''
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

print("before",end=" ")
in_order(root)
insert(root,77)
print("\nafter",end=" ")
in_order(root)
print()
print(searchDFS(root,7))
print(searchDFS(root,777))

print(searchBFS(root,11))
print(searchBFS(root,111))
'''


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
print("before",end=" ")
level_order(root)
deleteNode(root,8)
print("\nafter",end=" ")
level_order(root)
print()
print(maxDepth(root))