import React, { useEffect, useState } from 'react'

function IntervalHookCounter() {
    const [count,setCount] = useState(0)

    const tick = ()=>{
        setCount(count+1)
    }
    useEffect(()=>{                                         //useEffect takes function as argument
        const interval = setInterval(tick,1000)
        return ()=>{                                     //This is the cleanup function that gets executed when the component unmounts (is removed from the DOM). 
            clearInterval(interval)                      // It clears the timer interval using clearInterval to prevent memory leaks and unintended behavior.
        }
    },[count])  
    //The second argument to useEffect is an optional dependency array [count]. 
    //This tells React to rerun the effect only when the count state variable changes.
    //If you omit this array, the effect runs after every render, potentially causing performance issues.

  return (
    <div><h2>{count}</h2></div>
  )
}

export default IntervalHookCounter