import React, { Component } from 'react'
import CompoF from './CompoF'
import UserContext from './UserContext'

class CompoE extends Component {
  static contextType = UserContext // or use // CompoE.contextType=UserContext at below commented place

  render() {
    return (
      <div>
        <h1>Component E context {this.context}</h1>
      <CompoF />        {/* Nesting childern */}     
      </div>
    )
  }
}
  //CompoE.contextType=UserContext // or use   //static contextType = UserContext at above commented phase

export default CompoE

// the static contextType = UserContext or CompoE.contextType=UserContext is another way
// of using the context consumer
// but this technique has limitations
// 1. only applicable to class components
// 2. you can read only one context, if you want to read more than one context consumer component is helpfull