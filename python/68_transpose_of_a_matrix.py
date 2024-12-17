rows = int(input("enter the rows of matrix:"))
cols = int(input("enter the cols of matrix:"))
print("enter the ",rows*cols,"values: ")
a = [[int(input())for j in range(cols)]for i in range(rows)]
b = [[a[i][j]for i in range(rows)]for j in range(cols)]
for i in range(cols):
    for j in range(rows):
        print(b[i][j],end=' ')
    print()