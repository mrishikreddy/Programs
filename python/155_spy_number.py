# Spy number : if sum of digits and product of digits are equal
tot,pro = 0,1
num = int(input("enter a number:"))
while num:
    tot += num%10
    pro *= num%10
    num //= 10
print(tot==pro)