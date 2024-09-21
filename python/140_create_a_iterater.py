class topten:
    def __init__(self):
        self.num=1
    def __iter__(self):  #it is used to make object as iter
        return self
    def __next__(self):
        if self.num<=10:
            val=self.num
            self.num +=1
            return val
        else:
            raise StopIteration
values=topten()
print(values.__next__())
print(values.__next__())
print(values.__next__())
