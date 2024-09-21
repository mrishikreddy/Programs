from array import array
size=int(input("enter the size of array"))
print("enter ",size," elements:")
arr=array("i",[])
for i in range(size):
    c=int(input())
    arr.append(c)
new_array=array(arr.typecode,(a for a in arr))
print("the array is :",arr)
print("after copying the values to other array :",new_array)