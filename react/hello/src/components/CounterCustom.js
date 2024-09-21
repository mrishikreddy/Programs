import React from 'react'
import useCounter from '../hooks/useCounter'

function CounterCustom()
{
    const [count,increment,decrement,reset] = useCounter(10,2)
    return (
    <div>
        <h2>count = {count}</h2>
        <button onClick={increment}>increment</button>
        <button onClick={decrement}>decrement</button>
        <button onClick={reset}>reset</button>
    </div>
    )

}

export default CounterCustom