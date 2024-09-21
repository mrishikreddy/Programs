class node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.prev = None

class linkedlist:
    def __init__(self):
        self.head = None

   

    def iab(self,data):
        new = node(data)
        if self.head == None:
            new.next = new
            new.prev = new
            self.head = new
        else:
            cn = self.head
            
            while cn.next != self.head:
                cn = cn.next
            cn.next = new
            new.prev = cn
            new.next = self.head
            self.head.prev = new
            self.head = new

        
    def iae(self,data):
        new = node(data)
        if self.head == None:
            new.next = new
            new.prev = new
            self.head = new
        else:
            cn = self.head
            while cn.next != self.head:
                cn = cn.next
            cn.next = new
            new.prev = cn
            new.next = self.head
            self.head.prev = new
        
    def iasind(self,data,ind):
        if ind == 0:
            self.iab(data)
        else:
            count = 0
            cn = self.head
            new = node(data)
            while cn.next != self.head and count!=ind:
                pr = cn
                count+=1
                cn = cn.next
            pr.next = new
            new.prev = pr
            new.next = cn
            cn.prev = new


      
    def dn(self,value):
        if self.head.data == value:
            self.db()
        else:
            cn = self.head.next
            while cn != self.head and cn.data!=value:              #<-- insert at last value
                pr = cn
                cn = cn.next
                
            if cn !=self.head:
                cn = cn.next
                pr.next = cn
                cn.prev = pr
            else:
                print("given value not found")

    
    def db(self):
        if self.head.next == self.head and self.head.prev == self.head:
            self.head = None
        else:
            stn = self.head.next
            cn = self.head
            while cn.next!=self.head:
                cn = cn.next
            cn.next = stn
            stn.prev = cn
            self.head = stn

    def de(self):
        if self.head.next == self.head and self.head.prev == self.head:
            self.head = None
        else:
            cn = self.head
            while cn.next.next!=self.head:
                cn = cn.next
            cn.next = self.head
            self.head.prev = cn


    def dasind(self,ind):
        if ind == 0:
            self.db()
        else:
            count = 0
            cn  = self.head
            while cn.next != self.head and count!=ind:
                pr = cn
                count+=1
                cn = cn.next
            if cn == self.head:
                print("Invalid index is given")
            else:
                cn = cn.next
                pr.next = cn
                cn.prev = pr
                
    def traverse(self):
        if self.head.next == None:
            print("list is empty")
        else:
            cn = self.head
            while cn.next!=self.head:
                print(cn.data,end=" ")
                cn = cn.next
            print(cn.data)
       

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
        
    
        
        


           
