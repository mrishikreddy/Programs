import React,{useState, useEffect} from 'react'
import HookMouse from './HookMouse'

function MouseContainer(){
    const [display,setDisplay] = useState(true)     // setting the state of display to true
    return(
        <div>
            <button onClick={()=> setDisplay(!display)}>Toggle display</button>   {/*changes display from false to true vice versa */}
            {display && <HookMouse/>}     {/*This is a conditional rendering using a JSX fragment (<> </>) and the logical AND operator (&&). */}
        </div>
    )

} 

export default MouseContainer