class student:
    def __init__(self,m1,m2):
        self.m1=m1
        self.m2=m2

    def __add__(self,other):
        r1=self.m1+other.m1
        r2=self.m2+other.m2
        s3=student(r1,r2)
        return s3
    def __gt__(self,other):
        p=self.m1+self.m2
        q=other.m1+other.m2
        if(p>q):
            return True
        else:
            return False
s1=student(1,2)
s2=student(2,4)
s3=s1+s2
print(s3.m1)

if s1>s2:
    print("s1 is greater")
else:
    print("s2 is greater")