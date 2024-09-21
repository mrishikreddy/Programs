from collections import deque
class queue:
    def __init__(self):
        self.q = deque()

    def append(self,val):
        print("called append")
        self.q.append(val)

    def appendleft(self,val):
        print("called appendleft")
        self.q.appendleft(val)

    def pop(self):
        print("called pop")
        print(self.q.pop())

    def popleft(self):
        print("called popleft")
        print(self.q.popleft())

    def index(self,ele,beg,end):
        print("called index")
        print(self.q.index(ele,beg,end))

    def insert(self,ind,val):
        print("called insert")
        self.q.insert(ind,val)

    def remove(self,val):
        print("called remove")
        self.q.remove(val)

    def count(self,val):
        print("called count")
        print(self.q.count(val))

    def length(self):
        print("called length")
        print(len(self.q))

    def front(self):
        print("called front")
        print(self.q[0])

    def rear(self):
        print("called rear")
        print(self.q[-1])

    def extend(self,l):
        print("called extend")
        self.q.extend(l)
            
    def extendleft(self,l):
        print("called extendleft")
        self.q.extendleft(l)

    def reverse(self):
        print("called reverse")
        self.q.reverse()

    def rotate(self,num):
        print("called rotate")
        self.q.rotate(num)
        
    def display(self):
        print("called display")
        print(list(self.q))

que = queue()
que.append(1)
que.append(2)
que.append(3)
que.append(4)
que.append(5)
que.append(6)
que.display()
que.appendleft(12)
que.display()
que.pop()
que.popleft()
que.display()
que.appendleft(12)
que.display()
que.index(4,3,6)
que.insert(4,12)
que.display()
que.remove(12)
que.display()
que.count(2)
que.length()
que.display()
que.front()
que.rear()
que.extend([7,7,7])
que.extendleft([6,6,6])
que.display()
que.reverse()
que.display()
que.rotate(4)
que.display()

