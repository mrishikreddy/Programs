import React, { Component } from 'react'
import ChildComponent from './ChildComponent'   // including child component

export class ParentComponent extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         ParentName : 'Parent'
      }

      this.greetparent = this.greetparent.bind(this)            // EventBinding to handle this keyword (3rd method)
    }

    greetparent(ChildName)
    {
        alert( `Hello ${this.state.ParentName} from ${ChildName}`)
    }
  render() {
    return (
      <ChildComponent  greetHandler = {this.greetparent}/>     // greethandler = greetparent, therefore it accepts a argument
    )                                                          // which was sent by child component
  }
}

export default ParentComponent