s1=input("enter a string:")
s2=input("enter another string:")
if(len(s1)==len(s2)):
    if(sorted(s1)==sorted(s2)):
        print("entered strings are anagram")
        print(s1 + s2)
    else:
        print("entered strings are not anagram though length is same")
else:
    print("entered strings are not anagram")