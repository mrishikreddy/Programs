import React,{useState, useEffect} from 'react'
// use effect replaces component mount, component did update, And component will unmount
// Every time when we use the use effect, the component will re-render Even if any of State changes, this decreases the efficiency
// to improve efficiency, the extra parameter is passed in the use effect, which indicates that to consider only that state.
// if any changes occurs in that state, only the component will re-render, otherwise it will not re-render

function UseEffectConditionalRendering() {
    const [count,setCount] = useState(0)      // here, 2 states are declared one is counted and another is name
    const [name,setName] = useState('')

    useEffect(()=>                                                  // using use effect to create extra sideways that is updating document.title and printing in the console. Log.
        {console.log('updating the document title')
        document.title = `you clicked ${count} times`
        },[count])                                                  // Passing extra parameter count which is useState, So that use effect will consider only count and re-render the component whenever count is updated
  return (
    <div>
        <input type ='text' value={name} onChange={e=> setName(e.target.value)}/>     {/* here in onchange function The function is implemented, otherwise it would call a call back function, which renders the page in infinity times*/}
        <button onClick ={()=>setCount(count+1)}>clicked {count} times</button>      
        
    </div>
  )
}

export default UseEffectConditionalRendering