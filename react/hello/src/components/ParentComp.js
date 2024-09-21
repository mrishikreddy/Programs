// comment <React.strictmode> for better visibility
import React, { Component } from 'react'
import RegularComp from './regularComp'      // including regularcomp to work with it
import PureComp from './PureComp'           // including purecomp to work with it

export class ParentComp extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         name : 'Rishik'
      }
    }

    componentDidMount()          // re-renders (calls the render method when ever a component is intiated) the elements
    {
        setInterval(() => {
            this.setState({                 // this makes componentDidMount to re-render for given time interval repeatedly
                name : 'Rishik Reddy'
            })
        }, 2000);
    }
  render() {
    console.log("In Parent Component");
    return (
      <div>Parent Component
        <RegularComp name={this.state.name} />       {/* Note sending the this.state.name argument this is recived as props */}
        <PureComp name={this.state.name}/>           {/* Note sending the this.state.name argument this is recived as props */}
      </div>
    )
  }
}

export default ParentComp