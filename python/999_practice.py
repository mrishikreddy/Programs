import numpy
arr = numpy.array([],int)
size = int(input("enter the size: "))
print("enter ",size," values: ")
for i in range(size):
    arr.append(int(input()))
for i in range(size):
    for j in range(i,size):
        if arr[i]>arr[j]:
            arr[i],arr[j] = arr[j],arr[i]
print("after sorting array: ")
print(arr)