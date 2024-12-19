import array
arr = array.array("i",[1,2,3,4,5])
nd = len(arr)-1
for i in range(nd//2):
    arr[i],arr[nd-i] = arr[nd-i],arr[i]
print(arr)