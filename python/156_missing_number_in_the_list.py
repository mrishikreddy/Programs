l = eval(input("enter the list: "))
# for i in range(1,len(l)+1):
#     if i+1 not in l:
#         print(i+1," is missing in the list")
#         break

n = len(l)+1
tot = (n*(n+1))//2
t = 0
for i in l:
    t += i
print(tot-t," is missing in the list")
