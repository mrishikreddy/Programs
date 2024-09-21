class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None

    def iab(self,data):
        new_node = node(data)
        if self.head == None:
            self.head = new_node
        else:
            new_node.next = self.head
            self.head = new_node
    
    def iae(self,data):
        new_node = node(data)
        if self.head == None:
            self.head = new_node
        else:
            current_node = self.head
            while current_node.next:
                current_node = current_node.next
            current_node.next = new_node

    def iasind(self,num,ind):      
        if ind == 1:
            self.iab(num)
        else:
            new_node = node(num)
            current_node = self.head
            count = 0
            while current_node and count!=ind:
                prev_node = current_node
                current_node = current_node.next
                count+=1
            if current_node != None:
                prev_node.next = new_node
                new_node.next = current_node
            else:
                print("Incorrect index is given\n")
            
    def dn(self,value):
        if self.head==None:
            print("linkedlist is empty\n")
        else:
            current_node=self.head
            if current_node.data == value:
                self.db()
            else:
                while current_node and current_node.data!=value:
                    prev_node=current_node
                    current_node=current_node.next
                if current_node==None:
                    print("value not found\n")
                else:
                    prev_node.next=current_node.next

    def db(self):
        if self.head==None:
            print("linkedlist is empty\n")
        else:
            print("entered")
            self.head = self.head.next  

    def de(self):
        if self.head==None:
            print("linkedlist is empty\n")
        else:
            current_node = self.head
            while current_node.next:
                prev_node = current_node
                current_node = current_node.next
            prev_node.next = None

    def dasind(self,ind):
        if self.head==None:
            print("linkedlist is empty")
        else:
            if ind == 0:
                self.db()
            else:
                current_node=self.head
                count = 0
                while current_node and count!=ind:
                    prev_node=current_node
                    count+=1
                    current_node=current_node.next
                if current_node==None:
                    print("invalid index is given\n")
                else:
                    prev_node.next=current_node.next
            
    def traverse(self):
        if self.head == None:
            print("linkedlist is empty")
        else:
            current_node = self.head
            while current_node:
                print(current_node.data,end=" ")
                current_node = current_node.next

l = linkedlist()
while 1:
    print("\nenter:\n1 to create a list\n2 to insert at begin\n3 to insert at end")
    print("4 to insert at specific index\n5 to delete a node\n6 to delete at begining")
    print("7 to delete at end\n8 delete at specific index\n9 to display list\n10 to clear linkedlist\n11 to exit")
    ch = int(input())
    match ch:
        case 1:
            if l.head == None:
                print("enter the values of nodes:")
                num = list(map(int,input().split()))
                for i in num:
                    l.iae(i)
            else:
                print("list is already created, to clear existing list enter 10\n")
            
        
        case  2:
            num = int(input("enter a value:"))
            l.iab(num)
            
        
        case 3:
            num = int(input("enter a value:"))
            l.iae(num)
            
        
        case 4:
            num = int(input("enter a value:"))
            ind = int(input("enter the index number:"))
            l.iasind(num,ind)
            
        
        case 5:
            num = int(input("enter the value to be deleted:"))
            l.dn(num)
            
        
        case 6:
            l.db()
            
        
        case 7:
            l.de()
            
        
        case 8:
            ind = int(input("enter the index:"))
            l.dasind(ind)
            
        
        case 9:
            l.traverse()
            
        
        case 10:
            l.head = None
            print("list cleared successfully\n")
            
        
        case 11:
            exit(0)
        
        


           
