import array
arr = array.array("i",[1,2,3,4,5])
mini = arr[0]
maxi = arr[1]
for i in arr:
    if mini>i:
        mini = i
    if maxi<i:
        maxi = i
print(mini,maxi)