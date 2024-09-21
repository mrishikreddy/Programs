def topten():
    yield 1
    yield 2
    yield 3
    yield 4
    yield 5
values=topten()
print(next(values))
print(next(values))
print(next(values))