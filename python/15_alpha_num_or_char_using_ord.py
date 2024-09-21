n=input("enter a character")
if (ord(n)>=65 and ord(n)<=90)or(ord(n)>=97 and ord(n)<=122):
    print("entered character is an alphabet")
elif ord(n)>=48 and ord(n)<=57:
    print("entered charcter is a number")
else:
    print("entered character is a special character")