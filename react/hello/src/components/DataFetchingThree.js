import React,{useState, useEffect} from 'react'
import axios from 'axios'                    // importing axios package to work with API

function DataFetchingTwo() {
    const [post,setPost] = useState({})     // setting useState to store indiviudal post
    const [id,setId] = useState(1)          // setting useState to store the id
    const [idFromButtonClick,setIdFromButtonClick] = useState(1)

    const handleClick=()=>{
        setIdFromButtonClick(id)
    }

    useEffect(()=>{
        axios
        .get(`https://jsonplaceholder.typicode.com/posts/${id}`)   // making get request from url
        .then(res =>  {                                     // then method cathing the sequence printing in console
            console.log(res);                               // assigning the data to Posts with help of setPosts method
            setPost(res.data)
        })
        .catch(err =>{
            console.log('unable to fetch data',err)
        })
        
    },[idFromButtonClick])   // here inside dependency paramenter id is used to indicate useEffect that to re-render the page whenever id is updated

  return (
    <div>
        <input type='text' value={id} onChange={e=> setId(e.target.value)}></input>    {/*Here e.target.value represent the text entered in input text field*/}
        <button onClick={handleClick}>Fetch Post</button>
        <div>{post.title}</div>
    </div>
  )
}

export default DataFetchingTwo