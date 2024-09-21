class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
class ll:
    def __init__(self):
        self.head = None

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

    def insertion_sort(self):
        sorted = None
        curr = self.head
        while curr!=None:
            next = curr.next
            sorted = self.sort(sorted,curr)
            curr = next
        self.head = sorted
        
    def sort(self,head,new):
       # curr = None
        if head==None or head.data>new.data:
            new.next = head
            head = new
        else:
            curr = head
            while curr.next and curr.next.data<new.data:
                curr = curr.next
            new.next = curr.next
            curr.next = new
        return head
        
l = ll()
print("enter the values of nodes:")
num = list(map(int,input().split()))
for i in num:
    l.iae(i)
l.insertion_sort()
print("Sorted linked list is:")
l.traverse()
print()


        