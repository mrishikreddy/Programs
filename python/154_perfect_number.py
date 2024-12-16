num = int(input("enter a number: "))
tot=0
for i in range(1,num):
    if num%i==0:
        tot += i
if tot==num:
    print("entered number is a perfect number")
else:
    print("entered number is not a perfect number")