def create_matrix(matrix):
        count = 1
        row_begin = 0
        col_begin = 0
        row_end = len(matrix)-1
        col_end = len(matrix[0])-1
        while row_begin<=row_end and col_begin<=col_end:
            for i in range(col_begin,col_end+1):
                matrix[row_begin][i] = count
                count += 1
            row_begin+=1

            for i in range(row_begin,row_end+1):
                matrix[i][col_end] = count
                count += 1
            col_end-=1

            if(row_begin<=row_end):
                for i in range(col_end,col_begin-1,-1):
                    matrix[row_end][i] = count
                    count += 1
                row_end-=1

            if(col_begin<=col_end):
                for i in range(row_end,row_begin-1,-1):
                    matrix[i][col_begin] = count
                    count += 1
                col_begin+=1
        


m,n = list(map(int,input("enter the number of rows and cols: ").split(" ")))
l = [[(0)for j in range(n)]for i in range(m)]
print("The spiral matrix for the given inputs is:")
create_matrix(l)
for i in l:
    for j in i:
        if j<10:
            print(j,end="  ")
        else:
            print(j,end=" ")
    print()