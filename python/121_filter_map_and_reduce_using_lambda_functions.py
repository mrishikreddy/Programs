import functools
lst=[1,2,3,4,5,6,7,8]
odd=list(filter(lambda n:n%2!=0,lst))
print("odd numbers are:",odd)
lst=list(filter(lambda n:n%2==0,lst))
print("even numbers are:",lst)
lst=list(map(lambda n:n*2,lst))
print("double of even numbers are:",lst)
summ=functools.reduce(lambda a,b:a+b,lst)
print("the sum is:",summ)