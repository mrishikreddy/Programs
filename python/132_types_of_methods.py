class student():
    school="CSE"

    def __init__(self,name,section,rollno):
        self.name=name
        self.section = section
        self.rollno = rollno
    def get_M(self):
        print(self.name,self.section,self.rollno)

    def set_M(self,value):
        self.rollno=value
    @classmethod
    def pschool(cls):
        print(cls.school)
    @staticmethod
    def SM():
        print("this is a static method")
    # static method is defined when the method should be overridden

s1=student("ram","B",27)
s1.set_M(26)
s1.get_M()
s1.pschool()
s1.SM()



