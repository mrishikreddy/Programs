import array
l = list(map(int,input("enter the elements of array:").split(' ')))
arr = array.array("i",l)
ind = int(input("enter the value of index:"))
arr = array.array("i",[a for a in arr if arr.index(a)!=ind])
print("Array after deleting the given value is: ",arr)