import React,{useState} from 'react'      // importing react and useState


function HookCounter() {
    const [count,setCount] =useState(0)           // You stay text and argument and returns to values. One is a variable and another is a method.
  return (
    <div>
        <button on onClick={()=> setCount(count+1)}>Count {count}</button>  {/* share the account method, increments count automatically, whenever the button is clicked */}
    </div>    // always use arrow functions on a on click handler, otherwise, the function would call directly and you make it undefined values
  )
}

export default HookCounter