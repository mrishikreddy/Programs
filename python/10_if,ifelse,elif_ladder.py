age=int(input("enter your age:"))
if age>=18:
    r=int(input("give your rating:"))
    if(r==1):
        print("worst")
    elif(r==2):
        print("bad")
    elif(r==3):
        print("average")
    elif(r==4):
        print("good")
    elif(r==5):
        print("exellent")
    else:
        print("invalid input")
else:
    print("you are minor , so you are not allowed to give the rating")