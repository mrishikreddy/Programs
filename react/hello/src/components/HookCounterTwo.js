import React,{useState} from 'react'

function HookCounterTwo() {
    const intialcount = 0
    const [count,setCount] = useState(intialcount)

    /* const incrementFive=() =>{  
        for(let i = 0;i<5;i++)
        setCount(count+1)
    } */
    // This function Increments of value of count, only one time because all instances of eye from 0 to 5 will take place at a single time
    // To avoid such error, Inside account, a arrow function is implement, which takes the previous state and implement it by one
    
    const incrementFive =() =>{  
        for(let i = 0;i<5;i++)
        setCount(prevCount => prevCount + 1)
    }
  return (
    <div>
        <h2>Count : {count}</h2><br></br>
        <button onClick={()=>setCount(intialcount)}>Reset</button>        {/* here you may get doubt Why are you writing set count in the arrow function Inside on click*/}
        <button onClick={()=>setCount(count +1)}>Increment</button>       {/* but if we do not write setcount in the arrow function, it will call a callback function, which will render the HTML multiple times */}
        <button onClick={()=>setCount(count-1)}>Decrement</button>
        <button onClick={incrementFive}>Increment Five</button>             {/* when calling a function, which is already designed, no need to call it, Inside arrow function */}
    </div>
  )
}

export default HookCounterTwo