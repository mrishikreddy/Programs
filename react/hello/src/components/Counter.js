import React, { Component } from 'react'

class Counter extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         count : 0
      }
    }
    incre()
    {
        this.setState(prevState =>({
           count : prevState.count+1
        }))
        console.log(this.state.count);
    }

    increFive()
    {
        this.incre();
        this.incre();
        this.incre();
        this.incre();
        this.incre();
    }

  render() {
    return (
      <div><h2>Count : {this.state.count}</h2>
      <button onClick={()=> this.increFive()}>Increment</button>
      </div>
    )
  }
}

export default Counter