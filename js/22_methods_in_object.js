let obj = {
    name :"Rion",
    age: 19,
    "college name": "something college",

    print_details: function()
    {
        console.log(obj.name+"\n"+obj.age+"\n"+obj["college name"]);
    },

    display: () => {for(i in obj) console.log(obj[i]);}

}

obj.print_details();
console.log("\n");
obj.display();

