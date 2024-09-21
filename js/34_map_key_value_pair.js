let m = new Map([[1,'arun'],[2,'rupesh'],[3,'doctor'], [4,'police']]);
console.log(m);
m.set(5,'security');
console.log(m.keys());
console.log(m.get(4));
for([k,v] of m)
{
    console.log(k+" : "+v);
}
