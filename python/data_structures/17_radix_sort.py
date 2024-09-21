def countingSort(arr,exp1):
    n = len(arr)
    output = [0]*(n)
    count = [0]*(10)

    # initailizing count array with the count values of specified digits place values
    for i in range(0,n):
        index = arr[i]//exp1
        count[index%10]+=1

    # intialzing cummilative array,( the number is equals to sum with its previous number)
    for i in range(1,10):
        count[i]+=count[i-1]

    # iterating from right to left(reverse order) and placing the elements in the correct 
    # position in output array
    i = n-1
    while i>=0:
        index = arr[i]//exp1
        output[count[index%10]-1]=arr[i]
        count[index%10]-=1
        i-=1
    
    # assigning values to the original array from output array
    for i in range(0,len(arr)):
        arr[i] = output[i]




def radixSort(arr):
    max1 = max(arr)
    exp = 1

    # calling the countingSort the number of times which is equal to number of digits 
    # the largets number has
    while max1/exp >=1:
        countingSort(arr,exp)
        exp*=10


arr = list(map(int,input("enter the numbers:").split(" ")))
radixSort(arr)
for i in range(len(arr)):
    print(arr[i],end=" ")
    