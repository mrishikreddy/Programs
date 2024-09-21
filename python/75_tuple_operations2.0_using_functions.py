# we can use sorted() for sorting values in tuple, the sorted functions returns
# the "list" of sorted values
def maxi(t):
    print(max(t))
def mini(t):
    print(min(t))
def avg(t):
    avg = sum(t) / len(t)
    print(avg)
def asi(t):
    l = list(t)
    l.sort()
    t = tuple(l)
    print(t)
def dsi(t):
    l = list(t)
    l.sort(reverse=True)
    t = tuple(l)
    print(t)

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
        mini(t)
    elif c==2:
        maxi(t)
    elif c==3:
        avg(t)
    elif c==4:
        asi(t)
    elif c==5:
        dsi(t)
    elif c==6:
        break
    else:
        print("invalid input")