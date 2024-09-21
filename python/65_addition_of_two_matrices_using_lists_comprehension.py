m=int(input("enter number of rows:"))
n=int(input("enter number of cols:"))
print("enter the values of matrix a:")
a=[[int(input())for j in range(n)]for i in range(m)]
print("enter the values of matrix b:")
b=[[int(input())for j in range(n)]for i in range(m)]
c=[[0 for j in range(n)]for i in range(m)]
for i in range(m):
    for j in range(n):
        c[i][j]=a[i][j]+b[i][j]
for i in range(m):
    for j in range(n):
        print(c[i][j],end=" ")
    print()