b=int(input("enter a number:"))
nn=0
while b!=0:
    rem=b%10
    b=b//10
    nn=nn*10+rem
print("reverse of a given number:",nn)
