t=eval(input("enter the tuple of numbers:"))
while(True):
    print("press 1 for minimum element")
    print("press 2 for maximum element")
    print("press 3 for average ")
    print("press 4 for sort elements in ascending order")
    print("press 5 for sort elements in descending order")
    print("press 6 to exit")
    c=int(input(""))
    if c==1:
        print(min(t))
    elif c==2:
        print(max(t))
    elif c==3:
        avg=sum(t)/len(t)
        print(avg)
    elif c==4:
       l=list(t)
       l.sort()
       t=tuple(l)
       print(t)
    elif c==5:
        l = list(t)
        l.sort(reverse=True)
        t = tuple(l)
        print(t)
    elif c==6:
        break
    else:
        print("invalid input")