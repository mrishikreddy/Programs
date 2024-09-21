import numpy as np
arr1=np.array([[1,2],
               [3,4]])
arr2=np.array([[1,2],
               [3,4]])
arr1=np.matrix(arr1)
arr2=np.matrix(arr2)

print("maximum element in array1 is : ",np.max(arr1))
print("minimum element in array1 is : ",np.min(arr1))
print("addition of array1 and array2:",arr1+arr2)
print("product of array1 and array2:",arr1*arr2)