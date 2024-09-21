import React, {Component} from "react";

/*
class Destruct_cls extends Component{
    render()
    {
        return <h1> {this.props.name} a.k.a {this.props.char}</h1>

    };
};

  # This is the syntax we generally use using props destructuring we can destructure propes in one methid as shown below
*/

class Destruct_cls extends Component{
    render()
    {   const {name,char} = this.props          // << syntax, Note: const keyword is mandatory
        return <h1> {name} a.k.a {char}</h1>

    };
};
export default Destruct_cls
