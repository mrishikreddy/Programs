class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None

    def iae(self,value):
        new_node = node(value)
        if self.head == None:
            self.head = new_node
            self.head.next = None
        else:
            temp = self.head
            while temp.next != None:
                temp = temp.next
            temp.next = new_node

    def reverse(self): 
        if self.head == None:
            print("The list is empty")
        else:
            cn = self.head
            nextptr = None
            prev = None
            while cn!=None:
                nextptr = cn.next
                cn.next = prev
                prev = cn
                cn = nextptr
            self.head = prev

    def traverse(self):
        if self.head == None:
            print("The list is empty")
        else:
            temp = self.head
            while temp!=None:
                print(temp.data,end=" ")
                temp = temp.next
        
l = linkedlist()

num = list(map(int,input("Enter the values of nodes: ").split()))
for i in num:
    l.iae(i)

print("The reverse of linked list is: ",end="")
l.reverse()
l.traverse()
            