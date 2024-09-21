import React, { Component } from 'react'
import withCounter from './withCounter'            // extending HOC component

class HoverCounter extends Component {
  render() {
    const{counts,incrementCount} = this.props          // getting props from state of HOC
    return <h2 onMouseOver={incrementCount}>hovered {counts} times</h2>
  }
}

export default withCounter(HoverCounter,10)             // wrapping inside HOC funtion and returning it