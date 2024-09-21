import React, { Component } from 'react'
import Inputele from './Inputele'

class ParentInput extends Component {
    constructor(props) {
      super(props)
      this.componentRef = React.createRef()
    }

    clickHandler =() =>
    {
        this.componentRef.current.focusInput()
    }

  render() {
    return (
      <div>
        <Inputele ref={this.componentRef}/>
        <button onClick={this.clickHandler}>Focus</button>
      </div>
    )
  }
}

export default ParentInput