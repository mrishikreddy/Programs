class student:
   def __init__(self,year,section,gender):
       self.year=year
       self.section=section
       self.gender=gender
   def psecgen(self):
       print("section:",self.section,",gender:",self.gender)
   def pyear(self):
       print("year:",self.year)
rishik=student(2,"B","Male")
deepak=student(2,"A","Male")
sithara=student(1,"A","Female")
rishik.psecgen()
rishik.pyear()