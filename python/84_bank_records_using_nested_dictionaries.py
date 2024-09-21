d={}
while 1:
    print("enter 1 to add new acc\n2 to update\n3 to del\n4 to exit")
    ch=int(input())
    if ch==1:
        acc=int(input("enter acc no:"))
        nam=input("enter name:")
        bal=int(input("enter the balance:"))
        d1={"name":nam,"balance":bal}
        d[acc]=d1
        print(d)
    elif ch==2:
        acc = int(input("enter acc no:"))
        nam = input("enter name:")
        bal = int(input("enter the balance:"))
        d1 = {"name": nam, "balance": bal}
        d[acc] = d1
        print(d)
    elif ch==3:
        acc = int(input("enter acc no:"))
        del d[acc]
        print(d)
    elif ch==4:
        break
    else:
        print("Invalid input")
