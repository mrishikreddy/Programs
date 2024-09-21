class A:
    def imprint(self):
        print("This is in class A")
class B(A):
    def imprint(self):
        print("This is in class B")
v=B()
v.imprint()