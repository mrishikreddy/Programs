s = input("enter a string: ")
ns = ""
# for i in s:
#     if i.isupper():
#         ns += i.lower()
#     else:
#         ns += i.upper()

for i in s:
    if i>="a" and i<="z":
        ns += chr(ord(i)-32)
    else:
        ns += chr(ord(i)+32)
print(ns)