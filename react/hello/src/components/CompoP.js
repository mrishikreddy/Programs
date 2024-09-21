import React,{useContext} from 'react'
import {CountContext} from '../App'   // importing Context

function CompoP() {
    const CC = useContext(CountContext)     // assinging context to variable
  return (
    <div>
        Component A - {CC.countState}       {/*using context object attributes and methods */}
        <button onClick={()=> CC.countDispatch('increment')}>increment</button>
        <button onClick={()=> CC.countDispatch('decrement')}>decrement</button>
        <button onClick={()=> CC.countDispatch('reset')}>reset</button>
    </div>
  )
}

export default CompoP