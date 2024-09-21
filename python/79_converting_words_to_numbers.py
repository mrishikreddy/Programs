d={'one':1,'two':2,'three':3,'four':4,'five':5,'six':6,'seven':7,'eight':8,
   'nine':9,'zero':10,}
s=input("enter the number in words: ")
l=s.split(' ')
for i in l:
    print(d[i],end="")