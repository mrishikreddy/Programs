/* conditional rendering gives elemnet based on conditions */
import React, { Component } from 'react'

export class UserGreetings extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
        isLoggedIn : true          // use true or false, only small case letters
      }
    }
  render() {

    /* If-Else method
    if(this.state.isLoggedIn)
    return <div>Hello user</div>
    else
    return <div>Hello vistior</div>*/


    /* Using Element variables 
    let msg;
    if(this.state.isLoggedIn)
    {msg = <div>Hello user</div>}             // use curly brackets for mutliline block of conditional operator 
    else
    msg = <div>Hello visitor</div>
    return msg */


    // Using teritary conditional operators
    return(
       this.state.isLoggedIn ? (<div>Hello user</div>) : (<div>Hello visitor</div>)
      )


      
    /* short circuit oparater apporach                       | this method works in a way that if left hand side is true
    return this.state.isLoggedIn && <div>Hello user</div>    | it returns right hand side otherwise it returns nothing
    */                                                 //    | it special case of teritary operator
                                                          
  }
}

export default UserGreetings