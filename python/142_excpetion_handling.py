l=[0,1,2,3,4]
try:
    b=int(input("enter the index value of list:"))
    print(5/l[b])
except ZeroDivisionError:
    print("ZeroDivisionError,You can't divide a number with zero")
except Exception as e:
    print(e)
finally:
    print("this statement will be definitely printed")

    
    