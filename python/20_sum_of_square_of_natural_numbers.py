n=int(input("enter a number:"))
print("sum of squares of natural numbers upto n is:",end="")
sum=0
for i in range(1,n+1):
    sum+=i**2
print(sum)