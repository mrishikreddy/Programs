/* in eventHandling this keyword gives the value undefined if directly used so eventBinding is used 
it can be solved by Three methods */ 

import React, { Component } from 'react'

class EventBinding extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
        msg : "Hello"
      }

      this.ClickHandler = this.ClickHandler.bind(this)          // part of third method which declares bind method inside constructor of super class
                                                                // to avoid re-rendering of code
    }

    /*
    # this gives this value undefined and you will get runtime errors 
    ClickHandler()
    {
        this.setState({    |
            msg : "Bye"    |    comment this three lines to avoid runtime errors
        })                 | 

        console.log(this)
    }

    Note: in button the code goes like this ; <button onClick={this.ClickHandler}>Click Me</button>
    */

   ClickHandler()
    {
        this.setState({
            msg : "Bye"
        })
    }

    /*ClickHandler = ()=>
    {                               |   This is the fourth method while the button code remains same
        this.setState({             |   as the third code.
            msg : "Bye"             |   This is also best method to do eventBinding
        })  */                       


  render() {
    return (
        <div>
        <h1>{this.state.msg}</h1>
       {/* <button onClick={this.ClickHandler.bind(this)}>Click Me</button>     # when we use bind method it re-renders the code which decreases perfomance for many times clicking*/}
       {/* <button onClick={()=> this.ClickHandler()}>Click Me</button>         # this also has some performance implications */} 
       <button onClick={this.ClickHandler}>Click Me</button>                    {/* Best method to use */}
      </div>
    )
  }
}

export default EventBinding