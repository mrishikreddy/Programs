class car:
    def __init__(self,color,model):
        self.color=color
        self.model=model
    def printf(self):
        print(self.color,self.model)
class fuel(car):
    def __init__(self,color,model,mileage):
        self.color=color
        self.model=model
        self.mileage=mileage
    def fuelprintf(self):
        print(self.color,self.model,self.mileage)
class electric(car):
    def __init__(self,color,model,battery):
        self.color=color
        self.model=model
        self.battery=battery
    def electricprintf(self):
        print(self.color,self.model,self.battery)

maruthi=car("white","swift")
maruthi.printf()

bmw=fuel("blue","A3",20)
bmw.fuelprintf()

kia=electric("silver","EV6",30000)
kia.electricprintf()

