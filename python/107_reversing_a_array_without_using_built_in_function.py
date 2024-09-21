import array
oarr=array.array("i",[])
size=int(input("enter the size of array:"))
print('enter ',size,' values:')
for i in range(size):
    oarr.append(int(input()))
l = list(oarr)
l = [a for a in l]
l[:] = l[-1::-1]
arr = array.array("i",[a for a in l])
print(arr)