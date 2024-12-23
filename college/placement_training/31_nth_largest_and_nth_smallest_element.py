l = list(map(int,input("enter the elements: ").split(" ")))
n = int(input("enter a number: "))-1
l.sort()
nd = len(l)-1
print(l)
print("The nth smallest number is: ",l[n])
print("The nth largest element is: ",l[nd-n])