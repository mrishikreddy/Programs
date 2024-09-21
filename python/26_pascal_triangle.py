n=int(input("enter a number"))
from math import factorial
for i in range(n):
    for s in range(n-i):
        print(" ",end="")
    for j in range(i+1):
        res=factorial(i)//(factorial(i-j)*factorial(j))
        print(res,end=" ")
    print()
