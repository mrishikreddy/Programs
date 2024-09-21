m=int(input("enter number of rows of matrix a:"))
n=int(input("enter number of cols of matrix a:"))
print("enter the values of matrix a:")
a=[[int(input())for j in range(n)]for i in range(m)]
p=int(input("enter number of rows of matrix b:"))
q=int(input("enter number of cols of matrix b:"))
print("enter the values of matrix b:")
b=[[int(input())for j in range(q)]for i in range(p)]
if n==p:
    c=[[0 for j in range(m)]for i in range(q)]
    for i in range(m):
        for j in range(q):
            for k in range(n):
                c[i][j]+=a[i][k]+b[k][j]
    for i in range(m):
        for j in range(q):
            print(c[i][j],end=" ")
        print()
else:
    print("matrix multiplication is not possible")