l=eval(input("enter the list of numbers:"))
while(True):
    print("press 1 for minimum element")
    print("press 2 for maximum element")
    print("press 3 for average ")
    print("press 4 for sort elements in ascending order")
    print("press 5 for sort elements in desecending order")
    print("press 6 to exit")
    c=int(input(""))
    if c==1:
        print((min(l)))
    elif c==2:
        print(max(l))
    elif c==3:
        avg=sum(l)/len(l)
        print(avg)
    elif c==4:
        l.sort()
        print(l)
    elif c==5:
        l.sort(reverse=True)
        print(l)
    elif c==6:
        break
    else:
        print("invalid input")