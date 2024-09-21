a=int(input("enter first number:"))
b=int(input("eneter the second number:"))
if(a<b):
    min=a
else:
    min=b
i=1
hcf=0
while i<=min:
    if a%i==0 and b%i==0:
        hcf=i
    i=i+1
print("lcm of ",a,"and",b,"is:",hcf)