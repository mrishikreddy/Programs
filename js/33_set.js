var s = new Set([1,2,3,4,5])
s.add(6)
s.forEach(i => console.log(i))
console.log(s.has(6))
console.log(s.has(7))