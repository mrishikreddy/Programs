n = int(input("enter a number"))
for i in range(3,n//2+1):
    if n%2 == 0:
        print("entered number is not prime number")
        exit(0)
print("entered number is a prime number")
