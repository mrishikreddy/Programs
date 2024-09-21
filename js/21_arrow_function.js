let greater = (a,b,c) =>{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
console.log(greater(1,2,3));

let summation = (a,b,c) => a+b+c
console.log(summation(1,2,3));