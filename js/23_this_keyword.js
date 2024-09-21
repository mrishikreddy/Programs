let obj = {
    name :"Rion",
    age: 19,
    "college name": "something college",
    display:function()
    {
        console.log(this.name);
        console.log(this.age);
        console.log(this["college name"]);
    }
}

obj.display()