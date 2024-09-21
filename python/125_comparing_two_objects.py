class employee:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def compare(self,obj2):
        if self.age == obj2.age and self.name==obj2.name:
            return True
        else:
            return False
e1=employee("navin","30")
e2=employee("navin","30")

if e1.compare(e2):
    print("the objects are same")
else:
    print("the objects are not same")