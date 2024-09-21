import math
arr = list(map(int,input("enter the numbers in the array:").split(' ')))
num = int(input("enter a number to search in the array:"))

first = 0 
last = len(arr)-1
while first<=last:           # first<=last condition helps when input is arr=1,2 and num=2
    mid = (first+last)//2
    if arr[mid] == num:
        print("The entered nummber found at index",mid)
        exit(0)
    elif arr[mid]<num:
        first = mid+1
    elif arr[mid]>num:
            last = mid-1
print("The entered number is not present in the array")