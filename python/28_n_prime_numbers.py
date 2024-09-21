b = int(input("enter a number:"))
v=1
z = 1
while v <= b:
    c = 0
    for i in range(2, z):
        if z % i == 0:
            c += 1
    if c == 0:
        print(z)
        v=v+1
    z += 1
