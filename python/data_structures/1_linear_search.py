pos = -1
def search(l,num):
    for i in l:
        if i==num:
            globals()['pos']= l.index(i)
            return True
    else:
        return False


print("enter the numbers:")
l=list(map(int,input().split()))
sele=int(input("enter a number to search"))
if search(l,sele):
    print("element found at index ",pos)
else:
    print("element not found")