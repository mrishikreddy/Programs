l=[]
def plain(t):

    for i in t:
        if type(i)==tuple:
           plain(i)
        else:
            l.append(i)
    return max(l)



t=eval(input("enter the nested tuple:"))
rs=plain(t)
print(rs)