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
            new_node.next = new_node
            self.head = new_node
        else:
            current_node = self.head.next
            while current_node.next != self.head:
                current_node = current_node.next
            current_node.next = new_node
            new_node.next = self.head
            self.head = new_node
    
    def iae(self,data):
        new_node = node(data)
        if self.head == None:
            new_node.next = new_node
            self.head = new_node
        else:
            current_node=self.head
            while current_node.next!=self.head:
                current_node = current_node.next
            new_node.next = self.head
            current_node.next = new_node             

    def iasind(self,num,ind):
      if self.head == None:
            print("list is empty")
      else:
        count = 0
        current_node = self.head
        if ind == 0:
            self.iab(num)
        else:
            new_node = node(num)
            current_node = self.head
            while current_node.next != self.head and ind!=count:
                prev_node = current_node
                count += 1
                current_node = current_node.next
            if current_node != self.head:
                prev_node.next = new_node
                new_node.next = current_node
            else:
                print("incorrect index is given")     
            
    def dn(self,value):
      if self.head == None:
            print("list is empty")
      else:
        current_node = self.head
        if current_node.data == value:
            db()
        else:
            while current_node.next != self.head and current_node.data!=value:
                prev_node = current_node
                current_node = current_node.next
            if current_node == self.head:
                print("value not found in the list")
            else:
                prev_node.next = current_node.next

    def db(self):
        if self.head == None:
            print("list is empty")
        elif self.head.next == self.head:
            self.head = None
        else:
            first_node = self.head
            first_node = first_node.next
            
            current_node = self.head
            while current_node.next!=self.head:
                current_node = current_node.next
            current_node.next = first_node
            self.head = first_node


    def de(self):
        cn = self.head
        while cn.next != self.head:
            prev = cn
            cn = cn.next
        prev.next = self.head
        
       

    def dasind(self,ind):
        if self.head == None:
            print("list is empty")
        else:
            count = 0
            current_node = self.head
            if ind == 0:
                self.db()
            else:
                current_node = self.head
                while current_node.next != self.head and ind!=count:
                    prev_node = current_node
                    count += 1
                    current_node = current_node.next
                if current_node != self.head:
                    prev_node.next = current_node.next
                else:
                    print("incorrect index is given") 

      


    def traverse(self):
        if self.head == None:
            print("The list is empty")
        else:
            current_node = self.head
            print(current_node.data,end=" ")
            while current_node.next != self.head:
                current_node = current_node.next
                print(current_node.data,end=" ")
            print()
       

l = linkedlist()
while 1:
    print("\nenter:\n1 to create a list\n2 to insert at begin\n3 to insert at end")
    print("4 to insert at specific index\n5 to delete a node\n6 to delete at begining")
    print("7 to delete at end\n8 delete at specific index\n9 to display list\n10 to clear linkedlist\n11 to exit")
    ch = int(input())
    if ch not in range(1,12):
        print("Invalid input is given, try again")
    else:
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
            print("list cleared successfully")
            
        
        case 11:
            exit(0)
        
    
        
        


           
