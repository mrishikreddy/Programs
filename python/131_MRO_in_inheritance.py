class A:
    def __init__(self):
        print("this is class A init")
    def feature(self):
        print("this is class A feature")
class B:
    def __init__(self):
        print("this is class B init")
    def feature(self):
        print("this is class B feature")
class C(A,B):
    def __init__(self):
        super().__init__()
        print("this is class C init")
    def feat(self):
        super().feature()

c1=C()
c1.feat()