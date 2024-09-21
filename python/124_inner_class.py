class student:
    def __init__(self,name,standard,section):
        self.name=name
        self.standard=standard
        self.section=section
       #self.lap=self.laptop()
    class laptop:
        def __init__(self,brand,gcard,ram):
            self.brand=brand
            self.gcard=gcard
            self.ram=ram

s1=student("ragu",9,"A")
s1l=student.laptop("HP","i5","8GB")
print(s1.name)