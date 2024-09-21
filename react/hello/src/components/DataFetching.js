import React,{useState, useEffect} from 'react'
import axios from 'axios'                    // importing axios package to work with API

function DataFetching() {
    const [posts,setPosts] = useState([])     // setting state

    useEffect(()=>{
        axios
        .get('https://jsonplaceholder.typicode.com/posts')   // making get request from url
        .then(res =>  {                                     // then method cathing the sequence printing in console
            console.log(res);                               // assigning the data to Posts with help of setPosts method
            setPosts(res.data)
        })
        .catch(err =>{
            console.log(err)
        })
        
    },[])   // to call API only one time, i.e.when Component is mounted

  return (
    <div>
        <ul>
            {
            posts.map(post => (<li key={post.id}>{post.title}</li>))
            }
        </ul>
    </div>
  )
}

export default DataFetching