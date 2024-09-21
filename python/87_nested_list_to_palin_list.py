t=[]
def play(li):
    for i in li:
        if type(i)!=list:
            t.append(i)
        else:
         play(i)
    return t


l=eval(input("enter nested list:"))
p = play(l)
print(p)
