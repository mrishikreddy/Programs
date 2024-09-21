import React, { Component } from 'react'
                                                        // use code snippet: rce for class component o genarate the basic code
class ClassClick extends Component {
    clickHandler()         // event handlers are used to handle a event
    {                      // Note: no need to mention function keyword in class component
        console.log("Button Clicked");
    }                                                      
  render() {
    return (
        <div><button onClick={this.clickHandler}>Click me</button></div>             //<< donot use () while call clickHandler bcoz it call function directly and calls fn without clicking it 
      );                                                                             // this keyword is must in class component to call a function
  }
}

export default ClassClick