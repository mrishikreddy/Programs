n=input("enter a alphabet:")

if n in "aeiouAEIOU":
    print("it is a vowel")
else:
    print("it is a consonant")

if ord(n)>=65 and ord(n)<=90:
    c=ord(n)+32
    print("reverse cae of alphabet is:",chr(c))
elif (ord(n)>=97 and ord(n)<=122):
    c = ord(n) - 32
    print("reverse cae of alphabet is:",chr(c))
else:
    print("you have given incorrect input")