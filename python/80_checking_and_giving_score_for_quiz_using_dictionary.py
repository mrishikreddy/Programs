d={'q1':'a','q2':'b','q3':'c','q4':'d','q5':'a',}
s=0
for i in d:
    print(i,'\na)\nb)\nc)\nd)')
    print('\nto skip question press s\n to quit the exam type q\n\n')
    ans=input("answer:")
    if d[i]==ans:
        s+=1
    elif ans == 's':
        continue
    elif ans == 'q':
        break
    else:
        s-=1

print("your final score is:",s)
