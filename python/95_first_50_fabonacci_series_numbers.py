i=1
a=0
b=1
print("0 ",end="")
while(i < 50):
    s = a + b
    print(b,end=" ")
    a=b
    b=s
    i=i+1

