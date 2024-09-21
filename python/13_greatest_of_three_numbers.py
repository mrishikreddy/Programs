a,b,c=input("enter three numbers").split( )
a=int(a)
b=int(b)
c=int(c)
if a>b and b>c:
    print(a," is greater")
elif b>c:
    print(b," is greater")
else:
    print(c," is greater")