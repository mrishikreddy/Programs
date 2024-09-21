n=int(input("enter a number:"))
t=n
sum=0
while n!=0:
    rem=n%10
    n=n//10
    f=1
    while rem!=0:
        f*=rem
        rem=rem-1
    sum+=f
if t==sum:
    print("entered number is armstrong number")
else:
    print("entered number is not an armstrong number")