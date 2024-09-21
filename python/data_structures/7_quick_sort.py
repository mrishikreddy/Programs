def quick_sort(arr,first,last):
    if first<last:
        p = first
        i = first
        j = last

        while i<=j:
            while arr[p]>=arr[i] and i<=j:
                i+=1
            while arr[p]<arr[j] and i<=j:
                j-=1
            if i<j and arr[i]>arr[j]:
                arr[i],arr[j] = arr[j],arr[i]
        if i>j:
            arr[p],arr[j] = arr[j],arr[p]
        quick_sort(arr,first,j-1)
        quick_sort(arr,j+1,last)

arr = list(map(int,input("enter the numbers:").split()))
# to sort strings:
#arr = input("enter the numbers or strings:").split()

quick_sort(arr,0,len(arr)-1)
for i in arr:
    print(i,end=" ")