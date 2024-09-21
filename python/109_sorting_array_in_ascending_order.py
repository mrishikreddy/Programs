import array
l = list(map(int,input("enter the numbers: ").split(' ')))
arr = array.array("i",l)
nd = len(arr)
for i in range(nd):
    for j in range(nd-i-1):
        if arr[j]>arr[j+1]:
            arr[j],arr[j+1] = arr[j+1],arr[j]
print(arr)