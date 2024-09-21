import React, { useReducer } from 'react';    // import react and reducer

// here the usage we are using useReducer with different implementaion i.e. to impement as object

const initialState = {          // defining initialstate object with two attributes
  firstCounter: 0,       
  secondCounter: 7,
};

const reducer = (state, action) => {       // passing arguments state and action
    switch (action.type) {                 // action.type gives us type of action and action.value gives us the value of action which are passed as arguments in dispatch method
        case 'increment':
            return { ...state,firstCounter: state.firstCounter + action.value };  // here ...state is must to fetch already existing state and update only the given state
        case 'decrement':                                                         // if you don't do this, while working with firstcounter the state of secound counter will be erased and vice versa
            return { ...state,firstCounter: state.firstCounter - action.value };  //  
        case 'increment5':
            return { ...state,secondCounter: state.secondCounter + action.value };
        case 'decrement5':
            return { ...state,secondCounter: state.secondCounter - action.value };
        case 'reset':
            return initialState;
        default:
            return state;
    }
};

function CompoUseReducerTwo() {
    const [count, dispatch] = useReducer(reducer, initialState);   // use reducer returns two arguments one is count variable,and another is method
  return (
    <div>
        <h2>first Counter - {count.firstCounter}</h2>  {/* dispalying the counters and thier holding values */}
        <h2>second Counter - {count.secondCounter}</h2>
        <button onClick={() => dispatch({ type: 'increment', value: 1 })}>increment</button>
        <button onClick={() => dispatch({ type: 'decrement', value: 1 })}>decrement</button>
        <button onClick={() => dispatch({ type: 'increment', value: 5 })}>increment 5</button>
        <button onClick={() => dispatch({ type: 'decrement', value: 5 })}>decrement 5</button>
        <div>
        <button onClick={() => dispatch({ type: 'increment5', value: 1 })}>increment Counter Two</button>
        <button onClick={() => dispatch({ type: 'decrement5', value: 1 })}>decrement Counter Two</button>
        </div>
        <button onClick={() => dispatch({ type: 'reset' })}>reset</button>
    </div>
  )
}

export default CompoUseReducerTwo;
