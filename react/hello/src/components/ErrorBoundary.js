import React, { Component } from 'react'

class ErrorBoundary extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
        hasError :false,
      }
    }

    static getDerivedStateFromError(error)  // get state to handle it when we caught errors
    { 
        return {hasError : true}
        
    }
  render() {
    
      if(this.state.hasError)               // returning UI based on state variable
      {
        return <h2>Something went wrong</h2>
      }
    return this.props.children // children refers to component we are actually rendering
                               // if no error is present it renders childern components 
                               // which are wrapped by ErrorBoundary component i.e. Hero.js
  }
}

export default ErrorBoundary