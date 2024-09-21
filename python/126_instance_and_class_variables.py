class student:
   education="B.Tech"                 # class variable
   # for class variarible we have to use class name or object name
   def __init__(self,year,section,gender):
       self.year=year                 # instance variable
       self.section=section           # instance variable
       self.gender=gender             # instance variable
   def psecgen(self):
       print("section:",self.section,",gender:",self.gender,",education:",self.education)
   def pyear(self):
       print("year:",self.year,",education:",student.education)
       #for instance variarible we have to use object name

rishik=student(2,"B","Male")
deepak=student(2,"A","Male")
sithara=student(1,"A","Female")
rishik.psecgen()
rishik.pyear()