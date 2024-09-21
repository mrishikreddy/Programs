class A:
    def feature1(self):
        print("feature 1")
    def feature2(self):
        print("feature 2")
class B(A):
    def feature3(self):
        print("feature 3")
class C(B):
    def feature4(self):
        print("feature 4")

var=B()
var.feature4()