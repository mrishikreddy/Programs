class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
class ll:
    def __init__(self):
        self.head = None

    def swap(self,ptr1,ptr2):
        tmp = ptr2.data
        ptr2.data = ptr1.data
        ptr1.data = tmp

    def bubble_sort(self):
        toswap = True
        while toswap:
            toswap = False
            cn = self.head
            while cn.next:
                if cn.data>cn.next.data:
                    self.swap(cn,cn.next)
                    toswap=True
                cn = cn.next
    
    def traverse(self):
        if self.head == None:
            print("linkedlist is empty")
        else:
            current_node = self.head
            while current_node:
                print(current_node.data,end=" ")
                current_node = current_node.next
    
    def iae(self,data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
        else:
            current_node = self.head
            while current_node.next:
                current_node = current_node.next
            current_node.next = new_node

l = ll()
print("enter the values of nodes:")
num = list(map(int,input().split()))
for i in num:
    l.iae(i)
l.bubble_sort()
print("Sorted linked list is:")
l.traverse()
print()


        