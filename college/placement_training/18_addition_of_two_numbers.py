def addition(a,b):
    return a+b

def prime_or_not(num):
    for i in range(2,num//2):
        if num%i==0:
            return 0
    else:
        return 1

print(addition(5,2))

print("lambda functions:")
print((lambda a,b: a+b)(5,3))
print((lambda a,b: a-b)(5,3))
print((lambda a,b: a*b)(5,3))
print((lambda a,b: a/b)(5,3))
print((lambda a: "Even" if a%2==0 else "Odd")(2))
print(prime_or_not(8))