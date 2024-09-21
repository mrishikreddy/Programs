m=int(input("enter number of rows of matrix a:"))
n=int(input("enter number of cols of matrix a:"))
print("enter the values of matrix a:")
a=[[int(input())for j in range(n)]for i in range(m)]
sum=0
for i in range(m):
    for j in range(n):
        if i==j:
            sum+=a[i][j]
print("trace of a matrix is:",sum)