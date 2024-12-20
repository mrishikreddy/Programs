def qs(arr,first,last):
    if first<last:
        i = first+1
        p = first
        j = last
        while i<=j:
            while i<=j and arr[i]<=arr[p]:
                i+=1
            while i<=j and arr[j]>arr[p]:
                j-=1
            if i<j:
                arr[i],arr[j] = arr[j],arr[i]
        arr[j],arr[p] = arr[p],arr[j]
        qs(arr,first,j-1)
        qs(arr,j+1,last)

l = list(map(int,input("enter the numbers: ").split(" ")))
qs(l,0,len(l)-1)
print(l)