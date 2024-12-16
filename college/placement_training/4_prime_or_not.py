n = int(input("enter a number: "))
for i in range(2,n//2+1):
    if n%i==0:
        print("entered number is not a prime number")
        break
else:
    print("entered number is a prime number")