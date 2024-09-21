def maxi(l):
    r=max(l)
    return r
def mini(l):
    r=min(l)
    return r
def avg(l):
    r=sum(l)/len(l)
    return r
def sa(l):
    l.sort()
    return l
def sd(l):
    l.sort(reverse=True)
    return l

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
        r=mini(l)
        print(r)
    elif c==2:
        r = maxi(l)
        print(r)
    elif c==3:
        r = avg(l)
        print(r)
    elif c==4:
        r = sa(l)
        print(r)
    elif c==5:
        r = sd(l)
        print(r)
    elif c==6:
        break;
    else:
        print("invalid input")  