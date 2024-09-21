t=eval(input("enter a tuple:"))
n=int(input("enter the number to search in tuple:"))
if n in t:
    print("the index value of ",n," is:",t.index(n))
else:
    print("the number is not present in the tuple")