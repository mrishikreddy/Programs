n = int(input("enter a number:"))
for i in range(n):
    for s in range(i):
        print(" ",end="")
    for j in range(n-i):
        print("*",end=" ")
    print()