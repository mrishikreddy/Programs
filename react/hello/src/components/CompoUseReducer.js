import React,{useReducer} from 'react'

const inititalState = 0
const reducer  = (state,action) =>{      // reducer returns two variables two variables state and another action
    switch(action)                      // setting up action 
    {
        case 'increment':
            return state+1
        case 'decrement':
            return state-1
        case 'reset':
            return inititalState
        default:
            return state
    }
}

function CompoUseReducer() {
    const [count,dispatch] = useReducer(reducer,inititalState)   // use reducer returns two arguments one is count variable,and another is method
  return (
    <div>
        <h2>Count - {count}</h2>
        <button onClick={()=> dispatch('increment')}>increment</button>
        <button onClick={()=> dispatch('decrement')}>decrement</button>
        <button onClick={()=> dispatch('reset')}>reset</button>
    </div>
  )
}

export default CompoUseReducer

