def sum(a,b):
    if a==0:
        return b
    elif b==0:
        return a
    else:
        return sum(a-1,b+1)
a=int(input("enter the first number:"))
b=int(input("enter the second number:"))
res=sum(a,b)
print("the sum is:",res)

