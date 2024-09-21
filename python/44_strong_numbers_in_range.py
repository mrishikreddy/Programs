a=int(input("enter the starting value of range:"))
b=int(input("enter the ending value of range:"))
for i in range(a,b+1):
    nd=len(str(i))
    sum=0
    t=i
    while(t!=0):
        rem=t%10
        t=t//10
        fact = 1
        j=1
        while(j<=rem):
            fact=fact*j
            j+=1
        sum=sum+fact
    if(sum==i):
        print(i)