let obj ={

    name : "Ram",
    age : 17,
    address : {
        hno :511249,
        colony:"Shanthi Nagar"
    },
    phno: 1234567890
}

console.log(obj.name);
console.log(obj.address.colony);
// you will get error if you write like this console.log(obj[address['hno']]);
// because [] is not supported for complex object