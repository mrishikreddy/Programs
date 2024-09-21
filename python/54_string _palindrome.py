s=input("enter a sentence:")
s.split()
for i in s:
    if i==i[-1::-1]:
        print(i,end="")
