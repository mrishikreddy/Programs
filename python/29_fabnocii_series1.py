n=int(input("enter a number:"))
print("the fabnocii series upto ",n,"is:0 ",end="")
a=0
b=1
while(b <= n):
    s = a + b
    print(b,end=" ")
    a=b
    b=s
print()
print("n fabnocii series is:0 ",end='')
a=0
b=1
i=1
while(i < n):
    s = a + b
    print(b,end=" ")
    a=b
    b=s
    i=i+1
nth=a
print()
print(n,"th term of fabnocii series is:",nth)
