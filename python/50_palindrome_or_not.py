n=int(input("enter a number:"))
t=n
num=0
while(t!=0):
    rem=t%10
    num=num*10+rem
    t=t//10
if num==n:
    print("entered number is a palindrome")
else:
    print("entered number is not palindrome")