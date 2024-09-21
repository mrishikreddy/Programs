arr = list(map(int,input("enter the numbers:").split()))
nd = len(arr)
for i in range(1,nd):
    key = arr[i]
    j = i-1
    while j>=0 and arr[j]>key:
        arr[j+1] = arr[j]
        j-=1
    arr[j+1] = key
for i in arr:
    print(i,end=" ")
