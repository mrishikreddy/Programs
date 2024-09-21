l = list(map(int,input("enter the numbers: ").split(" ")))
sele = int(input("enter a element to search: "))
low = 0
high = len(l)
while low<high:
    mid = (low+high)//2
    if l[mid]==sele:
        print("element found at index ",mid)
        exit(0)
    elif l[mid]<sele:
        low = mid+1
    else:
        high = mid-1
print("element nt found")