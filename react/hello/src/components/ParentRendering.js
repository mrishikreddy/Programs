import React,{useState} from 'react'
import ChildRendering from './ChildRendering'   // Importing child

export const DemoUseState = () =>
{
    const [count,setCount] = useState(0)
    console.log("Parent Render")
    return(
        <div>
            Count : {count}
            <div>
            <button onClick={()=>setCount(c=>c+1)}>incre 1</button>
            <button onClick={()=>setCount(0)}>set to 0</button>
            <button onClick={()=>setCount(5)}>set to 5</button>
            </div>
            <ChildRendering/>    {/* calling the child component */}
        </div>
    )
}

export default DemoUseState

