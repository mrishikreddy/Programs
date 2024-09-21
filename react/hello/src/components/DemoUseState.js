import React,{useState} from 'react'

export const DemoUseState = () =>
{
    const [count,setCount] = useState(0)
    console.log('useStateRender')
    return(
        <div>
            Count : {count}
            <div>
            <button onClick={()=>setCount(c=>c+1)}>incre 1</button>
            <button onClick={()=>setCount(0)}>set to 0</button>
            <button onClick={()=>setCount(5)}>set to 5</button>
            </div>
        </div>
    )
}

export default DemoUseState

