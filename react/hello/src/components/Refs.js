import React, { Component } from 'react'

export class Refs extends Component {
    constructor(props) {
      super(props)
    
      this.inputRef = React.createRef();       // this is used to create ref and assining it to a attribute
                                              // it is done in constructor so that it is accessed anywhere in the component
    }

   componentDidMount()
   {
    this.inputRef.current.focus()             // input.Ref.current has some properties
    console.log(this.inputRef)                // input.Ref.current.focus() focuses the reffered element
   }

   clickHandler = () =>{
    alert(this.inputRef.current.value)        // input.Ref.current.value holds the value of the reference
   }

  render() {
    return (
      <div>
        <input type="text" ref={this.inputRef} />                {/* here the the input element is assigned to a ref  called inputref so now it is object of type refernce*/}
       <button onClick={this.clickHandler}>Click Me</button>    {/* calling a click handler whenever a click is initiated */}
     </div>
    )
  }
}

export default Refs





/*old method of using refs using callback function

import React, { Component } from 'react'

export class Refs extends Component {
    constructor(props) {
      super(props)                               
      this.cbRef = null                       // creating a attribute to store a refrence element, temporarliy assigning a attribute to null value
      this.setCbRef = element =>{            
        this.cbRef = element                 // assign
      }
    }

   componentDidMount()
   {
    if(this.cbRef)
    this.cbRef.focus()
   }

   clickHandler = () =>{
    alert(this.cbRef.value)
   }

  render() {
    return (
      <div>
        <input type="text" ref={this.setCbRef} />
        <button onClick={this.clickHandler}>Click Me</button>
      </div>
    )
  }
}

export default Refs
*/
