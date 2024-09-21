// Note: in brower each component is rendered twice, so you can see the print statements twice in console
// to remove this comment the <strict> tag in index.js 

import React, { Component } from 'react'
import LifeCycleB from './LifeCycleB';

class LifeCycleA extends Component {
    constructor(props) {                            // Mount method
      super(props)
    
      this.state = {
         name : 'Rishik'
      }

      console.log('A constructor');
    }
    static getDerivedStateFromProps(props,state)     // Mount, Update Method
    {
        console.log('A getDerivedStateFromProps');
        return null;
    }

    componentDidMount()                              // Mount method
    {
        console.log('A component DidMount');
    }

    shouldComponentUpdate()                          // Update method
    {
      console.log('A shouldComponentUpdate');
      return true;
    }
    getSnapshotBeforeUpdate(prevProps,prevState)    // update method
    {
      console.log('A getSnapshotBeforeUpdate');
      return null;
    }

    componentDidUpdate()                          // update method
    {
      console.log('A componentDidUpdate');
    }

    changeState = () => {
      this.setState({
        name : 'Hello world'
      })
    }

  render() {                                      // Mount,Update method
    console.log('A render');
    return (
        <div>
      <div>LifeCycleA</div>
      <LifeCycleB/>
      <button onClick ={this.changeState}>Change state</button>          {/* calling a method to make some state changes to activate the update methods */}
      </div>
    )
  }
}

export default LifeCycleA