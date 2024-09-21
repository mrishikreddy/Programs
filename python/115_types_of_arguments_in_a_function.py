def person(name="Rishik",age=20): #default arguments
    print(name,end=" ")
    print(age)
def summ(*a):
    s=0
    for i in a:
        s=int(s)+i
    print("sum is :",s)

person()
person("RISHIK",18)               #positional arguments
person(age=18,name="RISHIK")      #keyword arguments

summ(1,2,3,4,5)