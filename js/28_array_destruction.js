let arr = [1,2,3,4,5];
let [a,b,c,d,e] = arr;
console.log(`here are the values of individual varialbea:${a} b:${b} c:${c} d:${d} e:${e}`);
let [p,q,r,,s] = arr;
console.log(`p:${p} q:${q} r:${r} s${s}`);

let str = "My name is Rockstar";
let words = str.split(' ');
console.log(words);
let [m,n, ...o] =  words;
console.log(`m:${m}     n:${n}      o:${o}`);