s1 = input("enter first string:")
s2 = input("enter the another string:")

s1len = len(s1)
s2len = len(s2)

if s2len<s1len:
    s1,s2=s2,s1
    s1len,s2len=s2len,s1len

count = 1
for i in range (s2len-s1len+1):
    j = i
    if s1[0]==s2[j]:
        count = 0
        for z in range(s1len):
            if s1[z] == s2[j]:
                j+=1
                count += 1
        if count == s1len:
            print(s1," is the substring of ",s2,' at index ',i)
            break
else:
    print(s1," is the not substring of ",s2)
            
