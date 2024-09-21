def ins(l):
    x = int(input("enter a element:"))
    l.append(x)
def insp(l):
    x = int(input("enter a element:"))
    i = int(input("enter the index:"))
    l.insert(i, x)
def up(l):
    n = int(input("enter the index that needs to be updated:"))
    i = int(input("enter the new element:"))
    l[n] = i
def dele(l):
    x = int(input("enter a element:"))
    l.remove(x)
def delep(l):
    i = int(input("enter the index:"))
    l.pop(i)
def disp(l):
    print(l)

l=eval(input("enter the list of numbers:"))
while(True):
    print("press 1 to insert a element")
    print("press 2 to insert a element at desired position")
    print("press 3 update a element ")
    print("press 4 delete a element")
    print("press 5 delete a element at desired position")
    print("press 6 to display elements")
    print("press 7 to exit")
    c=int(input(""))
    if c==1:
       ins(l)
    elif c==2:
        insp(l)
    elif c==3:
        up(l)
    elif c==4:
        dele(l)
    elif c==5:
        delep(l)
    elif c==6:
        disp(l)
    elif c==7:
        break;
    else:
        print("invalid input")