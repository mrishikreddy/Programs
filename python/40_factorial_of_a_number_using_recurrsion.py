def fact(num):
    if num==0:
        return 1
    else:
        return num*fact(num-1)

n=int(input("enter a number:"))
res=fact(n)
print("factorial of ",n,"is:",res)