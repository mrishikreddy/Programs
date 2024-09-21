class stack:
    def __init__(self):
        self.s = []
    def push(self,num):
        self.s.append(num)
    def pop(self):
        if self.s:
            return self.s.pop()
        else:
            return ""
    def peek(self):
        if self.s:
            return self.s[-1]
        else:
            return ""
    def isempty(self):
        return not self.s

st = stack()
st.push(1)
st.push(2)
st.push(3)
st.push(4)
st.push(5)
st.push(6)
print(st.pop())
print(st.pop())
print(st.isempty())
print(st.peek())
print(st.pop())
print(st.pop())
print(st.pop())
print(st.pop())