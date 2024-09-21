arr = list(map(int,input("enter the numbers:").split()))
nd = len(arr)
for i in range(nd):
    for j in range(0,nd-i-1):
        if arr[j]>arr[j+1]:
            arr[j],arr[j+1] = arr[j+1],arr[j]
for i in arr:
    print(i,end=" ")