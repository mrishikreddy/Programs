def fb(num):
    if not num%3 and not num%5:
        print("FIZZBUZZ")
    elif not num%3:
        print("Fizz")
    elif not num%5:
        print("BUZZ")
    else:
        print(num)
    
for i in range(1,16):
    fb(i)