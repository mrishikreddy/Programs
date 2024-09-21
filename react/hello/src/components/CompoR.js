import React,{useContext} from 'react'
import {CountContext} from '../App'

function CompoR() {
    const CC = useContext(CountContext)
  return (
    <div>
        Component R - {CC.countState}
        <button onClick={()=> CC.countDispatch('increment')}>increment</button>
        <button onClick={()=> CC.countDispatch('decrement')}>decrement</button>
        <button onClick={()=> CC.countDispatch('reset')}>reset</button>
    </div>
  )
}

export default CompoR