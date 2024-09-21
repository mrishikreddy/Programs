import numpy
arr=numpy.array([
    [1,2,3,4],
    [5, 6, 7, 8],
    [5, 6, 7, 8]
    ])
print("reshaped array:")
narr=arr.reshape(2,6)
print(narr)
narr=arr.flatten()
print()
print("flattened array :",narr)