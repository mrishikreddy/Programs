import React, { Component } from 'react'

export class regularComp extends Component {
  render() {
    console.log("In Regular Component");
    return (
      <div>Regular Component {this.props.name}</div>        // here props is used becaue value is revcived
    )
  }
}

export default regularComp