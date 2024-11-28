def add_edge(mat,e1,e2):
    mat[e1][e2] = 1
    mat[e2][e1] = 1

def print_mat(mat,v):
    for i in range(v):
        for j in range(v):
            print(mat[i][j],end=" ")
        print()

v = 4
mat = [[0]*v for i in range(v)]

add_edge(mat,0,1)
add_edge(mat,0,2)
add_edge(mat,1,2)
add_edge(mat,2,3)
print_mat(mat,v)
