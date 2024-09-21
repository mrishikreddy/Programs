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

    def sortedMerge(self,a,b):
        result=None
        if a==None:
            return b
        if b==None:
            return a
        if a.data<=b.data:
            result = a
            result.next = self.sortedMerge(a.next,b)
        else:
            result = b
            result.next = self.sortedMerge(a,b.next)
        return result

    def mergeSort(self,h):
        if h == None or h.next == None:
            return h
        middle = self.getMiddle(h)
        mnxt = middle.next
        middle.next = None
        left = self.mergeSort(h)
        right = self.mergeSort(mnxt)
        sortedlist = self.sortedMerge(left,right)
        return sortedlist

    

    def getMiddle(self,head):
        if head==None:
            return None
        slow = head
        fast = head
        while fast.next!=None and fast.next.next!=None:
            slow = slow.next
            fast = fast.next.next
        return slow

    
        
  
        
l = ll()
print("enter the values of nodes:")
num = list(map(int,input().split()))
for i in num:
    l.iae(i)
l.head=l.mergeSort(l.head)
print("Sorted linked list is:")
l.traverse()
print()


        