s=input("enter the string:")
d={}
t=''
for i in s:
    if i not in t:
        t+=i
for i in t:
    d[i]=s.count(i)
for i in d:
    print(i,'->',d[i])