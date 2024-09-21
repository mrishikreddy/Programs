a=int(input("enter first number:"))
b=int(input("eneter the second number:"))
if(a>b):
    max=a
else:
    max=b
while 1:
    if max%a==0 and max%b==0:
        break
    else:
        max=max+1
print("lcm of ",a,"and",b,"is:",max)