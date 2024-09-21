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
        x=int(input("enter a element"))
        l.append(x)
    elif c==2:
        x=int(input("enter a element"))
        i=int(input("enter the index"))
        l.insert(i,x)
    elif c==3:
        x = int(input("enter a element"))
        n=l.index(x)
        i = int(input("enter the new element"))
        l[n]=i
    elif c==4:
        x = int(input("enter a element"))
        l.remove(x)
    elif c==5:
        i = int(input("enter the index"))
        l.pop(i)
    elif c==6:
        print(l)
    elif c==7:
        break
    else:
        print("invalid input")