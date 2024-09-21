def function_call(x):
    print("address of x before changing in function: ",id(x))
    x = 7
    print("address of x after changing in function: ",id(x))
x = 10
print("address of x outside before function call: ",id(x))
function_call(x)
print("address of x outside after function call: ",id(x))