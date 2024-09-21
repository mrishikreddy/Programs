import React,{useReducer} from 'react'

// if we need multiple elements with same state transition we will use multiple use reducers

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

function CompoUseReducerThree() {
    const [count,dispatch] = useReducer(reducer,inititalState)   // use reducer returns two arguments one is count variable,and another is method
    const [countTwo,dispatchTwo] = useReducer(reducer,inititalState) // another same use reducer is acccessed to handle another elements
  return (
    <div>
        <div>
        <h2>Count - {count}</h2>
        <button onClick={()=> dispatch('increment')}>increment</button>
        <button onClick={()=> dispatch('decrement')}>decrement</button>
        <button onClick={()=> dispatch('reset')}>reset</button>
        </div>
        <div>
        <h2>Count Two - {countTwo}</h2>     {/*the variables which are assigned with second use reducer are used in this div*/}
        <button onClick={()=> dispatchTwo('increment')}>increment</button>
        <button onClick={()=> dispatchTwo('decrement')}>decrement</button>
        <button onClick={()=> dispatchTwo('reset')}>reset</button>
        </div>
    </div>
  )
}

export default CompoUseReducerThree

