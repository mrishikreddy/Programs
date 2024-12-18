num = int(input("enter a number: "))
tot=0
temp = num
for i in range(1,num):
    if num%i==0:
        tot+=i
print(tot==temp)