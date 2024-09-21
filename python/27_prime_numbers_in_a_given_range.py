n=int(input("enter starting range:"))
m=int(input("enter the ending range:"))
for i in range(n,m+1):
    count=0
    for j in range(1,i):
        if(i%j==0):
            count=count+1
    if(count==1):
        print(i)