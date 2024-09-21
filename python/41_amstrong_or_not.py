n=int(input("enter a number:"))
nd=len(str(n))
t=n
sum=0
while n!=0:
    rem=n%10
    n//=10
    sum+=rem**nd
if sum==t:
    print("the given number is a armstrong number")
else:
    print("the given number is not an armstrong number")