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

    def selection_sort(self):
        curr = self.head
        if curr==None or curr.next==None:
            return curr
        else:
            while curr:
                min_node = curr
                temp = curr.next
                while temp:
                    if min_node.data > temp.data:
                        min_node = temp
                    temp = temp.next
                if min_node!=curr:
                    temp = min_node.data
                    min_node.data = curr.data
                    curr.data = temp
                curr = curr.next

                        
    
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
l.selection_sort()
print("Sorted linked list is:")
l.traverse()
print()


        