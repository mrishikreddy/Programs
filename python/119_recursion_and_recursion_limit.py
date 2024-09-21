import sys
print("recursion limit:",sys.getrecursionlimit())
sys.setrecursionlimit(2000)
print("new recursion limit:",sys.getrecursionlimit())
print("testing new recursion limit:")
i=0
def repeat():
    global i
    i+=1
    print(i)
    repeat()
repeat()

