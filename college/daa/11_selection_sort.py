arr = list(map(int,input("enter the list of numbers:").split()))
nd = len(arr)
for i in range(nd):
    minn = arr[i]
    ind = i
    for j in range(i+1,nd):
        if minn > arr[j]:
            minn = arr[j]
            ind = j
    arr[ind] = arr[i]
    arr[i] = minn
for i in arr:
    print(i,end=" ")

        