def fact(n):
    if n==0:
        return 1
    elif n==1:
        return 1
    else:
        return n*fact(n-1)
r=int(input("enter a number:"))
res=fact(r)
print("the factorial of ",r,"is:",res)