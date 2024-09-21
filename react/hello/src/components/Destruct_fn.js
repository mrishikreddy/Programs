import React, {Component} from "react";

/*const Destruct_fn = (props)=>
{
    return <h2>{props.name} a.k.a {props.char}</h2>
}
    # This is the syntax we generally use using props destructuring we can destructure propes in two method as shown below we can use one of the two methods
*/



/* method 1*/
/* const Destruct_fn = ({name,char})=>             //  << syntax
{
    return <h2>{name} a.k.a {char}</h2>
}
*/

/* method 2*/

const Destruct_fn = (props)=>
{
    const {name,char} = props                       // << syntax
    return <h2>{name} a.k.a {char}</h2>
}

/* Note : const keyword is mandatory*/



export default Destruct_fn