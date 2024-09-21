n=int(input("enter a number:"))
sum=0
while n!=0:
    sum+=(n%10)
    n//=10
print("the sum of individual digits is:",sum)