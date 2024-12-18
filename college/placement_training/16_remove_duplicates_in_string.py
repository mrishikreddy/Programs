str1 = input("enter a string: ")
str2 = ""
for i in str1:
    if i not in str2:
        str2+=i
print("String after removing duplicates: ",str2)