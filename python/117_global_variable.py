a=10
b=20
def something():
    a=9
    x= globals()['a']
    print("inside function something:",a)
    print("inside function something:",x)
    x = 7
    print("inside function something:",x)
    globals()['a']=15
def nothing():
    global b
    b=22
    print("\ninside function nothing:",b)

something()
print("outside function :",a)
nothing()
print("outside fun:",b)

