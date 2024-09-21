class node:
    def __init__(self,data):
        self.data = data
        self.prev = None
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None

    def iab(self,data):
        nn = node(data)
        if self.head == None:
            self.head = nn
        else:
            self.head.prev = nn
            nn.next = self.head
            self.head = nn
    
    def iae(self,data):
        nn=node(data)
        if self.head == None:
            self.head = nn
        else:
            cn = self.head
            while cn.next:
                cn = cn.next
            cn.next = nn
            nn.prev = cn
        
    def iasind(self,num,ind):
        if ind == 0:
            self.iab(num)
        else:
            count=0
            cn = self.head
            nn = node(num)
            while cn and count!=ind:
                pr=cn
                count+=1
                cn = cn.next
            if cn==None:
                print("Incorrect index is given")
            else:
                pr.next =  nn
                nn.prev = pr
                nn.next = cn
                cn.prev = nn     
            
    def dn(self,value):
        if self.head==None:
            print("list is empty")
        elif self.head.data == value:
            self.db()
        else:
            cn = self.head
            while cn and cn.data!=value:
                pr=cn
                cn=cn.next
            if cn:
                pr.next = cn.next
            else:
                print("given value not found")

    def db(self):
        if self.head==None:
            print("list is empty")
        elif self.head.next==None and self.head.prev==None:
            self.head=None 
        else:
            self.head = self.head.next
            self.head.prev = None
        
    def de(self):
        if self.head==None:
            print("list is empty")
        elif self.head.next==None and self.head.prev==None:
            self.head=None
        else:
            cn = self.head
            while cn.next.next:
                cn=cn.next
            cn.next=None

    def dasind(self,ind):
        if self.head==None:
            print("list is empty")
        elif ind==0:
            self.db()
        else:
            count=0
            cn=self.head
            while cn and ind!=count:
                count+=1
                cn = cn.next
            if cn!=None:
                cn = cn.prev
                cn.next = cn.next.next
            else:
                print("Incorrect index value is given")
        
    def traverse_full(self):
        if self.head==None:
            print("list is empty")
        else:
            print("traversing frontward and backward:  ",end="")
            cn = self.head
            while cn.next:
                print(cn.data,end=" ")
                cn = cn.next
            print(cn.data,":",end=" ")
            while cn.prev:
                print(cn.data,end=" ")
                cn=cn.prev
            print(cn.data)
        
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
            l.traverse_full()
            
        
        case 10:
            l.head = None
            print("list cleared successfully\n")
            
        
        case 11:
            exit(0)
        
        


           
