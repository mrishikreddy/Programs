import array
arr = array.array("i",[1,2,3,4,5])
max1 = -float('inf')
max2 = -float('inf')
for i in arr:
    if max1<i:
        max1=i
        
for i in arr:
    if max2<i and max1!=i:
        max2=i
print("Second largest element is: ",max2)