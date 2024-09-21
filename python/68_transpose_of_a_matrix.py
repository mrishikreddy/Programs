rows = int(input("enter the rows of matrix:"))
cols = int(input("enter the cols of matrix:"))
a = [[int(input())for j in range(cols)]for i in range(rows)]
for i in range(cols):
    for j in range(rows):
        print(a[j][i],end=' ')
    print()