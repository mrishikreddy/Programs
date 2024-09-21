n=input("enter a character")
if (n>='A' and n<='Z')or(n>='a' and n<='z'):
    print("entered character is an alphabet")
elif n>='0' and n<='9':
    print("entered charcter is a number")
else:
    print("entered character is a special character")