num = input("enter a number in byte code:")
dig = input("enter number of digits to be shifted:")
r = ''
for i in range(len(num)-len(dig)-1):
    r += num[i]
print("The result is : ",r)