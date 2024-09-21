// comment <React.strictmode> for better visibility
import React, { Component } from 'react'
import Memo from './Memo';                              // including memo component

export class ParentComp extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         name : 'Rishik'
      }
    }

    componentDidMount()             // re-renders (calls the render method when ever a component is intiated) the elements
    {
        setInterval(() => {            // this makes componentDidMount to re-render for given time interval repeatedly
            this.setState({
                name : 'Rishik Reddy'
            })
        }, 2000);
    }
  render() {
    console.log("In Parent Component");
    return (
      <div>Parent Component
       <Memo name={this.state.name}/>           {/* Note sending the this.state.name argument this is recived as props */}
      </div>
    )
  }
}

export default ParentComp