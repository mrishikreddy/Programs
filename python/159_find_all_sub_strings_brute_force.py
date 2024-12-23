s = input("enter a string: ")
print("All possible substrings for the given string is:")

for i in range(len(s)):
    for j in range(i+1,len(s)+1):
        print(s[i:j])