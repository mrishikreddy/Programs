// Note: in brower each component is rendered twice, so you can see the print statements twice in console
// to remove this comment the <strict> tag in index.js

import React, { Component } from 'react'


class LifeCycleB extends Component {
    constructor(props) {                                // Mount method
      super(props)
    
      this.state = {
         name : 'Rishik'
      }

      console.log('B constructor');
    }
    static getDerivedStateFromProps(props,state)         // Mount, Update Method
    {
        console.log('B getDerivedStateFromProps');
        return null
    }

    componentDidMount()                                  // Mount method
    {
        console.log('B component DidMount');
    }


    shouldComponentUpdate()                             // Update method
    {
      console.log('B shouldComponentUpdate');
      return true;
    }
    getSnapshotBeforeUpdate(prevProps,prevState)        // Update method
    { 
      console.log('B getSnapshotBeforeUpdate');
      return null;
    }

    componentDidUpdate()                                // Update method
    {
      console.log('B componentDidUpdate');
    }


  render() {                                            // Mount, Update Method
    console.log('B render')
    return (
        <div>
      <div>LifeCycleB</div>
      </div>
    )
  }
}

export default LifeCycleB