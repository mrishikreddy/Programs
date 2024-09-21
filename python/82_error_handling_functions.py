try:
    a=[1,2,3]
    print(a[5])
except ZeroDivisionError:
    print("this is a zero division error")
except AttributeError:
    print("this is artttribute error")
except NameError:
    print("this is name error")
except Exception as b:
    print(b)
else:
    print("this is else block")
finally:
    print("this is always executed")