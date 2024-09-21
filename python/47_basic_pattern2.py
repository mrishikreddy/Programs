n=int(input("entera number:"))
for i in range(n+1):
    for j in range(0,n-i):
        print(j+1,end=" ")
    print("")