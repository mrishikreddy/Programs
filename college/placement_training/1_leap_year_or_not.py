num = int(input("Enter the year:"))
if num%100==0:
    if num%400==0:
        print("leap year")
    else:
        print("not a leap year")
else:
    if num%4==0:
        print("leap year")
    else:
        print("not a leap year")
