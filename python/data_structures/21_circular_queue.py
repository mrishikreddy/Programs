class circular_queue:
    def __init__(self,size):
        self.maxSize = size
        self.que = [0]*self.maxSize
        self.front=-1
        self.rear=-1
    
    def enqueue(self,item):
        if self.isEmpty():
            self.front=0
            self.rear=0
            self.que[self.rear]=item
        else:
            self.rear = (self.rear+1)% self.maxSize
            self.que[self.rear] = item
            if self.rear==self.front:
                print("queue is full")
                self.rear = (self.rear-1+self.maxSize)%self.maxSize
            else:
                self.que[self.rear] = item

    def dequeue(self):
        item = -1
        item = self.que[self.front]
        if not self.isEmpty():
            if self.rear==self.front:
                self.rear=-1
                self.front=-1
            else:
                self.front = (self.front+1)%self.maxSize
            return item
        else:
            print("unable to dequeue, queue is empty")
            return -1
        

    def peek(self):
        if not self.isEmpty():s
            return self.que[self.front]
        else:
            print("queue is empty no peek value")
            return -1
    
    def isEmpty(self):
        return self.rear==-1 and self.front==-1

q = circular_queue(10)
print(q.isEmpty())
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)
q.enqueue(6)
q.enqueue(7)
q.enqueue(8)
q.enqueue(9)
q.enqueue(10)
q.enqueue(11)

print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())