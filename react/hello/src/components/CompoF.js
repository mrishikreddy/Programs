import React, { Component } from 'react'
import { UserConsumer } from './UserContext'     // import context file

class CompoF extends Component {
  render() {
    return (
      <UserConsumer>
        {
            (username) =>                         // recieving the paramenter "value" and assigning it to variable username
            {return <h1>Hello {username}</h1>} 
        }
      </UserConsumer>
    )
  }
}

export default CompoF