num = int(input("enter a number: "))
temp = num
revnum = 0
while num:
    revnum = revnum*10+num%10
    num//=10
print(temp==revnum)