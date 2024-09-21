l = list(map(int,input("enter the numbers:").split()))
# to sort strings:
#arr = input("enter the numbers or strings:").split()
for i in range(len(l)):
    min = l[i]
    pos = i
    for j in range(i+1,len(l)):
        if l[j]<min:
            min = l[j]
            pos = j
    l[pos] = l[i]
    l[i] = min
print(l)