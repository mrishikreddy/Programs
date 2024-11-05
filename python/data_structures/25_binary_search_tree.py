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

def findSuccessor(root):
    curr = root.right
    while curr is not None and curr.left is not None:
        curr = curr.left
    return curr

def findPredecessor(root):
    curr = root.left
    while curr is not None and curr.right is not None:
        curr = curr.right
    return curr

def delete(root,val):
    if root is None:
        return root

    if root.data>val:
        root.left = delete(root.left,val)
    elif root.data<val:
        root.right = delete(root.right,val)
    else:
        if root.left is None:
            return root.right
        elif root.right is None:
            return root.left
        
        succ = findSuccessor(root)
        root.data = succ.data
        root.right = delete(root.right,succ.data)
    return root

def findMax(root):
    if root is None:
        return root
    while root is not None and root.right is not None:
        root = root.right
    return root

def findMin(root):
    if root is None:
        return root
    while root is not None and root.left is not None:
        root = root.left
    return root

# The methods MaxValue, and MinValue are used for method isBST, The similar methods findMax
# and findMin will not work when the tree is not BST, so we use the traditional approach

def maxValue(root):
    if root is None:
        return float('-inf')
    return max(root.data,maxValue(root.left),maxValue(root.right))

def minValue(root):
    if root is None:
        return float('inf')
    return min(root.data,minValue(root.left),minValue(root.right))

def isBST(root):
    if root is None:
        return True
    
    if root.left and maxValue(root.left)>=root.data:
        return False
    
    if root.right and minValue(root.right)<=root.data:
        return False
    
    return isBST(root.left) and isBST(root.right)
   
# The storeInorder method is used for method findTargetSum

def storeInorder(root,stack):
    if root is None:
        return
    storeInorder(root.left,stack)
    stack.append(root.data)
    storeInorder(root.right,stack)

def findTargetSum(root,target):
    if root is None:
        return root
    stack = []
    storeInorder(root,stack)   
    left = 0
    right = len(stack)-1
    while left<right:
        total = stack[left]+stack[right]
        if total == target:
            print(stack[left],stack[right])
            return True
        if total<target:
            left+=1
        else:
            right-=1
    return False

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

inorderTraverse(root)
print("")
preorderTraverse(root)
print("")
postorderTraverse(root)

inorderTraverse(root)
print("")
delete(root,6)
inorderTraverse(root)
print("")
preorderTraverse(root)
print("")
postorderTraverse(root)
curr = findSuccessor(root)
print(curr.data)
curr = findPredecessor(root)
print(curr.data)
print(isBST(root))
"""

print(findTargetSum(root,13))