import React, { Component } from 'react'
import withCounter from './withCounter' // extending HOC component

class ClickCounter extends Component {
  render() {
    const {counts,incrementCount} = this.props   // getting props from state of HOC
    return (
      <button onClick={incrementCount}>
        {this.props.name} clicked {counts} times
      </button>
    )
  }
}

export default withCounter(ClickCounter,5)        // wrapping inside HOC funtion and returning it