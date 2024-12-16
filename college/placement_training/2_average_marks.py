l = list(map(int,input("enter the marks of subjects: ").split(" ")))
nd = len(l)

avg = sum(l)//nd
print(avg)
if avg>90:
    print("O")
elif avg<=90 and avg>=80:
    print("A+")
elif avg<=79 and avg>=70:
    print("B")
elif avg<=69 and avg>=60:
    print("B+")
elif avg<=59 and avg>=50:
    print("c")
else:
    print("failed")
