def merge(arr):
    if len(arr)>1:
        left_array = arr[:len(arr)//2]
        right_array = arr[len(arr)//2:]
        merge(left_array)
        merge(right_array)

        i=j=k = 0
        while i<len(left_array) and j<len(right_array):
            if left_array[i]<= right_array[j]:
                arr[k] = left_array[i]
                k,i = k+1,i+1
            else:
                arr[k] = right_array[j]
                k,j = k+1,j+1
        while i<len(left_array):
            arr[k] = left_array[i]
            k,i = k+1,i+1
        while j<len(right_array):
            arr[k] = right_array[j]
            k,j = k+1,j+1
            
arr = list(map(int,input("enter the numbers:").split()))
# to sort strings:
#arr = input("enter the numbers or strings:").split()

merge(arr)
print(arr)

