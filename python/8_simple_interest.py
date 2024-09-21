p=int(input("enter the principle amount:"))
r=int(input("enter the rate of interest:"))
t=int(input("enter the time in years"))
i=(p*t*r)/100
print("simple interest is:",i)
print("total amount to be paid is:",i+p)