class pycharm():
    def execute(self):
        print("compiling")
class MyEditor:
    def execute(self):
        print("spell check")
        print("compiling")
class laptop:
    def mcall(self,obj):
        obj.execute()
ide=MyEditor()
c1=laptop()
c1.mcall(ide)
