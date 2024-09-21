num = int(input("enter the rating(1-5):"))
match num:
    case 1:
        print("worst")
    case 2:
        print("bad")
    case 3:
        print("ok")
    case 4:
        print("good")
    case 5:
        print("execellent")
    case _:
        print("given invalid rating")
