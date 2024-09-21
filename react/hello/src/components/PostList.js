import React, { Component } from 'react'
import axios from 'axios'                 // importing axios library

class PostList extends Component {
  constructor(props) {
    super(props)
  
    this.state = {
       posts:[],                      // creating a state to store the posts 
       errormsg :''                   //creating the state to store error message
    }
  }

  componentDidMount()
  {
    axios.get('https://jsonplaceholder.typicode.com/posts')        // using get method to fetch data from API
    .then(response =>{                                             // using callback method to ensure that the remaining code works only after the fetching is done
      console.log(response)                                       // logging the response
      this.setState({posts:response.data})                        // setting state to store store the response.data where the actual data resides in response object
    })
    .catch(error=>{                                               // using catch method tpo catch error and changing state of errormsg if any error found
      this.setState({errormsg:'unable to retrive the data'})
      console.log('error, the data cannot be obtained from given link')
    })
 
  }
  render() {
    const {posts,errormsg} =this.state               // this is done to simplify the code so that we no need to use this.state every where in code
    /*      {      or else we should write like this                      
        this.state.posts.length ?
        this.state.posts.map(post => <div key={post.id}>{post.userId}:{post.title}</div>):
        null
        }
        {
          this.state.errormsg?
          <div>{this.state.errormsg}</div>:
          null
        } */
    return (
      <div>PostList
        {                           // JSX is always done inside of brackets in html component
        posts.length ?              // using tertianry operator, if posts.length > 1, using map method it renders every post on webpage
        posts.map(post => <div key={post.id}>{post.userId}:{post.title}</div>):                           // else renders null
        null
        }
        {
          errormsg?                   // if any this.state.errormsg contains any string, dispalys string else renders null
          <div>{errormsg}</div>:
          null
        }
        
      </div>
    )
  }
}

export default PostList