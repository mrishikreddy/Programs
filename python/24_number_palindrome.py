n = int(input("enter a number:"))
t = n
s = 0
while(t!=0):
    rem=t%10
    t=t//10
    s=s*10+rem
if s==n:
    print("entered number is a number palindrome")
else:
    print("entered number is not a number palindrome")