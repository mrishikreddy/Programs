import numpy
arr1=numpy.array([1,2,3,4,5,6])
arr2=numpy.array([])
#aliasing
arr2 = arr1
print("aliasing(value changes)      ",arr2)
#view(shallow copy)
arr3=arr1.view()
arr1+=5
print("shallow copy(value changes)  ",arr3)
#copy(deep copy)
arr4=arr1.copy()
arr1+=5
print("deep copy(no change of value)",arr4)