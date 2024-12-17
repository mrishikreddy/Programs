salary = int(input("enter salary per month:"))
if salary>=100000:
    tax = (salary/100)*10
    print("deducted tax is 10% tax is: ",tax)
elif 50000<=salary and salary<=100000:
    tax = (salary/100)*5
    print("deducted tax is 5% tax is: ",tax)
elif 25000<=salary and salary<50000:
    tax = (salary/100)*2
    print("deducted tax is 2% tax is: ",tax)
else:
    print("No tax")