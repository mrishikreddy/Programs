def quick_sort(arr, first, last):
    if first < last:
        p = first
        i = first + 1
        j = last

        while i <= j:
            while i <= j and arr[i] <= arr[p]:
                i += 1
            while i <= j and arr[j] > arr[p]:
                j -= 1
            if i < j:
                arr[i], arr[j] = arr[j], arr[i]

        arr[p], arr[j] = arr[j], arr[p]

        quick_sort(arr, first, j - 1)
        quick_sort(arr, j + 1, last)

arr = list(map(int, input("Enter the numbers: ").split()))

quick_sort(arr, 0, len(arr) - 1)
for i in arr:
    print(i, end=" ")
