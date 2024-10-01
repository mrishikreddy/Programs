/*Form elements whose value is controlled by react is called as controlled components */
import React, { Component } from 'react'

class From extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
        username :'',
        comments : '',
        topic : 'react'
      }
    }

    handleUsernameChange = (event) =>{     // when you pass a function to handler the unchanged event itself is passed as a parameter
        this.setState({
            username : event.target.value  // changing the username as it should be shown in text bar when user enters something
        })
    }
    handleCommentChange = (event) =>{
      this.setState({
        comments : event.target.value
      })
    }
    handleTopicChange = (event) =>{
      this.setState({
        topic : event.target.value
      })
    }

    handleSubmit =(event) =>{
      alert("values submitted successfully")
      event.preventDefault()                      // prevents the clearens already entered values after submission
    }
  render() {
    return (
      <form onSubmit={this.handleSubmit}>
      <div>
        <label>Username</label>
        <input type='text' value={this.state.username} onChange={this.handleUsernameChange} />
        <div>
        <label>Comments</label>
        <input type='textarea'value={this.state.comments} onChange={this.handleCommentChange} />
        </div>
        <div>
        <label>Topic</label>
        <select value={this.topic} onChange={this.handleTopicChange}>
          <option>react</option>
          <option>vue</option>
          <option>angular</option>
        </select>
        </div>
      </div>
      <button type='submit'>Submit</button>
      </form>  
    )
  }
}

export default From