import React, { Component } from 'react'

export class ClassCounterOne extends Component {
    constructor(props) {
      super(props)
    
      this.state = {       // Two states count and name
        count : 0,
        name : ''
      }
    }

    componentDidMount()  // here component mount the Render the page when the component is mounted for the first time
    {
        document.title = `Clicked ${this.state.count} times`
    }

    componentDidUpdate(prevPros, prevState) // here, Component did update Will Render the page whenever the component is updated
    {                                       // but we are stopping the Re-rendering and rendering page whenever only count state updated
        if(prevState.count !=this.state.count) // This is done by comparing previous state with current state, the page will not re-render Whenever the input text field is updated
        {console.log('updating document title')
        document.title = `Clicked ${this.state.count} times`}
    }
    // In component did update, we can stop unnecessary re-rendering of component by comparing previous state. With this state, this improves performance

  render() {
    return (
      <div>
      <input
      type='text'
      value= {this.state.name}
      onChange={ e => {this.setState({name: e.target.value})}}/>  {/* setting the state on change in the input text field */}

    <button onClick={()=> this.setState({count:this.state.count+1})}>      {/* setting the state whenever the button is clicked incrementing the count value */}
        Click {this.state.count} times
    </button>
      </div>
    )
  }
}

export default ClassCounterOne