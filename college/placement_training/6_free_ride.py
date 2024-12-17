gen,adhaar_present,state = list(map(eval,input("enter gender, carries address proof or not and state: ").split(" ")))
if gen=="Female" and adhaar_present:
    if state=="TG":
        print("100% concession")
    elif state=="AP":
        print("50% concession")
    else:
        print("10% concession")
else:
    print("No concession")