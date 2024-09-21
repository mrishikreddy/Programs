l = list(map(int,input("enter the numbers:").split()))
# to sort strings:
#arr = input("enter the numbers or strings:").split()
for i in range(1,len(l)):
    key = l[i]
    j = i-1
    while j >= 0 and l[j]>key:
        l[j+1] = l[j]
        j-=1
    l[j+1] = key
for i in l:
    print(i,end=" ")
    
        
    
        