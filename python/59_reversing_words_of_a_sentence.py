s=input("enter a sentence:")
c=s.split()
rev=""
for i in c:
    rev=i[-1::-1]
    print(rev,end=" ")

