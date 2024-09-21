d = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven', 8: 'eight',
     9: 'nine', 0: 'zero'}
n = int(input("enter a number:"))
s = []
while (n != 0):
    rem = n % 10
    s.append(rem)
    n //= 10
r = s[-1::-1]
# or
# s.reverse()
# r=s
for i in r:
    print(d[i], end=" ")


# or 
#d = {'1': 'one', '2': 'two', '3': 'three', '4': 'four', '5': 'five', '6': 'six', '7': 'seven', '8': 'eight',
#     '9': 'nine', '0': 'zero'}
#num = input("enter a number")
#for i in num:
#    print(d[i],end=" ")
#