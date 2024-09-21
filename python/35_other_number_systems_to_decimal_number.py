num = input("enter the numbers along with number system code:")
dec = 0
if num[0:2] == "0b":
    num=int(num[2:])
    base=1
    while num!=0:
        rem=num %10
        dec=dec+rem*base
        num=num//10
        base*=2
   # or dec = int(num[2:], 2)
elif num[0:2] == "0o":
    num = int(num[2:])
    base = 1
    while num != 0:
        rem = num % 10
        dec = dec + rem * base
        num = num // 10
        base *= 8
   # or dec = int(num[2:], 8)
elif "0x" == num[0:2]:
    base=1
    for i in num[:1:-1]:
        if i=="A" or i=="a":
            dec=dec+10*base
        elif i=="B" or i=="b":
            dec=dec+11*base
        elif i=="C" or i=="c":
            dec=dec+12*base
        elif i=="D" or i=="d":
            dec=dec+13*base
        elif i=="E" or i=="e":
            dec=dec+14*base
        elif i=="F" or i=="f":
            dec=dec+15*base
        else:
            dec=dec+(int(i)*base)
        base*=16
   # or dec = int(num[2:], 16)
else:
    print("Invalid input")
    exit(0)
print("the decimal number is:", dec)
